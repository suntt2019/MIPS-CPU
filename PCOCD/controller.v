`include "macro.v"

module controller(opcode, funct, zero, RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, SetFlag);
    input [5:0] opcode, funct;
    input zero;
    output ALUSrc, RegWr, MemWr, SetFlag;
    output [1:0] RegDst, Mem2Reg, NPCSel, EXTOp;
    output [2:0] ALUOp;

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr;
    reg [`SIGNAL_WIDTH:1] signals;

    assign addu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_ADDU;
    assign subu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SUBU;
    assign slt = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SLT;
    assign jr = opcode === `OPCODE_SPECIAL && funct === `FUNCT_JR;
    assign ori = opcode === `OPCODE_ORI;
    assign lw = opcode === `OPCODE_LW;
    assign sw = opcode === `OPCODE_SW;
    assign beq = opcode === `OPCODE_BEQ;
    assign lui = opcode === `OPCODE_LUI;
    assign j = opcode === `OPCODE_J;
    assign addi = opcode === `OPCODE_ADDI;
    assign addiu = opcode === `OPCODE_ADDIU;
    assign jal = opcode === `OPCODE_JAL;

    always @(*) begin
        // width               2           1          2             1       1        2                  2           3
        if (addu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_XX, `ALU_OP_ADD, `SET_FLAG_DIS};
        if (subu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_XX, `ALU_OP_SUB, `SET_FLAG_DIS};
        if (ori)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZERO, `ALU_OP_OR, `SET_FLAG_DIS};
        if (lw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `SET_FLAG_DIS};
        if (sw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_DIS, `WR_EN, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `SET_FLAG_DIS};
        if (beq&&~zero) signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_XX, `WR_DIS, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_XX, `ALU_OP_SUB, `SET_FLAG_DIS};
        if (beq&&zero)  signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_XX, `WR_DIS, `WR_DIS, `NPC_SEL_BEQ_JMP, `EXT_OP_XX, `ALU_OP_SUB, `SET_FLAG_DIS};
        if (lui)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_LUI, `ALU_OP_OR, `SET_FLAG_DIS};
        if (j)     signals = {`REGDST_XX, `ALUSRC_XX, `MEM2REG_XX, `WR_DIS, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_XX, `ALU_OP_XX, `SET_FLAG_DIS};
        if (addi)  signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZERO, `ALU_OP_ADD, `SET_FLAG_EN};
        if (addiu) signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZERO, `ALU_OP_ADD, `SET_FLAG_DIS};
        if (slt)   signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_XX, `ALU_OP_LESS, `SET_FLAG_DIS};
        if (jal)   signals = {`REGDST_RET, `ALUSRC_B, `MEM2REG_RET, `WR_EN, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_XX, `ALU_OP_B, `SET_FLAG_DIS};
        if (jr)    signals = {`REGDST_XX, `ALUSRC_B, `MEM2REG_XX, `WR_DIS, `WR_DIS, `NPC_SEL_REG_JMP, `EXT_OP_XX, `ALU_OP_B, `SET_FLAG_DIS};
    end

    assign {RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, SetFlag} = signals;

endmodule
