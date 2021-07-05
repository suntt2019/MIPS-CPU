module EXT(in, out, EXTOp);
    input [15:0] in;
    input [1:0] EXTOp;
    output reg [31:0] out;

    always @(in, EXTOp) begin
        case(EXTOp)
            2'b00: out = {16'b0, in};
            2'b01: out = {{16{in[15]}}, in};
            2'b10: out = {in, 16'b0};
        endcase 
    end
endmodule
