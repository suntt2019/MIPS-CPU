module dt_mux(num_in, num_out, sel);
	input [31:0] num_in;
	input [2:0] sel;
	output [3:0] num_out;
	
	assign num_out = (sel === 3'h0)? num_in[3:0] :
						  (sel === 3'h1)? num_in[7:4] :
						  (sel === 3'h2)? num_in[11:8] :
						  (sel === 3'h3)? num_in[15:12] :
						  (sel === 3'h4)? num_in[19:16] :
						  (sel === 3'h5)? num_in[23:20] :
						  (sel === 3'h6)? num_in[27:24] :
						  num_in[31:28];
						  
	/*
	always @(sel) begin
		$display("MUX: sel=%d, in=%h, out=%h", sel, num_in, num_out);
	end
	*/
endmodule
