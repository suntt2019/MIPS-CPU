module dynamic_scanner(clk, reset, ds, sel);
	input clk, reset;
	output reg [7:0]ds;
	output reg [2:0]sel;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			sel = 0;
			ds=8'b10101010;
		end else begin
			sel = sel+1;
			case(sel)
				3'b000: ds=8'b11111110;
				3'b001: ds=8'b11111101;
				3'b010: ds=8'b11111011;
				3'b011: ds=8'b11110111;
				3'b100: ds=8'b11101111;
				3'b101: ds=8'b11011111;
				3'b110: ds=8'b10111111;
				3'b111: ds=8'b01111111;
			endcase
		end
	end
endmodule
