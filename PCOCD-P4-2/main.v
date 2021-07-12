`include "macro.v"

module main(clk, reset, DIn, DOut);
    input clk, reset;
    input [31:0] DIn;
    output [31:0] DOut;

    wire [31:0] PrAddr, PrDIn, PrDOut;
    wire [`DEV_ADDR_WD:1] DevAddr;
    wire [`CP0_DEV_CNT-1:0] HWInt;

    wire [31:0] DevRDTC, DevRDIN32, DevRDOUT32;
    wire [31:0] TCRD;
    wire irq;
    wire [`DEV_COUNT-1:0] DevWr;

    assign DevRDTC = TCRD;
    assign HWInt[`DEV_TC] = irq;
    assign DevRDIN32 = DIn;
    assign HWInt[`DEV_IN32] = `IRQ_DIS;
    assign DevRDOUT32 = DOut;
    assign HWInt[`DEV_OUT32] = `IRQ_DIS;
    assign HWInt[5:3] = 3'b0;

    wire [31:0] DevWD;

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
        .DevRDTC(DevRDTC),
        .DevRDIN32(DevRDIN32),
        .DevRDOUT32(DevRDOUT32),
        .DevWr(DevWr),
        .Wen(Wen)
    );

    TC tc1(
        .clk_i(clk),
        .rst_i(reset),
        .we_i(DevWr[`DEV_TC]),
        .add_i(DevAddr),
        .dat_i(DevWD),
        .irq(irq),
        .dat_o(TCRD)
    );

    Reg32 out32(
        .clk(clk),
        .reset(reset),
        .we(DevWr[`DEV_OUT32]),
        .in(DevWD),
        .out(DOut)
    );


endmodule
