`timescale 1ns/ 1ns
`include "macro.v"
`define P1_TEST_HEX_FILENAME "hex/p1-test.txt"
`define P1_TEST_REGS_FILENAME "hex/p1-test-regs.txt"

module p1_test(start, finish);
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
        finish = 0; clk = 0; t = 1; 
    end

always @(posedge start) begin
        $display(" *P1 test started.");
        
        reset = 1;
        $display("      Read from file.");
        // $readmemh(`P1_TEST_HEX_FILENAME, mips1.ifu.im.im, `CODE_SEG_PC, `CODE_SEG_PC+400);
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
            for(inc=0;inc<10;inc=inc+1)if(mips1.ctr.status !== `S1) #10;
        end
        $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b",
         t, i, mips1.PC, mips1.StoredInstruction, mips1.ctr.status, mips1.ctr.signals);
            
        // // $readmemh(`P1_TEST_REGS_FILENAME, expectedRegs);
        // for(i=0;i<32;i=i+1) begin
        //     $display("      regs[%d]=%h == %h",i,mips1.gpr.regs[i], expectedRegs[i]);
        //     if(~(mips1.gpr.regs[i] === expectedRegs[i])) $display("Assertion Error");
        // end
        $display(" *P1 test finished.");
        finish = 1;
    end

    always @(clk or start) begin
        if(start) begin
            clk = 0;
        end else begin
            #1 if(t%5===0) clk = ~clk;
        end
    end

    always @(finish or start) begin
	 if(start) begin
            t=1;
        end else begin
				#1 if(~finish) t = t+1;
        end
    end

endmodule