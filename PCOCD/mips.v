module mips(clk, rst, debug_output) ;
    input           clk;   // clock
    input           rst;   // reset
    output reg debug_output;

    always @(clk) begin
        debug_output = clk;
    end



endmodule