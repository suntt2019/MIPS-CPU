`timescale 1ns/ 1ns
`include "../macro.v"
`define P1_TEST_HEX_FILENAME "../overall_test/p1-test.txt"
`define P1_TEST_REGS_FILENAME "../overall_test/p1-test-regs.txt"

module p1_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;

    // local variables
    integer i, t;
    reg [4:0] LastAWr;
    reg [31:0] expectedRegs[31:0];

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *P1 test started.");
        
        clk = 0; t = 1; reset = 1;
        $display("      Read from file.");
        $readmemh(`P1_TEST_HEX_FILENAME, mips1.ifu.im.im, `CODE_SEG_PC);
        #10 $display("      Reset finished."); reset = 0;
        `ifdef DEBUG
        $stop;
        `endif
        $display("      Start running");
        LastAWr = 0;
        for(i=0; i<100 && mips1.instruction !== 32'bx; i=i+1) begin
            #1 $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b",
             t, i, mips1.PC, mips1.StoredInstruction, mips1.ctr.status, mips1.ctr.signals);
            // if(i===43)$stop;
            LastAWr = mips1.AWr;
            #9;
            while(mips1.ctr.status !== `S1) #10;
        end
        $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b, last instr: regs[%d]=%h",
         t, i, mips1.PC, mips1.StoredInstruction, mips1.ctr.status, mips1.ctr.signals, LastAWr, mips1.gpr.regs[LastAWr]);
            
        $readmemh(`P1_TEST_REGS_FILENAME, expectedRegs);
        for(i=0;i<32;i=i+1) begin
            $display("      regs[%d]=%h == %h",i,mips1.gpr.regs[i], expectedRegs[i]);
            p1_reg: assert(mips1.gpr.regs[i] === expectedRegs[i]);
        end
        $display(" *P1 test finished.");
        finish = 1;
    end

    always begin
        #1 if(t%5===0) clk = ~clk;
    end

    always begin
        #1 if(~finish) t = t+1;
    end

endmodule