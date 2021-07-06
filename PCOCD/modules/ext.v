`include "macro.v"

module EXT(in, out, EXTOp);
    input [15:0] in;
    input [1:0] EXTOp;
    output reg [31:0] out;

    always @(in, EXTOp) begin
        case(EXTOp)
            `EXT_OP_ZERO: out = {16'b0, in};
            `EXT_OP_SIGN: out = {{16{in[15]}}, in};
            `EXT_OP_LUI: out = {in, 16'b0};
        endcase 
    end
endmodule
