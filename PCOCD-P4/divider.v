module divider(clk_in, clk_out, reset);
	input clk_in, reset;
	output reg clk_out;
	parameter RATIO=1000;
	reg[34:0] cnt;
	
	always @(posedge clk_in or posedge reset) begin
		if(reset) begin
			// $display("RATIO=%d", RATIO);
			cnt <= 0;
			clk_out <= 0;
			// $display("Divider: reset(%d), cnt = %d, clk_out = %b", RATIO>>1, cnt, clk_out);
		end else begin
			if(cnt == (RATIO>>1)) begin
				clk_out <= ~clk_out;
				cnt <= 0;
			end else begin
				cnt <= cnt+1;
			end
			// $display("Divider: run(%d), break=%b cnt = %d, clk_out = %b", RATIO>>1, cnt == (RATIO>>1), cnt, clk_out);
		end
	end
endmodule
