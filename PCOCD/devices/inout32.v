`include "../macro.v"

module IN32(clk, reset, addr, we, Din, Dout, irq);
    input clk, reset;
    input we;
    input [1:0] addr;
    input [31:0] Din;
    output irq;
    output reg [31:0] Dout;

    assign irq = 0'b0;

    always@(posedge reset) begin
        Dout = 32'b0;
    end

endmodule

module OUT32(clk, reset, addr, we, Din, Dout, irq);
    input clk, reset;
    input we;
    input [1:0] addr;
    input [31:0] Din;
    output irq;
    output reg [31:0] Dout;

    assign irq = 0'b0;

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            Dout = 32'b0;
        end else begin
            if(we) Dout = Din;
        end
    end

endmodule
