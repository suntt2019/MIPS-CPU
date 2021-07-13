module im_256(addr, dout);
  input   [7:0]  addr;  // address bus
  output  [31:0]  dout;  // 32-bit memory output
  reg     [7:0]  im[255:0];
  
  initial begin
		$readmemh("hex/p3-test-main.txt", im, 0, 56);
		$readmemh("hex/p3-test-int.txt", im, 128, 192);
	end
  
  assign dout = {im[addr], im[addr+1], im[addr+2], im[addr+3]};

endmodule