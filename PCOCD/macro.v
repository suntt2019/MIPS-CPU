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
`define ALU_OP_XX 3'bxxx

// EXT
`define EXT_OP_ZERO 2'b00
`define EXT_OP_SIGN 2'b01
`define EXT_OP_LUI 2'b10
`define EXT_OP_XX 2'bxx

// Instructions
`define OPCODE_SPECIAL 6'b000000
`define FUNCT_ADDU 6'b100001
`define FUNCT_SUBU 6'b100011
`define FUNCT_SLT 6'b101010
`define FUNCT_JR 6'b001000
`define FUNCT_XX 6'bxxxxxx

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
`define REGDST_RT 2'b00
`define REGDST_RD 2'b01
`define REGDST_XX 2'bxx

`define ALUSRC_B 1'b0
`define ALUSRC_EXT 1'b1
`define ALUSRC_XX 1'bx

`define MEM2REG_ALU 2'b00
`define MEM2REG_RAM 2'b01
`define MEM2REG_XX 2'bxx

`define WR_EN 1'b1
`define WR_DIS 1'b0
