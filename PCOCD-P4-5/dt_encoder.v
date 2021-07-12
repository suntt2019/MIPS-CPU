module dt_encoder(num,dt);
	input [3:0]num;
	output [0:6]dt; // dt: digital tube
	reg [0:6]dt;
	always @(num)
	begin
	 case(num)
		4'b0000: dt=7'b1111110;
		4'b0001: dt=7'b0110000;
		4'b0010: dt=7'b1101101;
		4'b0011: dt=7'b1111001;
		4'b0100: dt=7'b0110011;
		4'b0101: dt=7'b1011011;
		4'b0110: dt=7'b1011111;
		4'b0111: dt=7'b1110000;
		4'b1000: dt=7'b1111111;
		4'b1001: dt=7'b1111011;
		4'b1010: dt=7'b1110111;
		4'b1011: dt=7'b0011111;
		4'b1100: dt=7'b1001110;
		4'b1101: dt=7'b0111101;
		4'b1110: dt=7'b1001111;
		4'b1111: dt=7'b1000111;
		default: dt=7'b0000000;
	endcase
	end
endmodule