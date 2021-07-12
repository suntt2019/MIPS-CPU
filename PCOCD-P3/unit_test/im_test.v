`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module im_test(start, finish);
    input start;
    output reg finish;
    
    // tested module I/O
    reg [15:0] addr;
    wire [31:0] dout;

    // local variables
    integer i;
    reg [31:0] expected;

    im_32k im1 (
        .addr(addr),
        .dout(dout)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *IM test started.");
        $display("    Read from file.");
        $readmemh(`unit_test_hex_filename, im1.im, `CODE_SEG_PC);
        $display("    Check memory");
        i = 0;
        addr = `CODE_SEG_PC;
        // test #0
        #10 expected = 32'h00010203;
        for (i=0;i<10;i=i+1) begin
            #1
            $display("      check %d: %h == %h", i, dout, expected);
            im_check: assert(dout === expected);
            addr = addr + 4;
            expected = expected + 32'h04040404;
        end
        finish = 1;
    end

endmodule