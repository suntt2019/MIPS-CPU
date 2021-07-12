`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module bridge_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [31:0] PrAddr, PrWD;
    reg [31:0] DevRDTC, DevRDIN32, DevRDOUT32;
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
        .DevRDTC(DevRDTC),
        .DevRDIN32(DevRDIN32),
        .DevRDOUT32(DevRDOUT32),
        .Wen(),
        .DevWr()
    );

    initial begin
        finish = 0;
    end

always @(posedge start) begin
        $display(" *Bridge test started.");
        
        DevRDTC = 32'h1234_5678;
        DevRDIN32 = 32'h8765_fedc;
        DevRDOUT32 = 32'h89ab_cdef;
        PrWD = 32'hfedc_4321;

        // Read test
        //                                                  4<-`DEV_ADDR_WD
        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_TC, 4'h5}; 
        #1 $display("    Read test(DEV_TC): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h1234_5678, DevAddr, 4'h5);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_IN32, 4'h7}; 
        #1 $display("    Read test(DEV_IN32): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h8765_fedc, DevAddr, 4'h7);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_OUT32, 4'hf}; 
        #1 $display("    Read test(DEV_OUT32): PrRD=%h == %h, DevAddr=%h == %h",
         PrRD, 32'h89ab_cdef, DevAddr, 4'hf);
        
        // Write test
        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_TC, 4'h3}; 
        #1 $display("    Read test(DEV_TC): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 4'h3);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_IN32, 4'h2}; 
        #1 $display("    Read test(DEV_IN32): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 4'h2);

        PrAddr = {{32-`DEV_ADDR_WD-`DEV_ID_WD{0}}, `DEV_OUT32, 4'he}; 
        #1 $display("    Read test(DEV_OUT32): DevWD=%h == %h, DevAddr=%h == %h",
         DevWD, 32'hfedc_4321, DevAddr, 4'he);

        $display(" *Bridge test finished.");
        finish = 1;
    end

endmodule