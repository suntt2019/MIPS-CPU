`timescale 1ns/ 1ns
`include "macro.v"

module devices_for_test(clk, we, in, addr, out);
    input clk, we;
    input [31:0] in, addr;
    output [31:0] out;
    reg [31:0]regs[16'h8000:0];

    assign out = regs[addr];
    always @(posedge clk) begin
        if(we) regs[addr] = in;
    end

endmodule

module instruction_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [`CP0_DEV_CNT:1] HWInt;
    wire [31:0] PrDIn;
    wire [31:0] PrAddr, PrDOut;
    wire Wen;

    // local variables
    integer i, t, inc;
    reg [31:0] instr;

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset),
        .PrDIn(PrDIn),
        .HWInt(HWInt),
        .Wen(Wen),
        .PrAddr(PrAddr),
        .PrDOut(PrDOut)
    );

    devices_for_test dev(
        .clk(clk),
        .in(PrDOut),
        .out(PrDIn),
        .addr(PrAddr),
        .we(Wen)
    );


    initial begin
        finish = 0;
    end

always @(posedge start) begin
        /*$display(" *Instruction test started.");*/
		  /*$display(" *Instruction test finished.");*/
        finish = 1;
    end
/*
    always begin
        #1
        mips1.ifu.im.im[`CODE_SEG_PC] = instr[31:24];
        mips1.ifu.im.im[`CODE_SEG_PC+1] = instr[23:16];
        mips1.ifu.im.im[`CODE_SEG_PC+2] = instr[15:8];
        mips1.ifu.im.im[`CODE_SEG_PC+3] = instr[7:0];
    end
*/
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