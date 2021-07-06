`include "macro.v"

module mips(clk, rst) ;
    input           clk; // clock
    input           rst; // reset
    
    // signals
    wire ALUSrc, RegWr, MemWr;
    wire [1:0] RegDst, Mem2Reg, NPCSel, EXTOp, FlagOp;
    wire [2:0] ALUOp;

    // instruction
    wire [31:0] instruction;
    wire [4:0] rs, rt, rd;
    wire [5:0] opcode, shamt, funct;
    wire [15:0] imm;
    wire [31:0] PC;
    assign opcode = instruction[31:26];
    assign rs = instruction[25:21];
    assign rt = instruction[20:16];
    assign rd = instruction[15:11];
    assign imm = instruction[15:0];
    assign shmat = instruction[10:6];
    assign funct = instruction[5:0];

    // MUX destination
    reg [4:0] A2, AWr;
    reg [31:0] ALUIn, GPRIn;

    // Intermediate variables
    wire [31:0] a, b, ALUOut, EXTOut, DMOut, Flag, NFlag;
    wire [9:0] DMAddr;
    assign DMAddr = ALUOut[9:0];

    IFU ifu(
        .clk(clk),
        .reset(rst),
        .NPCSel(NPCSel),
        .regPC(ALUOut),
        .instruction(instruction),
        .pc(PC)
    );

    GPR gpr(
        .clk(clk),
        .reset(rst),
        .WE(RegWr),
        .FlagOp(FlagOp),
        .A1(rs),
        .A2(A2),
        .AWr(AWr),
        .RD1(a),
        .RD2(b),
        .Din(GPRIn),
        .Flag(Flag),
        .NFlag(NFlag)
    );

    ALU alu(
        .ALUOp(ALUOp),
        .x(a),
        .y(ALUIn),
        .ALUOut(ALUOut),
        .shamt(shamt),
        .Flag(Flag),
        .NFlag(NFlag)
    );

    dm_1k dm(
        .clk(clk),
        .din(b),
        .we(MemWr),
        .dout(DMOut),
        .addr(DMAddr)
    );

    EXT ext(
        .EXTOp(EXTOp),
        .in(imm),
        .out(EXTOut)
    );

    controller ctr(
        .opcode(opcode),
        .funct(funct),
        .NFlag(NFlag),
        .RegDst(RegDst),
        .ALUSrc(ALUSrc),
        .Mem2Reg(Mem2Reg),
        .RegWr(RegWr),
        .MemWr(MemWr),
        .NPCSel(NPCSel),
        .EXTOp(EXTOp),
        .ALUOp(ALUOp),
        .FlagOp(FlagOp)
    );

    // MUX {rt, rd, `REG_ADDR_RET}-[RegDst]->AWr
    always @(RegDst or rt or rd) begin
        case(RegDst)
            `REGDST_RT: AWr = rt;
            `REGDST_RD: AWr = rd;
            `REGDST_RET: AWr = `REG_ADDR_RET;
        endcase
    end

    // MUX {b, EXTOut}-[ALUSrc]->ALUIn
    always @(ALUSrc or b or EXTOut) begin
        case(ALUSrc)
            `ALUSRC_B: ALUIn = b;
            `ALUSRC_EXT: ALUIn = EXTOut;
        endcase
    end

    // MUX {ALUOut, DMOut, PC}-[Mem2Reg]->GPRIn
    always @(Mem2Reg or ALUOut or DMOut or PC) begin
        case(Mem2Reg)
            `MEM2REG_ALU: GPRIn = ALUOut;
            `MEM2REG_RAM: GPRIn = DMOut;
            `MEM2REG_RET: GPRIn = PC;
        endcase
    end

    // MUX {rt, `REG_ADDR_RET}-[NPCSel]->A2
    always @(NPCSel or rt) begin
        case(NPCSel)
            `NPC_SEL_REG_JMP: A2 = `REG_ADDR_RET;
            default: A2 = rt;
        endcase
    end

endmodule