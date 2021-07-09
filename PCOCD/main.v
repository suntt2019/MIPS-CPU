`include "../macro.v"

module main(clk, reset, DIn, DOut);
    input clk, reset;
    input [31:0] DIn;
    output [31:0] DOut;

    wire [31:0] PrAddr, PrDIn, PrDOut;
    wire [`DEV_ADDR_WD:1] DevAddr;
    wire [`CP0_DEV_CNT:1] HWInt;

    wire [31:0] DevRD [`DEV_COUNT-1:0];
    wire [31:0] TCRD;
    assign DevRD[`DEV_TC] = TCRD;
    assign DevRD[`DEV_IN32] = DIn;
    assign DevRD[`DEV_OUT32] = 32'b0; // may be use a special number

    wire [31:0] DevWD;
    assign DOut = DevWD;

    mips cpu(
        .clk(clk),
        .rst(reset),
        .PrDIn(PrDIn),
        .HWInt(HWInt),
        .Wen(Wen),
        .PrAddr(PrAddr),
        .PrDOut(PrDOut)
    );

    Bridge bridge(
        .PrAddr(PrAddr),
        .PrWD(PrDOut),
        .DevWD(DevWD),
        .PrRD(PrDIn),
        .DevAddr(DevAddr),
        .DevRD(DevRD)
    );

    TC tc1(
        .clk_i(clk),
        .rst_i(reset),
        .we_i(MemWr),
        .add_i(DevAddr),
        .dat_i(DevWD),
        .irq(irq),
        .dat_o(TCRD)
    );


endmodule
