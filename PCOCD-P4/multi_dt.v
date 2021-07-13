module multi_dt(clk, reset, sel, num, ds, num_in);
	input clk, reset;
	input [31:0] num_in;
	output reg [2:0] sel;
	output reg [7:0] ds;
	output reg [3:0] num;
	
	always @(posedge clk or posedge reset) begin
		if(reset) begin
			sel <= 3'b000;
			ds <= 8'b10000000;
		end else begin
			// $display("sel=%d, ds=%b, num_in=%h, num=%h", sel, ds, num_in, num);
			case(sel)
				3'h0: num <= num_in[3:0];
				3'h1: num <= num_in[7:4];
				3'h2: num <= num_in[11:8];
				3'h3: num <= num_in[15:12];
				3'h4: num <= num_in[19:16];
				3'h5: num <= num_in[23:20];
				3'h6: num <= num_in[27:24];
				3'h7: num <= num_in[31:28];
			endcase
			ds <= {ds[6:0], ds[7]};
			sel <= sel+1;
		end
	end
endmodule
