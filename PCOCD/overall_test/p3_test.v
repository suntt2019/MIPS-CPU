`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module p3_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [31:0] DIn;
    wire [31:0] DOut;

    // local variables
    integer i;

    // tested module
    main sys(
        .clk(clk),
        .reset(reset),
        .DIn(DIn),
        .DOut(DOut)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *P3 test started.");
        
        $display(" *P3 test finished.");
        finish = 1;
    end

endmodule