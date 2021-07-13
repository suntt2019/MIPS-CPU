module smoke_test();
	reg clk, nReset;
	reg [31:0] switches;
	wire [6:0] dt, dt2;
	wire [7:0] ds;
	wire [15:0]led;
	
	smoke smoke1(
		.clk(clk),
		.nReset(nReset),
		.switches(switches),
		.digital_tubes(dt),
		.digital_tubes2(dt2),
		.digital_sel(ds),
		.led(led)
	);
	
	
	integer t;
	
	initial begin
		t = 0;
		clk = 0;
		nReset = 0;
		switches = 32'h19071110;
	end

	always begin
		if(t === 10) nReset = 1;
		if(t%(1000*50000) === 0) switches = switches - 32'h10000;
		t = t+1;
		clk = ~clk;
		#10;
	end
	
	
endmodule
