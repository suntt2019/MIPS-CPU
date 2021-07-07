`include "../macro.v"

module controller(opcode, funct, NFlag, RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp, PCWr);
    input [5:0] opcode, funct;
    input [31:0] NFlag;
    output ALUSrc, RegWr, MemWr, PCWr;
    output [1:0] RegDst, Mem2Reg, NPCSel, EXTOp, FlagOp;
    output [2:0] ALUOp;

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr, nop;
    reg [`SIGNAL_WIDTH:1] signals;
    wire zero, overflow;

    assign addu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_ADDU;
    assign subu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SUBU;
    assign slt = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SLT;
    assign jr = opcode === `OPCODE_SPECIAL && funct === `FUNCT_JR;
    assign nop = opcode === `OPCODE_SPECIAL && funct === `FUNCT_NOP;
    assign ori = opcode === `OPCODE_ORI;
    assign lw = opcode === `OPCODE_LW;
    assign sw = opcode === `OPCODE_SW;
    assign beq = opcode === `OPCODE_BEQ;
    assign lui = opcode === `OPCODE_LUI;
    assign j = opcode === `OPCODE_J;
    assign addi = opcode === `OPCODE_ADDI;
    assign addiu = opcode === `OPCODE_ADDIU;
    assign jal = opcode === `OPCODE_JAL;

    assign overflow = NFlag[`FLAG_BIT_OVERFLOW];
    assign zero = NFlag[`FLAG_BIT_ZERO];

    always @(*) begin
        // width               2           1          2             1       1        2                  2           3            2            2
        if (addu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_ADD, `FLAG_OP_DIS, `WR_EN};
        if (subu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS, `WR_EN};
        if (ori)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZERO, `ALU_OP_OR, `FLAG_OP_DIS, `WR_EN};
        if (lw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS, `WR_EN};
        if (sw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_DIS, `WR_EN, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS, `WR_EN};
        if (beq&&~zero)
                   signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS, `WR_EN};
        if (beq&&zero)
                   signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_BEQ_JMP, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS, `WR_EN};
        if (lui)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_LUI, `ALU_OP_OR, `FLAG_OP_DIS, `WR_EN};
        if (j)     signals = {`REGDST_ZZ, `ALUSRC_ZZ, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS, `WR_EN};
        if (addi&&overflow)
                   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_SET_AND_WR, `WR_EN};
        if (addi&&~overflow)
                   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS, `WR_EN};
        if (addiu) signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS, `WR_EN};
        if (slt)   signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_LESS, `FLAG_OP_DIS, `WR_EN};
        if (jal)   signals = {`REGDST_RET, `ALUSRC_ZZ, `MEM2REG_RET, `WR_EN, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS, `WR_EN};
        if (jr)    signals = {`REGDST_ZZ, `ALUSRC_ZZ, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS, `WR_EN};
        if (nop)   signals = {`REGDST_ZZ, `ALUSRC_ZZ, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS, `WR_EN};
    end

    assign {RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp, PCWr} = signals;

endmodule
