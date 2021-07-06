`include "macro.v"

module ALU(x, y, ALUOp, ALUOut, shamt, zero, flag);
    input [31:0] x, y;
    input [2:0] ALUOp;
    input [5:0] shamt;
    output reg [31:0] ALUOut;
    output [31:0] flag;
    output zero;

    reg overflowBit;
    wire overflow;

    always @(x, y, ALUOp, shamt) begin
        case (ALUOp)
            `ALU_OP_ADD: {overflowBit, ALUOut} = x + y;
            `ALU_OP_SUB: {overflowBit, ALUOut} = x - y;
            `ALU_OP_AND: ALUOut = x & y;
            `ALU_OP_OR: ALUOut = x | y;
            `ALU_OP_LESS: ALUOut = {31'b0, (x < y)};
            `ALU_OP_B: ALUOut = y;
        endcase
    end

    assign zero = ALUOut === 32'b0;
    assign overflow = (ALUOp === `ALU_OP_ADD || ALUOp === `ALU_OP_SUB) & overflowBit ^ ALUOut[31] ^ x[31] ^ y[31];
    assign flag = {31'b0, overflow};

endmodule