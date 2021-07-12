`include "macro.v"

module Bridge(
    input Wen,
    input [31:0] PrAddr, PrWD,
    input [31:0] DevRDTC, DevRDIN32, DevRDOUT32,
    output reg [31:0] PrRD,
    output [31:0] DevWD,
    output [`DEV_ADDR_WD:1] DevAddr,
    output reg [`DEV_COUNT-1:0] DevWr
);

    wire [`DEV_ID_WD:1]DevID;

    assign DevID = PrAddr[`DEV_ADDR_WD+`DEV_ID_WD-1:`DEV_ADDR_WD];
    assign DevAddr = PrAddr[`DEV_ADDR_WD-1:0];
    assign DevWD = PrWD;

    always @(DevID or DevRDTC or DevRDIN32 or DevRDOUT32) begin
        case(DevID)
            `DEV_TC: PrRD = DevRDTC;
            `DEV_IN32: PrRD = DevRDIN32;
            `DEV_OUT32: PrRD = DevRDOUT32;
        endcase
    end

    always @(DevID or Wen) begin
        DevWr = 'b0;
        DevWr[DevID] = Wen;
        if(~(0<=DevID && DevID < `DEV_COUNT)) begin
            // $display("Exception: Invalid device id (DevID=%h)", DevID);
            // $stop;
        end
    end

endmodule
