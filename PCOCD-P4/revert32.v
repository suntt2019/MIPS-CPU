module revert32(in, out);
	input [31:0] in;
	output [31:0] out;
	
	assign out = {in[3:0], in[7:4], in[11:8], in[15:12], in[19:16], in[23:20], in[27:24], in[31:28]};
	
endmodule
