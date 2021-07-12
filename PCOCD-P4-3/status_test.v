`timescale 1ns/ 1ns
`include "macro.v"

module status_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;

    // local variables
    integer i, t;

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset)
    );

    initial begin
        finish = 0;
    end

always @(posedge start) begin
        /*$display(" *Status test started.");*/
        
        /*$display("    Status 0 test: ");*/

        /*$display(" *Status test finished.");*/
        finish = 1;
    end

endmodule