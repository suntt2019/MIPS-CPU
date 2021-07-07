`include "../macro.v"

module Reg32(clk, reset, we, in, out);
    input clk, reset, we;
    input [31:0] in;
    output reg [31:0] out;

    always @(posedge clk) begin
        if(reset) begin
            out = 32'b0;
        end else if(we) begin
            out = in;
        end
    end
endmodule
