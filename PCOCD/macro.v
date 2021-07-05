// PC
`define CODE_SEG_PC 32'h0000_3000

// IFU
`define NPC_SEL_PC_ADD_4 2'b00
`define NPC_SEL_REG_JMP 2'b01
`define NPC_SEL_J_JMP 2'b10
`define NPC_SEL_BEQ_JMP 2'b11

// ALU
`define ALU_OP_ADD 3'b000
`define ALU_OP_SUB 3'b001
`define ALU_OP_AND 3'b010
`define ALU_OP_OR 3'b011

// EXT
`define EXT_OP_ZERO 2'b00
`define EXT_OP_SIGN 2'b01
`define EXT_OP_LUI 2'b10
