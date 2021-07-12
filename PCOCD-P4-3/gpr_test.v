`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module gpr_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset, WE;
    reg [1:0] FlagOp;
    reg [4:0] A1, A2, AWr;
    reg [31:0] Din, NFlag;
    wire [31:0] RD1, RD2, Flag;

    // local variables
    integer i;

    // tested module
    GPR gpr1(
        .clk(clk),
        .reset(reset),
        .WE(WE),
        .FlagOp(FlagOp),
        .A1(A1),
        .A2(A2),
        .AWr(AWr),
        .Din(Din),
        .Flag(Flag),
        .NFlag(NFlag),
        .RD1(RD1),
        .RD2(RD2)
    );

    initial begin
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        /*$display(" *GPR test started.");*/
        
        WE = `WR_DIS;
        reset = 1;
        FlagOp = `FLAG_OP_DIS;

        #10 /*$display("    Reset test:");*/
        for(i=0;i<32;i=i+2) begin
            A1 = i; A2 = i+1;
            //#1 /*$display("      regs[%d]=%h == %h, regs[%d]=%h == %h", i, RD1, 32'b0, i+1, RD2, 32'b0);*/
            // if(~(RD1 === 32'b0 && RD2 === 32'b0)) /*$display("Assertion Error");*/
        end
        reset = 0;

        WE = `WR_EN; FlagOp = `FLAG_OP_DIS; AWr = 20; A1 = AWr; Din = 32'hfedc_1234;
        #10 /*$display("    Write test(WE=1): regs[%d]<-%h, regs[%d]=%h == %h", AWr, Din, AWr, RD1, Din);*/
        if(~(RD1 === Din)) /*$display("Assertion Error");*/

        WE = `WR_DIS; FlagOp = `FLAG_OP_DIS; AWr = 20; A1 = AWr; Din = 32'h0123_4567;
        #10 /*$display("    Write test(WE=0): regs[%d]<-%h, regs[%d]=%h == %h", AWr, Din, AWr, RD1, 32'hfedc_1234);*/
        if(~(RD1 === 32'hfedc_1234)) /*$display("Assertion Error");*/

        WE = `WR_EN; FlagOp = `FLAG_OP_DIS; AWr = 0; A1 = AWr; Din = 32'h2345_6789;
        #10 /*$display("    Write test(EN=1, $0): regs[%d]<-%h, regs[%d]=%h == %h", AWr, Din, AWr, RD1, 32'h0);*/
        if(~(RD1 === 32'h0)) /*$display("Assertion Error");*/

        WE = `WR_DIS; FlagOp = `FLAG_OP_SET; NFlag = 32'h1234_cdef;
        #10 $display("    Flag test(FlagOp=Set): regs[%d]<-%h, regs[%d]=%h == %h",
         `REG_ADDR_FLAG, NFlag, `REG_ADDR_FLAG, Flag, NFlag);
        if(~(Flag === NFlag)) /*$display("Assertion Error");*/

        WE = `WR_DIS; FlagOp = `FLAG_OP_DIS; NFlag = 32'h0123_4567;
        #10 $display("    Flag test(FlagOp=Dis): regs[%d]<-%h, regs[%d]=%h == %h",
         `REG_ADDR_FLAG, NFlag, `REG_ADDR_FLAG, Flag, 32'h1234_cdef);
        if(~(Flag === 32'h1234_cdef)) /*$display("Assertion Error");*/
        
        WE = `WR_EN; FlagOp = `FLAG_OP_SET_AND_WR; AWr = 21; A1 = AWr; Din = 32'h9876_5432; NFlag = 32'h1212_3434;
        #10 $display("    Flag test(FlagOp=SetAndWr): regs[%d]<-%h, regs[%d]=%h == %h, NFlag=%h, Flag=%h == %h",
         AWr, Din, AWr, RD1, Din, NFlag, Flag, NFlag);
        if(~(RD1 === Din && Flag === NFlag)) /*$display("Assertion Error");*/
        WE = 0;

        /*$display(" *GPR test finished.");*/
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule