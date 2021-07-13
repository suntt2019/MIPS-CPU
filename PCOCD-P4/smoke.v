module smoke(clk, nReset, switches, digital_tubes, digital_tubes2, digital_sel, led);
	input [31:0] switches;
	input clk, nReset;
	output [6:0] digital_tubes, digital_tubes2;
	output [7:0] digital_sel;
	output [15:0] led;
	
	wire [3:0] nums;
	wire [2:0] sel;
	wire reset, clk_1hz;
	assign reset = ~nReset;
	assign digital_tubes2 = digital_tubes;
	assign led[0] = clk;
	assign led[1] = nReset;
	assign led[2] = reset;
	assign led[3] = DSClk;
	assign led[10:4] = digital_tubes;
	assign led[11] = 1'b1;
	assign led[12] = 1'b0;
	assign led[13] = clk_1hz;
	assign led[15:14] = 'b0;
	
	// Divider-DigitalTube
	divider #(.RATIO(100000)) div_dt( // 50000
		.clk_in(clk),
		.clk_out(DSClk),
		.reset(reset)
	);
	
	divider #(.RATIO(1000*100000)) div_1hz( // 100000000
		.clk_in(clk),
		.clk_out(clk_1hz),
		.reset(reset)
	);
	
	dt_encoder dte(
		.num(nums),
		.dt(digital_tubes)
	);
	
	
	multi_dt mdt(
		.clk(clk),
		.reset(reset),
		.num_in(switches),
		.ds(digital_sel),
		.sel(sel),
		.num(nums)
	);
	
	
endmodule
