`include "../macro.v"

module mips(clk, rst) ;
    input           clk; // clock
    input           rst; // reset
    
    // signals
    // Write enable signals
    wire PCWr, IRWr, RegWr, MemWr, ALUOWr;
    // MUX switching signals
    wire ALUSrc;
    wire [1:0] RegDst, Mem2Reg; 
    // Module control signals
    wire BACOp;
    wire [1:0] NPCSel, EXTOp, FlagOp;
    wire [2:0] ALUOp;

    // instruction
    wire [31:0] instruction, StoredInstruction;
    wire [4:0] rs, rt, rd;
    wire [5:0] opcode, shamt, funct;
    wire [15:0] imm;
    wire [31:0] PC;
    assign opcode = StoredInstruction[31:26];
    assign rs = StoredInstruction[25:21];
    assign rt = StoredInstruction[20:16];
    assign rd = StoredInstruction[15:11];
    assign imm = StoredInstruction[15:0];
    assign shmat = StoredInstruction[10:6];
    assign funct = StoredInstruction[5:0];

    // MUX destination
    reg [4:0] A2, AWr;
    reg [31:0] ALUIn, GPRIn;

    // // Stored variables
    wire [31:0] StoredA, StoredB, StoredDMOut, StoredNFlag, StoredALUOut;

    // Intermediate variables
    wire [31:0] a, b, ALUOut, EXTOut, DMOut, Flag, NFlag, CvtdALUOut, CvtdB, CvtdDMOut;
    // Cvtd = Converted
    wire [13:0] DMAddr;
    assign DMAddr = CvtdALUOut[13:0];

    IFU ifu(
        .clk(clk),
        .reset(rst),
        .NPCSel(NPCSel),
        .regPC(StoredA),
        .instruction(instruction),
        .pc(PC),
        .PCWr(PCWr),
        .StoredInstruction(StoredInstruction)
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
        .NFlag(StoredNFlag)
    );

    ALU alu(
        .ALUOp(ALUOp),
        .x(StoredA),
        .y(ALUIn),
        .ALUOut(ALUOut),
        .shamt(shamt),
        .Flag(Flag),
        .NFlag(NFlag)
    );

    dm_12k dm(
        .clk(clk),
        .din(CvtdB),
        .we(MemWr),
        .dout(DMOut),
        .addr(DMAddr)
    );

    EXT ext(
        .EXTOp(EXTOp),
        .in(imm),
        .out(EXTOut)
    );

    BAC bac(
        .BACOp(BACOp),
        .Ain(StoredALUOut),
        .Din1(StoredB),
        .Din2(DMOut),
        .Aout(CvtdALUOut),
        .Dout1(CvtdB),
        .Dout2(CvtdDMOut)
    );

    controller ctr(
        .clk(clk),
        .reset(rst),
        .opcode(opcode),
        .funct(funct),
        .NFlag(StoredNFlag),
        .RegDst(RegDst),
        .ALUSrc(ALUSrc),
        .Mem2Reg(Mem2Reg),
        .RegWr(RegWr),
        .MemWr(MemWr),
        .NPCSel(NPCSel),
        .EXTOp(EXTOp),
        .ALUOp(ALUOp),
        .FlagOp(FlagOp),
        .PCWr(PCWr),
        .BACOp(BACOp),
        .IRWr(IRWr),
        .ALUOWr(ALUOWr)
    );

    // Register IR
    Reg32 ir(
        .clk(clk),
        .reset(rst),
        .we(IRWr),
        .in(instruction),
        .out(StoredInstruction)
    );

    // Register RegA
    Reg32 regA(
        .clk(clk),
        .reset(rst),
        .we(`WR_EN),
        .in(a),
        .out(StoredA)
    );

    // Register RegB
    Reg32 regB(
        .clk(clk),
        .reset(rst),
        .we(`WR_EN),
        .in(b),
        .out(StoredB)
    );

    // Register DR
    Reg32 dr(
        .clk(clk),
        .reset(rst),
        .we(`WR_EN),
        .in(CvtdDMOut),
        .out(StoredDMOut)
    );

    // Register RegALUOut
    Reg32 regALUOut(
        .clk(clk),
        .reset(rst),
        .we(ALUOWr),
        .in(ALUOut),
        .out(StoredALUOut)
    );

    // Register RegNFlag
    Reg32 regNFlag(
        .clk(clk),
        .reset(rst),
        .we(ALUOWr),
        .in(NFlag),
        .out(StoredNFlag)
    );

    // MUX {rt, rd, `REG_ADDR_RET}-[RegDst]->AWr
    always @(RegDst or rt or rd) begin
        case(RegDst)
            `REGDST_RT: AWr = rt;
            `REGDST_RD: AWr = rd;
            `REGDST_RET: AWr = `REG_ADDR_RET;
        endcase
    end

    // MUX {StoredB, EXTOut}-[ALUSrc]->ALUIn
    always @(ALUSrc or StoredB or EXTOut) begin
        case(ALUSrc)
            `ALUSRC_B: ALUIn = StoredB;
            `ALUSRC_EXT: ALUIn = EXTOut;
        endcase
    end

    // MUX {StoredALUOut, StoredDMOut, PC}-[Mem2Reg]->GPRIn
    always @(Mem2Reg or StoredALUOut or StoredDMOut or PC) begin
        case(Mem2Reg)
            `MEM2REG_ALU: GPRIn = StoredALUOut;
            `MEM2REG_RAM: GPRIn = StoredDMOut;
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