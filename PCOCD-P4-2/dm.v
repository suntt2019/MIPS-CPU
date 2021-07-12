module dm_12k(addr, din, we, clk, dout);
    input   [13:0]  addr;  // address bus
    input   [31:0]  din;   // 32-bit input data
    input           we;    // memory write enable
    input           clk;   // clock
    output  [31:0]  dout;  // 32-bit memory output
    reg     [7:0]  dm[12*1024-1:0];
    integer i;

    initial begin
        for(i=0;i<'h800;i=i+1) begin
            dm[i] = 8'b0;
        end
    end

    always @(posedge clk) begin
        if(we) begin
            `ifdef DEBUG
            $display("DM: dm[%d]=%h",addr,din);
            `endif
            dm[addr] = din[7:0];
            dm[addr+1] = din[15:8];
            dm[addr+2] = din[23:16];
            dm[addr+3] = din[31:24];
        end
    end

    assign dout = {dm[addr+3], dm[addr+2], dm[addr+1], dm[addr]};

endmodule