`include "../macro.v"

module IFU(clk, reset, NPCSel, regPC, instruction, StoredInstruction, pc, PCWr);
    input clk, reset, PCWr;
    input [2:0] NPCSel;
    input [31:0] regPC, StoredInstruction;
    output [31:0] instruction;
    output reg [31:0] pc;

    reg[31:0] shifted_imm;

    im_32k im(.addr(pc[15:0]), .dout(instruction));

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            pc = `CODE_SEG_PC;
        end else if(PCWr) begin
            case(NPCSel)
                `NPC_SEL_PC_ADD_4: pc = pc+4;
                `NPC_SEL_REG_JMP: pc = regPC;
                `NPC_SEL_J_JMP: pc = {pc[31:28], StoredInstruction[25:0], 2'b00};
                `NPC_SEL_BEQ_JMP: begin
                    shifted_imm = pc[15:0] + (StoredInstruction[15:0] << 2);
                    pc = {pc[31:16], shifted_imm[15:0]};
                end
                `NPC_SEL_INT_JMP: pc = `INT_PC;
            endcase
        end
    end
endmodule