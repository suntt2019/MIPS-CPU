`timescale 1ns/ 1ns
`include "unit_test_macro.v"

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
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        $display(" *CP0 test started.");
        

        reset = 1;
        #10 $display("    Reset test: RegSR=%h == %h, RegCause=%h == %h, EPC=%h == %h, RegPRID=%h == %h",
         cp0.RegSR, {30'b0, `EXL_UNLOCK, `INT_EN}, cp0.RegCause, 32'b0, cp0.EPC, `EPC_INIT, cp0.RegPRID, `PRID);
        if(~(cp0.RegSR === {30'b0, `EXL_UNLOCK, `INT_EN} && cp0.RegCause === 32'b0 && cp0.EPC === `EPC_INIT && cp0.RegPRID === `PRID)) $display("Assertion Error");
        reset = 0;

        // Din/out test
        HWInt = 6'b0;
        reset = 1; #10 $display("    Din/out test: reset finished."); reset = 0;
        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = 32'h1234_5678;
        #10 $display("      Write SR: SR=%h == %h", DOut, 32'h1234_5678); 
        if(~(DOut === 32'h1234_5678)) $display("Assertion Error");

        Wen = `WR_DIS; Sel = `CP0_SEL_SR; Din = 32'hffff_ffff;
        #10 $display("      Read SR: SR=%h == %h", DOut, 32'h1234_5678); 
        if(~(DOut === 32'h1234_5678)) $display("Assertion Error");

        Wen = `WR_DIS; Sel = `CP0_SEL_CAS; Din = 32'hffff_ffff;
        #10 $display("      Read Cause: Cause=%h == %h", DOut, 32'h0); 
        if(~(DOut === 32'h0)) $display("Assertion Error");

        Wen = `WR_DIS; Sel = `CP0_SEL_EPC; Din = 32'hffff_ffff;
        #10 $display("      Read EPC<<2: EPC<<2=%h == %h", DOut, {`EPC_INIT, 2'b0}); 
        if(~(DOut === {`EPC_INIT, 2'b0})) $display("Assertion Error");

        Wen = `WR_DIS; Sel = `CP0_SEL_PRID; Din = 32'hffff_ffff;
        #10 $display("      Read PRID: PRID=%h == %h", DOut, `PRID); 
        if(~(DOut === `PRID)) $display("Assertion Error");

        // Function test
        reset = 1; #10 $display("    Function test: reset finished."); reset = 0;
        Wen = `WR_DIS; Sel = `CP0_SEL_SR; EXLSet = 1'b1; Din = 32'hffff_ffff; PC = 30'h1234_5678;
        #10 $display("      Set EXT, SR: SR=%h == %h, EPC=%h == %h", DOut, {30'b0, `EXL_LOCK, `INT_EN}, EPC, 30'h1234_5678); 
        if(~(DOut === {30'b0, `EXL_LOCK, `INT_EN} && EPC === 30'h1234_5678)) $display("Assertion Error"); EXLSet = 1'b0;

        Wen = `WR_DIS; Sel = `CP0_SEL_SR; EXLClr = 1'b1; Din = 32'hffff_ffff;
        #10 $display("      Clr EXT, SR: SR=%h == %h", DOut, {30'b0, `EXL_UNLOCK, `INT_EN}); 
        if(~(DOut === {30'b0, `EXL_UNLOCK, `INT_EN})) $display("Assertion Error"); EXLClr = 1'b0;

        Wen = `WR_DIS; Sel = `CP0_SEL_CAS; HWInt = 6'b101011; Din = 32'hffff_ffff;
        #10 $display("      Set HWInt, Cause: Cause=%h == %h", DOut, {16'b0, 6'b101011, 10'b0}); 
        if(~(DOut === {16'b0, 6'b101011, 10'b0})) $display("Assertion Error");

        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_EN};
        #10 $display("      Test IntReq, Set SR: SR=%h == %h, IntReq=%d == %d",
         DOut, {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_EN}, IntReq, `INT_REQ_DIS); 
        if(~(DOut === {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_EN} && IntReq === `INT_REQ_DIS)) $display("Assertion Error"); Wen = `WR_DIS;

        HWInt = 6'b111011; PC = 30'h3fff_ffff;
        #10 $display("      Test IntReq, HWInt=%b == %b, IntReq=%d == %d, EPC=%h == %h",
         HWInt, 6'b111011, IntReq, `INT_REQ_EN, EPC, 30'h1234_5678); 
        if(~(HWInt === 6'b111011 && IntReq === `INT_REQ_EN && EPC === 30'h1234_5678)) $display("Assertion Error");

        EXLSet = 1'b1; PC = 30'h3478_abcd;
        #10 $display("      Test IntReq, Set EXL, IntReq=%d == %d, EPC=%h == %h",
         IntReq, `INT_REQ_DIS, EPC, 30'h3478_abcd); 
        if(~(IntReq === `INT_REQ_DIS && EPC === 30'h3478_abcd)) $display("Assertion Error"); EXLSet = 1'b0;

        EXLClr = 1'b1; PC = 30'h3fff_ffff;
        #10 $display("      Test IntReq, Clr EXL, IntReq=%d == %d, EPC=%h == %h",
         IntReq, `INT_REQ_EN, EPC, 30'h3478_abcd); 
        if(~(IntReq === `INT_REQ_EN && EPC === 30'h3478_abcd)) $display("Assertion Error"); EXLClr = 1'b0;

        Wen = `WR_EN; Sel = `CP0_SEL_SR; Din = {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_DIS};
        #10 $display("      Test IntReq, Set SR: SR=%h == %h, IntReq=%d == %d",
         DOut, {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_DIS}, IntReq, `INT_REQ_DIS); 
        if(~(DOut === {16'b0, 6'b010100, 8'b0, `EXL_UNLOCK, `INT_DIS} && IntReq === `INT_REQ_DIS)) $display("Assertion Error"); Wen = `WR_DIS;

        $display(" *CP0 test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule