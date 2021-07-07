`define DEBUG
// PC
`define CODE_SEG_PC 32'h0000_3000

// Regs
`define REG_ADDR_FLAG 30
`define REG_ADDR_RET 31

// Flag
`define FLAG_BIT_OVERFLOW 4'b0
`define FLAG_BIT_ZERO 4'b1

// Instructions
`define INSTR_CNT_WD 5
`define INSTR_COUNT 15

`define INSTR_ADDU 5'h1
`define INSTR_SUBU 5'h2
`define INSTR_ORI 5'h3
`define INSTR_LW 5'h4
`define INSTR_SW 5'h5
`define INSTR_BEQ 5'h6
`define INSTR_J 5'h7
`define INSTR_LUI 5'h8
`define INSTR_ADDI 5'h9
`define INSTR_ADDIU 5'ha
`define INSTR_SLT 5'hb
`define INSTR_NOP 5'hc
`define INSTR_LB 5'hd
`define INSTR_SB 5'he

`define OPCODE_SPECIAL 6'b000000
`define FUNCT_ADDU 6'b100001
`define FUNCT_SUBU 6'b100011
`define FUNCT_SLT 6'b101010
`define FUNCT_JR 6'b001000
`define FUNCT_NOP 6'b000000
`define FUNCT_ZZ 6'bzzzzzz

`define OPCODE_ORI 6'b001101
`define OPCODE_LW 6'b100011
`define OPCODE_SW 6'b101011
`define OPCODE_BEQ 6'b000100
`define OPCODE_LUI 6'b001111
`define OPCODE_J 6'b000010
`define OPCODE_ADDI 6'b001000
`define OPCODE_ADDIU 6'b001001
`define OPCODE_JAL 6'b000011

// Statuses
`define STATUS_WIDTH 4
`define STATUS_COUNT 10

`define STATUS_INVALID  4'h0
`define STATUS_0_FETCH  4'h1
`define STATUS_1_DCDRF 4'h2
`define STATUS_2_MA     4'h3
`define STATUS_3_0_MR_W  4'h4
`define STATUS_3_1_MR_B
`define STATUS_4_0_MEMWB_W  4'h5
`define STATUS_4_1_MEMWB_B
`define STATUS_5_0_MW_W     4'h6
`define STATUS_5_1_MW_B
`define STATUS_6_0_EXE_ADD    4'h7
`define STATUS_6_1_EXE_SUB
`define STATUS_7_0_0_ALUWB_I_FD  4'h8
`define STATUS_7_0_1_ALUWB_I_FS  4'h8
`define STATUS_7_1_0_ALUWB_R_FD
`define STATUS_8_0_BRANCH_BEQ 4'h9
`define STATUS_9_0_JMP_BEQ    4'ha
`define STATUS_9_1_JMP_J
`define STATUS_9_2_JMP_REG
`define STATUS_A_RETRW
`define STATUS_B_0_EXEI_OR
`define STATUS_B_1_EXEI_LUI

// Signals
`define SIGNAL_WIDTH 18

// Write enable signals
`define WR_EN 1'b1
`define WR_DIS 1'b0

// MUX switching signals
// ALUSrc(BSel)
`define ALUSRC_B 1'b0
`define ALUSRC_EXT 1'b1
`define ALUSRC_ZZ 1'bz
// RegDst(GPRSel)
`define REGDST_RT 2'b00
`define REGDST_RD 2'b01
`define REGDST_RET 2'b10
`define REGDST_ZZ 2'bzz
// Mem2Reg(WDSel)
`define MEM2REG_ALU 2'b00
`define MEM2REG_RAM 2'b01
`define MEM2REG_RET 2'b10
`define MEM2REG_ZZ 2'bzz

// Module control signals
// BAC
`define BAC_OP_WORD 1'b0
`define BAC_OP_BYTE 1'b1
`define BAC_OP_ZZ 1'bz
// NPCSel
`define NPC_SEL_PC_ADD_4 2'b00
`define NPC_SEL_BEQ_JMP 2'b01
`define NPC_SEL_J_JMP 2'b10
`define NPC_SEL_REG_JMP 2'b11
`define NPC_SEL_ZZ 2'bzz
// EXTOp
`define EXT_OP_ZERO 2'b00
`define EXT_OP_SIGN 2'b01
`define EXT_OP_LUI 2'b10
`define EXT_OP_ZZ 2'bzz
// FlagOp
`define FLAG_OP_DIS 2'b00
`define FLAG_OP_SET 2'b01
`define FLAG_OP_SET_AND_WR 2'b10
`define FLAG_OP_ZZ 2'bzz
// ALUOp
`define ALU_OP_ADD 3'b000
`define ALU_OP_SUB 3'b001
`define ALU_OP_AND 3'b010
`define ALU_OP_OR 3'b011
`define ALU_OP_LESS 3'b100
`define ALU_OP_B 3'b101
`define ALU_OP_ZZ 3'bzzz
