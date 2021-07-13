module dynamic_scanner(clk, reset, ds, sel);
	input clk, reset;
	output reg [7:0]ds;
	output reg [2:0]sel;

	always @(posedge clk or posedge reset) begin
		if(reset) begin
			sel = 0;
			ds=8'b10101010;
		end else begin
			case(sel)
				3'b000: ds<=8'b00000001; // ds=8'b11111110;b00000001
				3'b001: ds<=8'b00000010; // ds=8'b11111101;b00000010
				3'b010: ds<=8'b00000100; // ds=8'b11111011;b00000100
				3'b011: ds<=8'b00001000; // ds=8'b11110111;b00001000
				3'b100: ds<=8'b00010000; // ds=8'b11101111;b00010000
				3'b101: ds<=8'b00100000; // ds=8'b11011111;b00100000
				3'b110: ds<=8'b01000000; // ds=8'b10111111;b01000000
				3'b111: ds<=8'b10000000; // ds=8'b01111111;b10000000
			endcase
			sel <= sel+1;
		end
	end
	
endmodule
