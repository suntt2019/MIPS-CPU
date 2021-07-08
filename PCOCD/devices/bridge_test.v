`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module bridge_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [31:0] PrAddr, PrWD;
    reg [31:0] DevRD [`DEV_COUNT-1:0];
    wire [31:0] PrRD, DevWD;
    wire [`DEV_ADDR_WD:1] DevAddr;

    // local variables
    integer i;

    // tested module
    Bridge bridge1(
        .PrAddr(PrAddr),
        .PrWD(PrWD),
        .DevWD(DevWD),
        .PrRD(PrRD),
        .DevAddr(DevAddr),
        .DevRD(DevRD)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *Bridge test started.");
        
        DevRD[`DEV_TC] = 32'h1234_5678;
        DevRD[`DEV_IN32] = 32'h8765_fedc;
        DevRD[`DEV_OUT32] = 32'h89ab_cdef;
        PrWD = 32'hfedc_4321;

        // Read test
        //                                                  8<-`DEV_ADDR_WD
        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_TC, 8'h45}; 
        #1 $display("    Read test(DEV_TC): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h1234_5678, DevAddr, 8'h45);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_IN32, 8'h67}; 
        #1 $display("    Read test(DEV_IN32): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h8765_fedc, DevAddr, 8'h67);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_OUT32, 8'hdf}; 
        #1 $display("    Read test(DEV_OUT32): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h89ab_cdef, DevAddr, 8'hdf);
        
        // Write test
        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_TC, 8'h73}; 
        #1 $display("    Read test(DEV_TC): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 8'h73);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_IN32, 8'h92}; 
        #1 $display("    Read test(DEV_IN32): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 8'h92);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_OUT32, 8'h7e}; 
        #1 $display("    Read test(DEV_OUT32): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 8'h7e);

        $display(" *Bridge test finished.");
        finish = 1;
    end

endmodule