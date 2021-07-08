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
`define INSTR_WIDTH 5
`define INSTR_COUNT 17

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
`define INSTR_JAL 5'hf
`define INSTR_JR 5'h10
`define INSTR_BLTZAL 5'h11

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
`define OPCODE_LB 6'b100000
`define OPCODE_SB 6'b101000
`define OPCODE_BLTZAL 6'b000001

// Statuses
`define STATUS_WIDTH 5
`define STATUS_COUNT 23

// S1: Fetch instruction
`define S1          5'h1
// S2: Decode & Read registers
`define S2          5'h2
// S3: Calculate(ALU+EXT)
`define S3_EXE_ADD  5'h3
`define S3_EXE_SUB  5'h4
`define S3_EXE_SLT  5'h5
`define S3_EXEI_ADD 5'h6
`define S3_EXEI_OR  5'h7
`define S3_EXEI_LUI 5'h8
`define S3_BR_BEQ   5'h9
`define S3_EXE_LTZ  5'h17
`define S3_BR_BLTZAL 5'h18
// S4: Read/Write memeory
`define S4_RD_WORD  5'ha
`define S4_RD_BYTE  5'hb
`define S4_WR_WORD  5'hc
`define S4_WR_BYTE  5'hd
// S5: Write back registers
`define S5_DM_WORD  5'he
`define S5_DM_BYTE  5'hf
`define S5_ALU_I_FD 5'h10
`define S5_ALU_I_FS 5'h11
`define S5_ALU_R_FD 5'h12
`define S5_RET      5'h13
// S6: Jump
`define S6_BEQ      5'h14
`define S6_J        5'h15
`define S6_REG      5'h16
// Other
`define S_INVALID   5'h00

// Signals
`define SIGNAL_WIDTH 19

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
`define ALU_OP_LTZ 3'b110
`define ALU_OP_ZZ 3'bzzz
