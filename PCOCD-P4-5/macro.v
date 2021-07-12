// `define DEBUG
// `define CONTROLLER_OUTPUT
// `define PC_OUTPUT
// `define INSTRUCTION_OUTPUT

// PC
`define CODE_SEG_PC 32'h0000_3000
`define INT_PC 32'h0000_4180

// Regs
`define REG_ADDR_FLAG 30
`define REG_ADDR_RET 31

// Flag
`define FLAG_BIT_OVERFLOW 4'b0
`define FLAG_BIT_ZERO 4'b1

// Instructions
`define INSTR_CNT_WD 5
`define INSTR_WIDTH 5
`define INSTR_COUNT 20

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
`define INSTR_ERET 5'h12
`define INSTR_MFC0 5'h13
`define INSTR_MTC0 5'h14

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

`define OPCODE_COP0 6'b010000
`define FUNCT_ERET 6'b011000
`define CP0FUNCT_MT 5'b00100
`define CP0FUNCT_MF 5'b00000

// Statuses
`define STATUS_WIDTH 5
`define STATUS_COUNT 29

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
`define S3_CK_OF    5'h19
// S4: Read/Write memeory
`define S4_RD_WORD  5'ha
`define S4_RD_BYTE  5'hb
`define S4_RD_CP0   5'h1b
`define S4_WR_WORD  5'hc
`define S4_WR_BYTE  5'hd
`define S4_WR_CP0   5'h1c
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
`define S6_ERET     5'h1d
// S7: Interrupt
`define S7          5'h1a
// Other
`define S_INVALID   5'h00

// Signals
`define SIGNAL_WIDTH 26

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
`define MEM2REG_DEV 2'b11
`define MEM2REG_ZZ 2'bzz
// DRSrc
`define DRSRC_DM 1'b0
`define DRSRC_CP0 1'b1
`define DRSRC_ZZ 1'bz
// JRegSrc
`define JREGSRC_A 1'b0
`define JREGSRC_EPC 1'b1
`define JREGSRC_ZZ 1'bz

// Module control signals
// BAC
`define BAC_OP_WORD 1'b0
`define BAC_OP_BYTE 1'b1
`define BAC_OP_ZZ 1'bz
// NPCSel
`define NPC_SEL_PC_ADD_4 3'b000
`define NPC_SEL_BEQ_JMP 3'b001
`define NPC_SEL_J_JMP 3'b010
`define NPC_SEL_REG_JMP 3'b011
`define NPC_SEL_INT_JMP 3'b100
`define NPC_SEL_ZZ 3'bzzz
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
// EXLOp
`define EXL_OP_NOP 2'b00
`define EXL_OP_SET 2'b01
`define EXL_OP_CLR 2'b10

// CP0
`define CP0_SEL_SR 2'b00
`define CP0_SEL_CAS 2'b01
`define CP0_SEL_EPC 2'b10
`define CP0_SEL_PRID 2'b11

`define CP0_DEV_CNT 6
`define CP0_BIT_IP_L 10 // CP0.Cause.IP lower bit
`define CP0_BIT_IM_L 10 // CP0.SR.IM lower bit

`define CP0_BIT_EXL 1
`define EXL_LOCK    1'b1
`define EXL_UNLOCK  1'b0

`define CP0_BIT_IE  0
`define INT_EN      1'b1
`define INT_DIS     1'b0

`define EPC_INIT 30'h3210_fedc
// EPC_INIT << 2 = 0xc843_fb70

`define PRID     32'h838484_10

`define INT_REQ_EN  1'b1
`define INT_REQ_DIS 1'b0

// Devices
`define DEV_ADDR_WD 4 // device address width
`define DEV_COUNT   3 // device count
`define DEV_ID_WD   2 // device id width

// Device id
`define DEV_TC      2'b00
`define DEV_IN32    2'b01
`define DEV_OUT32   2'b10

// TC
`define TC_REG_CTRL 4'h0
`define TC_REG_PST  4'h4
`define TC_REG_CNT  4'h8

`define TC_IM_EN    1'b1
`define TC_IM_DIS   1'b0

`define TC_MODE_0   2'b00
`define TC_MODE_1   2'b01

`define TC_EN       1'b1
`define TC_DIS      1'b0

`define IRQ_EN      1'b1
`define IRQ_DIS     1'b0