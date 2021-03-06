`include "macro.v"

module ALU(x, y, ALUOp, ALUOut, shamt, Flag, NFlag);
    input [31:0] x, y, Flag;
    input [2:0] ALUOp;
    input [4:0] shamt;
    output reg [31:0] ALUOut;
    output reg [31:0] NFlag;

    reg overflowBit;
    reg zero, overflow;

    always @(x, y, ALUOp, shamt, Flag) begin
        case (ALUOp)
            `ALU_OP_ADD: {overflowBit, ALUOut} = x + y;
            `ALU_OP_SUB: {overflowBit, ALUOut} = x - y;
            `ALU_OP_AND: ALUOut = x & y;
            `ALU_OP_OR: ALUOut = x | y;
            `ALU_OP_LESS: ALUOut = {31'b0, x[31] ^ y[31] ^ (x < y)};
            `ALU_OP_B: ALUOut = y;
            `ALU_OP_LTZ: ALUOut = {31'b0, x[31]};
        endcase

        zero = ALUOut === 32'b0;
        overflow = overflowBit ^ ALUOut[31] ^ x[31] ^ y[31];

        NFlag = Flag;
        NFlag[`FLAG_BIT_ZERO] = zero;
        if ((ALUOp === `ALU_OP_ADD || ALUOp === `ALU_OP_SUB) && overflow) begin
            NFlag[`FLAG_BIT_OVERFLOW] = overflow;
        end
        `ifdef DEBUG
        /*$display("Gen flag: %b, ALUOp=%b, x=%d, y=%d", NFlag, ALUOp, x, y);*/
        `endif
    end

endmodule