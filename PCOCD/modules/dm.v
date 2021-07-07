module dm_1k(addr, din, we, clk, dout);
    input   [9:0]  addr;  // address bus
    input   [31:0]  din;   // 32-bit input data
    input           we;    // memory write enable
    input           clk;   // clock
    output  [31:0]  dout;  // 32-bit memory output
    reg     [7:0]  dm[1023:0];

    always @(posedge clk) begin
        if(we) begin
            $display("dm[%d]=%h",addr,din);
            dm[addr] = din[7:0];
            dm[addr+1] = din[15:8];
            dm[addr+2] = din[23:16];
            dm[addr+3] = din[31:24];
        end
    end

    assign dout = {dm[addr+3], dm[addr+2], dm[addr+1], dm[addr]};

endmodule