`include "../macro.v"

// BAC = Byte Address Converter
module BAC(BACOp, Aout, Ain, Din1, Dout1, Din2, Dout2);
    input BACOp;
    input [31:0] Ain, Din1, Din2;
    output reg [31:0] Aout, Dout1, Dout2;

    reg [4:0] AddrInByte;
    reg [7:0] byte1, byte2;

    always @(*) begin
        case(BACOp)
            `BAC_OP_WORD: begin
                Aout = Ain;
                Dout1 = Din1;
                Dout2 = Din2;
            end
            `BAC_OP_BYTE: begin
                AddrInByte = {3'b0, Ain[1:0]};
                Aout = (Ain >> 2);
                byte1 = Din1 >> ( AddrInByte << 3 );
                byte2 = Din2 >> ( AddrInByte << 3 );
                Dout1 = {24'b0, byte1};
                Dout2 = {24'b0, byte2};
            end
        endcase
    end
endmodule
