`include "../macro.v"

module CP0(
    input clk, reset,
    input [31:2] PC,
    input [31:0] Din,
    input [5:0] HWInt,
    input [1:0] Sel,
    input Wen, EXLSet, EXLClr,
    output IntReq,
    output reg [31:2] EPC,
    output reg [31:0] DOut
);
    
    reg [31:0] RegSR, RegCause, RegPRID;
    wire [`CP0_DEV_CNT:1] im;
    wire exl, ie;

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            RegSR = {30'b0, `EXL_UNLOCK, `INT_EN};
            RegCause = 32'b0;
            EPC = `EPC_INIT;
            RegPRID = `PRID;
        end else begin
            // Din/out write
            if(Wen) begin
                if(Sel === `CP0_SEL_SR) begin
                    RegSR = Din;
                end else begin
                    $display("Exception invalid cp0 write sel: %b", Sel);
                    $stop;
                end
            end

            if(EXLSet) begin
                RegSR[`CP0_BIT_EXL] = `EXL_LOCK;
                EPC = PC;
            end
            if(EXLClr) RegSR[`CP0_BIT_EXL] = `EXL_UNLOCK;
            if(EXLSet && EXLClr) begin
                $display("Conflict control signal for EXL");
                $stop;
            end
            RegCause[`CP0_BIT_IP_L + `CP0_DEV_CNT -1: `CP0_BIT_IP_L] = HWInt;

            // Din/out read
            case(Sel)
                `CP0_SEL_SR: DOut = RegSR;
                `CP0_SEL_CAS: DOut = RegCause;
                `CP0_SEL_EPC: DOut = {EPC, 2'b0};
                `CP0_SEL_PRID: DOut = RegPRID;
            endcase
        end
    end

    assign im = RegSR[`CP0_BIT_IM_L + `CP0_DEV_CNT -1: `CP0_BIT_IM_L];
    assign ext = RegSR[`CP0_BIT_EXL];
    assign ie = RegSR[`CP0_BIT_IE];
    assign IntReq = |(HWInt & im) && ie && !ext;
    
endmodule