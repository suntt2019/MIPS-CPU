`timescale 1ns/ 1ns
module dm_test ();
    // tested module I/O
    reg clk, we;
    reg [31:0] din;
    reg [9:0] addr;
    wire [31:0] dout;

    // local variables
    integer i;
    parameter base = 8;

    dm_1k dm1 (
        .clk(clk),
        .we(we),
        .din(din),
        .addr(addr),
        .dout(dout)
    );

    initial begin

        $display("DM test start.");
        clk = 0;
        
        $display("Write test.");
        we = 1;
        for (i=0;i<10;i=i+1) begin
            addr = i*4;
            din = base**i;
            #10
            $display("  test(#%d):dm[%d]<-%d == %d",i, addr, din, dout);
            dm_wr: assert(din === dout);
        end

        $display("Read test.");
        we = 0;
        for (i=0;i<10;i=i+1) begin
            addr = (9-i)*4;
            din = 0;
            #10
            $display("  test(#%d):dm[%d]->%d == %d",i, addr, dout, base**(9-i));
            dm_rd: assert(base**(9-i) === dout);
        end

        $display("DM test finished.");
        $stop;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule