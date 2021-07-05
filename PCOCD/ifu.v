module IFU(clk, reset, NPCSel, regPC, instruction, pc);
    input clk, reset;
    input [1:0] NPCSel;
    input [31:0] regPC;
    output [31:0] instruction;
    output reg [31:0] pc;

    reg[31:0] pcAdd4, shifted_imm;

    im_1k im(.addr(pc[9:0]), .dout(instruction));

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            pc = 32'h0000_3000;
        end else begin
            pcAdd4 = pc+4;
            case(NPCSel)
                2'b00: pc = pcAdd4;
                2'b01: pc = regPC;
                2'b10: pc = {pcAdd4[31:28], instruction[25:0], 2'b00};
                2'b11: begin
                    shifted_imm = pcAdd4[15:0] + (instruction[15:0] << 2);
                    pc = {pc[31:16], shifted_imm[15:0]};
                end
            endcase
        end
    end
endmodule