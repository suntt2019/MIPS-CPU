module divider(clk_in, clk_out, reset);
	input clk_in, reset;
	output reg clk_out;
	parameter RATIO=1000;
	integer cnt;
	
	always @(clk_in or reset) begin
		if(reset) begin
			cnt = 0;
			clk_out = 0;
			// $display("Divider: reset, cnt = %d, clk_out = %b",cnt,clk_out);
		end else begin
			if(cnt == 2) begin
				clk_out = ~clk_out;
				cnt = 0;
			end
			cnt = cnt+1;
			// $display("Divider: run, cnt = %d, clk_out = %b",cnt,clk_out);
		end
	end
endmodule
