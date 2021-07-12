`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module ext_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [15:0] in;
    reg [1:0] EXTOp;
    wire [31:0] out;

    // local variables
    integer i;
    reg [31:0] expectedOut;

    // tested module
    EXT ext1(
        .in(in),
        .out(out),
        .EXTOp(EXTOp)
    );

    initial begin
        finish = 0;
    end

always @(posedge start) begin
        /*$display(" *EXT test started.");*/
        
        in = 'hfe34; EXTOp = `EXT_OP_ZERO; expectedOut = 'h0000_fe34;
        #1 /*$display("    zero-ext test: %h -> %h == %h", in, out, expectedOut);*/
        if(~(out == expectedOut)) /*$display("Assertion Error");*/
        
        in = 'hfe34; EXTOp = `EXT_OP_SIGN; expectedOut = 'hffff_fe34;
        #1 /*$display("    sign-ext test: %h -> %h == %h", in, out, expectedOut);*/
        if(~(out == expectedOut)) /*$display("Assertion Error");*/
        
        in = 'hfe34; EXTOp = `EXT_OP_LUI; expectedOut = 'hfe34_0000;
        #1 /*$display("    lui-ext test: %h -> %h == %h", in, out, expectedOut);*/
        if(~(out == expectedOut)) /*$display("Assertion Error");*/

        /*$display(" *EXT test finished.");*/
        finish = 1;
    end

endmodule