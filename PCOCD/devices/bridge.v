`include "../macro.v"

module Bridge(
    input [31:0] PrAddr, PrWD,
    input [31:0] DevRD [`DEV_COUNT-1:0],
    output [31:0] PrRD, DevWD,
    output [`DEV_ADDR_WD:1] DevAddr
);

    wire [`DEV_ID_WD:1]DevID;

    assign DevID = PrAddr[`DEV_ADDR_WD+`DEV_ID_WD-1:`DEV_ADDR_WD];
    assign DevAddr = PrAddr[`DEV_ADDR_WD-1:0];
    assign PrRD = DevRD[DevID];
    assign DevWD = PrWD;

    always @(DevID) begin
        if(~(0<=DevID && DevID < `DEV_COUNT)) begin
            $display("Exception: Invalid device id (DevID=%h)", DevID);
            $stop;
        end
    end

endmodule
