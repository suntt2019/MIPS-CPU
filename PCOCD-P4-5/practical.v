module practical(clk, nReset, switches, digital_tubes, digital_sel);
	input clk, nReset;
	input [31:0] switches;
	output [6:0] digital_tubes;
	output [7:0] digital_sel;
	
	wire sysClk, TCClk, DSClk;
	wire [2:0] sel;
	wire reset;
	wire [3:0] nums;
	wire [31:0] DOut;
	assign reset = ~nReset;
	
	// Divider-Sys
	divider #(.RATIO(1)) div_sys(
		.clk_in(clk),
		.clk_out(sysClk),
		.reset(reset)
	);
	
	// Divider-DigitalTube
	divider #(.RATIO(1)) div_dt(
		.clk_in(clk),
		.clk_out(DSClk),
		.reset(reset)
	);
	
	main sys(
		.clk(sysClk),
		.reset(reset),
		.DIn(switches),
		.DOut(DOut)
	);
	
	dt_encoder dte(
		.num(nums),
		.dt(digital_tubes)
	);
	
	dynamic_scanner ds(
		.clk(DSClk),
		.ds(digital_sel),
		.sel(sel),
		.reset(reset)
	);
	
	dt_mux dtmux(
		.num_in(DOut),
		.num_out(nums),
		.sel(sel)
	);
	
endmodule

module practical_test();
	
	integer t;
	reg clk, nReset;
	reg [31:0] DIn;
	wire [6:0] dt;
	wire [7:0]ds;
	
	practical p(
		.clk(clk),
		.nReset(nReset),
		.switches(DIn),
		.digital_tubes(dt),
		.digital_sel(ds)
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
	
	/*
	always @(posedge clk) begin
		$display("tubes[%b]=%b", ds, dt);
	end
	*/
	
endmodule
