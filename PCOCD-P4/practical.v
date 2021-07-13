module practical(clk, nReset, switches, digital_tubes, digital_tubes2, digital_sel, led);
	input clk, nReset;
	input [31:0] switches;
	output [6:0] digital_tubes, digital_tubes2;
	output [7:0] digital_sel;
	output [15:0] led;
	
	wire sysClk, TCClk, DSClk;
	wire [2:0] sel;
	wire reset;
	wire [3:0] nums;
	wire [31:0] DOut, revSwitches, revDOut;
	assign reset = ~nReset;
	assign digital_tubes2 = digital_tubes;
	
	assign led[0] = clk;
	assign led[1] = nReset;
	assign led[2] = reset;
	assign led[3] = DSClk;
	assign led[10:4] = digital_tubes;
	assign led[11] = 1'b1;
	assign led[12] = 1'b0;
	assign led[15:13] = ~sel;
	
	revert32 rIn(
		.in(switches),
		.out(revSwitches)
	);
	
	revert32 rOut(
		.in(DOut),
		.out(revDOut)
	);
	
	// Divider-Sys
	divider #(.RATIO(50)) div_sys( // 100000
		.clk_in(clk),
		.clk_out(sysClk),
		.reset(reset)
	);
	
	main sys(
		.clk(sysClk),
		.reset(reset),
		.DIn(switches),
		.DOut(DOut)
	);
	
	
	// Divider-DigitalTube
	divider #(.RATIO(100000)) div_dt( // 100000
		.clk_in(clk),
		.clk_out(DSClk),
		.reset(reset)
	);
	
	dt_encoder dte(
		.num(nums),
		.dt(digital_tubes)
	);
	/*
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
	*/
	
	multi_dt mdt(
		.clk(DSClk),
		.reset(reset),
		.num_in(revDOut),
		.ds(digital_sel),
		.sel(sel),
		.num(nums)
	);
	
	/*
	reg [3:0] last_num[1023:0];
	
	always @(digital_sel) begin
		$display("ds=%b, nums=%h, dt=%b", digital_sel, nums, digital_tubes);
		if(last_num[digital_sel] !== nums) begin
			$display("different! num[%b]: %h->%h", digital_sel, last_num[digital_sel], nums);
			last_num[digital_sel] = nums;
			$display("New value: %h", last_num[digital_sel]);
		end
	end
	*/
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
		DIn = 32'h12345678;
	end

	always begin
		if(t === 10) nReset = 1;
		// if(t%1000 === 0) DIn = DIn - 32'h10000;
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
