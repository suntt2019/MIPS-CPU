`timescale 1ns/ 1ns

module dm_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, we;
    reg [31:0] din;
    reg [13:0] addr;
    wire [31:0] dout;

    // local variables
    integer i;
    parameter base = 9;

    dm_12k dm1 (
        .clk(clk),
        .we(we),
        .din(din),
        .addr(addr),
        .dout(dout)
    );

    initial begin
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        /*$display(" *DM test started.");*/
        
        
        /*$display("    Write test.");*/
        we = 1;
        for (i=0;i<10;i=i+1) begin
            addr = i*4;
            din = base**i;
            #10;
            /*$display("      test(#%d):dm[%d]<-%h == %h",i, addr, din, dout);*/
				/*$stop;*/
            // if(~(din === dout)) /*$display("Assertion Error");*/
        end

        /*$display("    Read test.");*/
        we = 0;
        for (i=0;i<10;i=i+1) begin
            addr = (9-i)*4;
            din = 0;
            #10;
            /*$display("      test(#%d):dm[%d]->%h == %h",i, addr, dout, base**(9-i));*/
            // if(~(base**(9-i) === dout)) /*$display("Assertion Error");*/
        end

        /*$display(" *DM test finished.");*/
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule