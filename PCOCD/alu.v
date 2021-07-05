`include "macro.v"

module ALU(x, y, ALUOp, ALUOut, shamt, zero);
    input [31:0] x, y;
    input [2:0] ALUOp;
    input [5:0] shamt;
    output reg [31:0] ALUOut;
    output zero;

    always @(x, y, ALUOp, shamt) begin
        case (ALUOp)
            `ALU_OP_ADD: ALUOut = x + y;
            `ALU_OP_SUB: ALUOut = x - y;
            `ALU_OP_AND: ALUOut = x & y;
            `ALU_OP_OR: ALUOut = x | y;
        endcase
    end

    assign zero = ALUOut === 32'b0;

endmodule