module im_32k(addr, dout);
  input   [15:0]  addr;  // address bus
  output  [31:0]  dout;  // 32-bit memory output
  reg     [7:0]  im['h8000-1:0];
  
  assign dout = {im[addr], im[addr+1], im[addr+2], im[addr+3]};

endmodule