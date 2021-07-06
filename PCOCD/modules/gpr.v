`include "macro.v"

module GPR(clk, reset, WE, FlagOp, A1, A2, AWr, RD1, RD2, Din, Flag, NFlag);
    input clk, reset, WE;
    input [1:0] FlagOp;
    input [4:0] A1, A2, AWr;
    input [31:0] Din, NFlag;
    output [31:0] RD1, RD2, Flag;

    reg [31:0] regs[31:0];
    reg [5:0] i;

    assign RD1 = regs[A1];
    assign RD2 = regs[A2];
    assign Flag = regs[`REG_ADDR_FLAG];

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            for(i=0;i<32;i=i+1) begin
                regs[i] = 32'b0;
            end
        end else begin
            if((FlagOp === `FLAG_OP_DIS || FlagOp === `FLAG_OP_SET_AND_WR) && WE && AWr !== 4'b0) begin
                regs[AWr] = Din;
            end
            if(FlagOp === `FLAG_OP_SET || FlagOp === `FLAG_OP_SET_AND_WR) begin
                regs[`REG_ADDR_FLAG] = NFlag;
            end
        end
    end
endmodule
