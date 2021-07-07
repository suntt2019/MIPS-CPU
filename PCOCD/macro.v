// PC
`define CODE_SEG_PC 32'h0000_3000

// IFU
`define NPC_SEL_PC_ADD_4 2'b00
`define NPC_SEL_BEQ_JMP 2'b01
`define NPC_SEL_J_JMP 2'b10
`define NPC_SEL_REG_JMP 2'b11

// ALU
`define ALU_OP_ADD 3'b000
`define ALU_OP_SUB 3'b001
`define ALU_OP_AND 3'b010
`define ALU_OP_OR 3'b011
`define ALU_OP_LESS 3'b100
`define ALU_OP_B 3'b101
`define ALU_OP_ZZ 3'bzzz

// EXT
`define EXT_OP_ZERO 2'b00
`define EXT_OP_SIGN 2'b01
`define EXT_OP_LUI 2'b10
`define EXT_OP_ZZ 2'bzz

// GPR
`define REG_ADDR_FLAG 30
`define REG_ADDR_RET 31

// Flag
`define FLAG_OP_DIS 2'b00
`define FLAG_OP_SET 2'b01
`define FLAG_OP_SET_AND_WR 2'b10
// Flag digits:
`define FLAG_BIT_OVERFLOW 4'b0
`define FLAG_BIT_ZERO 4'b1

// Instructions
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

// Signals
`define SIGNAL_WIDTH 17

`define REGDST_RT 2'b00
`define REGDST_RD 2'b01
`define REGDST_RET 2'b10
`define REGDST_ZZ 2'bzz

`define ALUSRC_B 1'b0
`define ALUSRC_EXT 1'b1
`define ALUSRC_ZZ 1'bz

`define MEM2REG_ALU 2'b00
`define MEM2REG_RAM 2'b01
`define MEM2REG_RET 2'b10
`define MEM2REG_ZZ 2'bzz

`define WR_EN 1'b1
`define WR_DIS 1'b0

