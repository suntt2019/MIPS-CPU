`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module cp0_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [31:2] PC;
    reg [31:0] Din;
    reg [5:0] HWInt;
    reg [1:0] Sel;
    reg Wen, EXLSet, EXLClr;
    wire IntReq;
    wire [31:2] EPC;
    wire [31:0] DOut;

    // local variables
    integer i;

    // tested module
    CP0 cp0(
        .clk(clk),
        .reset(reset),
        .PC(PC),
        .Din(Din),
        .HWInt(HWInt),
        .Sel(Sel),
        .Wen(Wen),
        .EXLSet(EXLSet),
        .EXLClr(EXLClr),
        .IntReq(IntReq),
        .EPC(EPC),
        .DOut(DOut)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *CP0 test started.");
        clk = 0;

        reset = 1;
        #10 $display("    Reset test: RegSR=%h == %h, RegCause=%h == %h, EPC=%h == %h, RegPRID=%h == %h",
         cp0.RegSR, {30'b0, `EXL_UNLOCK, `INT_EN}, cp0.RegCause, 32'b0, cp0.EPC, `EPC_INIT, cp0.RegPRID, `PRID);
        cp0_reset: assert(cp0.RegSR === {30'b0, `EXL_UNLOCK, `INT_EN} && cp0.RegCause === 32'b0 && cp0.EPC === `EPC_INIT && cp0.RegPRID === `PRID)
        reset = 0;

        // Din/out test
        HWInt = 6'b0;
        reset = 1; #10 $display("    Din/out test: reset finished."); reset = 0;
        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = 32'h1234_5678;
        #10 $display("      Write SR: SR=%h == %h", DOut, 32'h1234_5678); 
        cp0_w_sr: assert(DOut === 32'h1234_5678);

        Wen = `WR_DIS; Sel = `CP0_SEL_SR; Din = 32'hffff_ffff;
        #10 $display("      Read SR: SR=%h == %h", DOut, 32'h1234_5678); 
        cp0_r_sr: assert(DOut === 32'h1234_5678);

        Wen = `WR_DIS; Sel = `CP0_SEL_CAS; Din = 32'hffff_ffff;
        #10 $display("      Read Cause: Cause=%h == %h", DOut, 32'h0); 
        cp0_r_cause: assert(DOut === 32'h0);

        Wen = `WR_DIS; Sel = `CP0_SEL_EPC; Din = 32'hffff_ffff;
        #10 $display("      Read EPC<<2: EPC<<2=%h == %h", DOut, {`EPC_INIT, 2'b0}); 
        cp0_r_epc: assert(DOut === {`EPC_INIT, 2'b0});

        Wen = `WR_DIS; Sel = `CP0_SEL_PRID; Din = 32'hffff_ffff;
        #10 $display("      Read PRID: PRID=%h == %h", DOut, `PRID); 
        cp0_r_prid: assert(DOut === `PRID);

        // Function test
        reset = 1; #10 $display("    Function test: reset finished."); reset = 0;
        Wen = `WR_DIS; Sel = `CP0_SEL_SR; EXLSet = 1'b1; Din = 32'hffff_ffff; PC = 30'h1234_5678;
        #10 $display("      Set EXT, SR: SR=%h == %h, EPC=%h == %h", DOut, {30'b0, `EXL_LOCK, `INT_EN}, EPC, 30'h1234_5678); 
        cp0_set_exl: assert(DOut === {30'b0, `EXL_LOCK, `INT_EN} && EPC === 30'h1234_5678); EXLSet = 1'b0;

        Wen = `WR_DIS; Sel = `CP0_SEL_SR; EXLClr = 1'b1; Din = 32'hffff_ffff;
        #10 $display("      Clr EXT, SR: SR=%h == %h", DOut, {30'b0, `EXL_UNLOCK, `INT_EN}); 
        cp0_clr_exl: assert(DOut === {30'b0, `EXL_UNLOCK, `INT_EN}); EXLClr = 1'b0;

        Wen = `WR_DIS; Sel = `CP0_SEL_CAS; HWInt = 6'b101011; Din = 32'hffff_ffff;
        #10 $display("      Set HWInt, Cause: Cause=%h == %h", DOut, {16'b0, 6'b101011, 10'b0}); 
        cp0_hwint: assert(DOut === {16'b0, 6'b101011, 10'b0});

        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_EN};
        #10 $display("      Test IntReq, Set SR: SR=%h == %h, IntReq=%d == %d",
         DOut, {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_EN}, IntReq, `INT_REQ_DIS); 
        cp0_intreq_int_en: assert(DOut === {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_EN} && IntReq === `INT_REQ_DIS); Wen = `WR_DIS;

        HWInt = 6'b111011; PC = 30'h3fff_ffff;
        #10 $display("      Test IntReq, HWInt=%b == %b, IntReq=%d == %d, EPC=%h == %h",
         HWInt, 6'b111011, IntReq, `INT_REQ_EN, EPC, 30'h1234_5678); 
        cp0_intreq_en: assert(HWInt === 6'b111011 && IntReq === `INT_REQ_EN && EPC === 30'h1234_5678);

        EXLSet = 1'b1; PC = 30'h3478_abcd;
        #10 $display("      Test IntReq, Set EXL, IntReq=%d == %d, EPC=%h == %h",
         IntReq, `INT_REQ_DIS, EPC, 30'h3478_abcd); 
        cp0_intreq_exl_set: assert(IntReq === `INT_REQ_DIS && EPC === 30'h3478_abcd); EXLSet = 1'b0;

        EXLClr = 1'b1; PC = 30'h3fff_ffff;
        #10 $display("      Test IntReq, Clr EXL, IntReq=%d == %d, EPC=%h == %h",
         IntReq, `INT_REQ_EN, EPC, 30'h3478_abcd); 
        cp0_intreq_exl_clr: assert(IntReq === `INT_REQ_EN && EPC === 30'h3478_abcd); EXLClr = 1'b0;

        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_DIS};
        #10 $display("      Test IntReq, Set SR: SR=%h == %h, IntReq=%d == %d",
         DOut, {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_DIS}, IntReq, `INT_REQ_DIS); 
        cp0_intreq_int_dis: assert(DOut === {16'b0, 6'b010100, 10'b0, `EXL_UNLOCK, `INT_DIS} && IntReq === `INT_REQ_DIS); Wen = `WR_DIS;

        $display(" *CP0 test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule