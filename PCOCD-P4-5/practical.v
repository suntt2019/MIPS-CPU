module practical(clk, nReset, switches, digital_tubes);
	input clk, nReset;
	input [31:0] switches;
	output [6:0] digital_tubes;
	
	integer cnt;
	reg cvtClk;
	wire reset;
	wire [3:0] nums;
	wire [31:0] DOut;
	assign reset = ~nReset;
	assign nums = DOut[3:0];
	
	// Divider
	always @(clk or reset) begin
		if(reset) begin
			cnt = 0;
			cvtClk = 0;
			// $display("Divider: reset, cnt = %d, cvtClk = %b",cnt,cvtClk);
		end else begin
			if(cnt == 2) begin
				cvtClk = ~cvtClk;
				cnt = 0;
			end
			cnt = cnt+1;
			// $display("Divider: run, cnt = %d, cvtClk = %b",cnt,cvtClk);
		end
	end
	
	main sys(
		.clk(cvtClk),
		.reset(reset),
		.DIn(switches),
		.DOut(DOut)
	);
	
	dt_encoder dte(
		.num(nums),
		.dt(digital_tubes)
	);
/*	
	dynamic_scanner ds(
		.clk(cvtClk),
		.ds(ds),
		.sel(sel)
	);
	*/
endmodule

module practical_test();
	
	integer t;
	reg clk, nReset;
	reg [31:0] DIn;
	wire [6:0] dt;
	
	practical p(
		.clk(clk),
		.nReset(nReset),
		.switches(DIn),
		.digital_tubes(dt)
	);
	
	initial begin
		t = 0;
		clk = 0;
		nReset = 0;
		DIn = 32'h19071110;
	end

	always begin
		if(t === 10) nReset = 1;
		if(t%1000 === 0) DIn = DIn - 32'h10000;
		t = t+1;
		clk = ~clk;
		#10;
	end
endmodule
