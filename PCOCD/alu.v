module ALU(x, y, ALUOp, ALUOut, shamt, zero);
    input [31:0] x, y;
    input [2:0] ALUOp;
    input [5:0] shamt;
    output reg [31:0] ALUOut;
    output zero;

    always @(x, y, ALUOp, shamt) begin
        case (ALUOp)
            3'b000: ALUOut = x + y;
            3'b001: ALUOut = x - y;
            3'b010: ALUOut = x & y;
            3'b011: ALUOut = x | y;
        endcase
    end

    assign zero = ALUOut === 32'b0;

endmodule