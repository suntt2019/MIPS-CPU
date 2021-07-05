`timescale 1ns/ 1ns
module im_test ();
    // tested module I/O
    reg [9:0] addr;
    wire [31:0] dout;

    // local variables
    integer i;
    reg [31:0] expected;

    im_1k im1 (
        .addr(addr),
        .dout(dout)
    );

    initial begin
        $display("IM test start.");
        $display("Read from file");
        $readmemh("p1-test.txt", im1.im);
        $display("Check memory");
        i = 0;
        addr = 0;
        // test #0
        #10 expected = 32'h34100001;
        $display("check %d: %h == %h", i, dout, expected);
        im_check_0: assert(dout === expected);
        i = i+1; addr = addr + 4;
        // test #1
        #10 expected = 32'h34110003;
        $display("check %d: %h == %h", i, dout, expected);
        im_check_1: assert(dout === expected);
        i = i+1; addr = addr + 4;
        // test #2
        #10 expected = 32'h34080001;
        $display("check %d: %h == %h", i, dout, expected);
        im_check_2: assert(dout === expected);
        i = i+1; addr = addr + 4;
    end

endmodule