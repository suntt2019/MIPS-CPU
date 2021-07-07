`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module xx_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    

    // local variables
    integer i;

    // tested module
    

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *XX test started.");
        
        $display(" *XX test finished.");
        finish = 1;
    end

endmodule