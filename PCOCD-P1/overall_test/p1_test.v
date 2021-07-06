`timescale 1ns/ 1ns
`include "../macro.v"
`define p1_test_hex_filename "../overall_test/p1-test.txt"

module p1_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;

    // local variables
    integer i, t;
    reg [4:0] LastAWr;

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *P1 test started.");
        
        clk = 0; t = 1; reset = 1;
        $display("      Read from file");
        $readmemh(`p1_test_hex_filename, mips1.ifu.im.im);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Start running");
        LastAWr = 0;
        for(i=0; i<100 && mips1.instruction !== 32'bx; i=i+1) begin
            $display("      t=%d,Step[%d], PC=%h, instruction=%h, signals=%b, last instr: regs[%d]=%h",
             t, i, mips1.PC, mips1.instruction, mips1.ctr.signals, LastAWr, mips1.gpr.regs[LastAWr]);
            // $stop;
            LastAWr = mips1.AWr;
            #10;
        end
        $display("      t=%d,Step[%d], PC=%h, instruction=%h, signals=%b, last instr: regs[%d]=%h",
         t, i, mips1.PC, mips1.instruction, mips1.ctr.signals, LastAWr, mips1.gpr.regs[LastAWr]);
        for(i=0;i<32;i=i+1) $display("      regs[%d]=%h",i,mips1.gpr.regs[i]);
        $display(" *P1 test finished.");
        finish = 1;
    end

    always begin
        #1 if(t%5===0) clk = ~clk;
    end

    always begin
        #1 t = t+1;
    end

endmodule