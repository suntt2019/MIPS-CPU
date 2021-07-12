`timescale 1ns/ 1ns
`include "../macro.v"
`define P3_TEST_HEX_MAIN_FILENAME "../overall_test/p3-test-main.txt"
`define P3_TEST_HEX_INT_FILENAME "../overall_test/p3-test-int.txt"
`define P3_TEST_REGS_FILENAME "../overall_test/p3-test-regs.txt"

module p3_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [31:0] DIn;
    wire [31:0] DOut;

    // local variables
    integer i, t, inc;
    reg [4:0] LastAWr;
    reg [31:0] expectedRegs[31:0];

    // tested module
    main sys(
        .clk(clk),
        .reset(reset),
        .DIn(DIn),
        .DOut(DOut)
    );

    initial begin
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        $display(" *P3 test started.");

        t = 1; reset = 1;
        $display("      Read from file.");
        $readmemh(`P3_TEST_HEX_MAIN_FILENAME, sys.cpu.ifu.im.im, `CODE_SEG_PC);
        $readmemh(`P3_TEST_HEX_INT_FILENAME, sys.cpu.ifu.im.im, `INT_PC);
        #10 $display("      Reset finished."); reset = 0;
        `ifdef DEBUG
        $stop;
        `endif
        $display("      Start running");
        LastAWr = 0;
        DIn = 32'h1907_1110;
        for(i=0;sys.cpu.instruction !== 32'bx; i=i+1) begin
            `ifdef INSTRUCTION_OUTPUT
            #1 $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b",
             t, i, sys.cpu.PC, sys.cpu.StoredInstruction, sys.cpu.ctr.status, sys.cpu.ctr.signals);
            `endif
            if(sys.cpu.PC === `CODE_SEG_PC + 40) begin
                $readmemh(`P3_TEST_REGS_FILENAME, expectedRegs);
                for(i=0;i<32;i=i+1) begin
                    $display("      regs[%d]=%h == %h",i,sys.cpu.gpr.regs[i], expectedRegs[i]);
                    if(~(sys.cpu.gpr.regs[i] === expectedRegs[i])) $display("Assertion Error");
                end;
            end
            // if(sys.cpu.PC === `CODE_SEG_PC + 16) $stop;
            // if(sys.cpu.PC === `INT_PC + 'h24) $display("ADD1!!!");
            // if(sys.cpu.PC === `INT_PC + 'h18) $display("**************************CHANGE!!!");
            if(i%100===0) DIn = DIn - 32'h1_0000;
            
            LastAWr = sys.cpu.AWr;
            #9;
            for(inc=0;inc<10;inc=inc+1) begin
                if(mips1.ctr.status !== `S1) begin
                    #10;
                    if(sys.DevWr[`DEV_OUT32]) $display("      Out=%h",DOut);
                end
            end
        end
        $display("      t=%d,Step[%d], PC=%h, StoredInstruction=%h, status=%h signals=%b, last instr: regs[%d]=%h",
         t, i, sys.cpu.PC, sys.cpu.StoredInstruction, sys.cpu.ctr.status, sys.cpu.ctr.signals, LastAWr, sys.cpu.gpr.regs[LastAWr]);

        $display(" *P3 test finished.");
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