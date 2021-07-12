`timescale 1ns/ 1ns
`include "macro.v"
`define BLTZAL_TEST_HEX_FILENAME "../overall_test/bltzal-test.txt"
`define BLTZAL_TEST_REGS_FILENAME "../overall_test/bltzal-test-regs.txt"

module bltzal_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;

    // local variables
    integer i, t, inc;
    reg [4:0] LastAWr;
    reg [31:0] expectedRegs[31:0];

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset),
        .PrDIn(32'b0),
        .HWInt(`CP0_DEV_CNT'b0),
        .Wen(),
        .PrAddr(),
        .PrDOut()
    );

    initial begin
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        $display(" *BLTZAL test started.");
        
        t = 1; reset = 1;
        $display("      Read from file.");
        $readmemh(`BLTZAL_TEST_HEX_FILENAME, mips1.ifu.im.im, `CODE_SEG_PC, `CODE_SEG_PC+400);
        #10 $display("      Reset finished."); reset = 0;
        `ifdef DEBUG
        $stop;
        `endif
        $display("      Start running");
        LastAWr = 0;
        for(i=0; i<100 && mips1.instruction !== 32'bx; i=i+1) begin
            #1 $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b",
             t, i, mips1.PC, mips1.StoredInstruction, mips1.ctr.status, mips1.ctr.signals);
            // $stop;
            LastAWr = mips1.AWr;
            #9;
            for(inc=0;inc<10;inc=inc+1)if(mips1.ctr.status !== `S1) #10;
        end
        $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b, last instr: regs[%d]=%h",
         t, i, mips1.PC, mips1.StoredInstruction, mips1.ctr.status, mips1.ctr.signals, LastAWr, mips1.gpr.regs[LastAWr]);
            
        // $readmemh(`BLTZAL_TEST_REGS_FILENAME, expectedRegs);
        // for(i=0;i<32;i=i+1) begin
        //     $display("      regs[%d]=%h == %h",i,mips1.gpr.regs[i], expectedRegs[i]);
        //     if(~(mips1.gpr.regs[i] === expectedRegs[i])) $display("Assertion Error");
        // end
        $display(" *BLTZAL test finished.");
        finish = 1;
    end

    always @(clk or start) begin
        if(start) begin
            clk = 0;
        end else begin
            #1 if(t%5===0) clk = ~clk;
        end
    end

    always begin
        #1 if(~finish) t = t+1;
    end

endmodule