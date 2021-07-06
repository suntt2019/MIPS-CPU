`include "../macro.v"

module controller(opcode, funct, NFlag, RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp);
    input [5:0] opcode, funct;
    input [31:0] NFlag;
    output ALUSrc, RegWr, MemWr;
    output [1:0] RegDst, Mem2Reg, NPCSel, EXTOp, FlagOp;
    output [2:0] ALUOp;

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr;
    reg [`SIGNAL_WIDTH:1] signals;
    wire zero, overflow;

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

    assign overflow = NFlag[`FLAG_BIT_OVERFLOW];
    assign zero = NFlag[`FLAG_BIT_ZERO];

    always @(*) begin
        // width               2           1          2             1       1        2                  2           3            2
        if (addu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_ADD, `FLAG_OP_DIS};
        if (subu)  signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS};
        if (ori)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZERO, `ALU_OP_OR, `FLAG_OP_DIS};
        if (lw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS};
        if (sw)    signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_RAM, `WR_DIS, `WR_EN, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS};
        if (beq&&~zero)
                   signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS};
        if (beq&&zero)
                   signals = {`REGDST_RT, `ALUSRC_B, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_BEQ_JMP, `EXT_OP_ZZ, `ALU_OP_SUB, `FLAG_OP_DIS};
        if (lui)   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_LUI, `ALU_OP_OR, `FLAG_OP_DIS};
        if (j)     signals = {`REGDST_ZZ, `ALUSRC_ZZ, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS};
        if (addi&&overflow)
                   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_SET_AND_WR};
        if (addi&&~overflow)
                   signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS};
        if (addiu) signals = {`REGDST_RT, `ALUSRC_EXT, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_SIGN, `ALU_OP_ADD, `FLAG_OP_DIS};
        if (slt)   signals = {`REGDST_RD, `ALUSRC_B, `MEM2REG_ALU, `WR_EN, `WR_DIS, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `ALU_OP_LESS, `FLAG_OP_DIS};
        if (jal)   signals = {`REGDST_RET, `ALUSRC_ZZ, `MEM2REG_RET, `WR_EN, `WR_DIS, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS};
        if (jr)    signals = {`REGDST_ZZ, `ALUSRC_ZZ, `MEM2REG_ZZ, `WR_DIS, `WR_DIS, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `ALU_OP_ZZ, `FLAG_OP_DIS};
    end

    assign {RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp} = signals;

endmodule
