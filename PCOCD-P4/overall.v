module sys_test();
	
	integer t;
	reg clk, reset;
	reg [31:0] DIn;
	wire [31:0] DOut;
	
	main sys(
		.clk(clk),
		.reset(reset),
		.DIn(DIn),
		.DOut(DOut)
	);
	
	initial begin
		t = 0;
		clk = 0;
		reset = 1;
		DIn = 32'h19071110;
	end

	always begin
		if(t === 10) reset = 0;
		if(t%1000 === 0) DIn = DIn - 32'h10000;
		t = t+1;
		clk = ~clk;
		#10;
	end
endmodule
