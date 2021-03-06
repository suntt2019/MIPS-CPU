`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module controller_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [5:0] opcode, funct;
    reg [31:0] NFlag;
    wire ALUSrc, RegWr, MemWr, FlagOp;
    wire [1:0] RegDst, Mem2Reg, NPCSel, EXTOp;
    wire [2:0] ALUOp;

    // local variables
    integer i;
    reg [`SIGNAL_WIDTH:1] signals, expected_signals;

    // tested module
    controller controller1(
        .opcode(opcode),
        .funct(funct),
        .NFlag(NFlag),
        .ALUSrc(ALUSrc),
        .RegWr(RegWr),
        .MemWr(MemWr),
        .RegDst(RegDst),
        .Mem2Reg(Mem2Reg),
        .NPCSel(NPCSel),
        .EXTOp(EXTOp),
        .ALUOp(ALUOp),
        .FlagOp(FlagOp)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *Controller test started.");
        
        opcode = `OPCODE_SPECIAL; funct = `FUNCT_ADDU; expected_signals = 'b01_0_00_1_0_00_zz_000_00;
        #1 $display("    ADDU test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_addu: assert(signals===expected_signals);
        
        opcode = `OPCODE_SPECIAL; funct = `FUNCT_SUBU; expected_signals = 'b01_0_00_1_0_00_zz_001_00;
        #1 $display("    SUBU test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_subu: assert(signals===expected_signals);
        
        opcode = `OPCODE_SPECIAL; funct = `FUNCT_SLT; expected_signals = 'b01_0_00_1_0_00_zz_100_00;
        #1 $display("    SLT test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_slt: assert(signals===expected_signals);
        
        opcode = `OPCODE_SPECIAL; funct = `FUNCT_JR; expected_signals = 'bzz_0_zz_0_0_11_zz_101_00;
        #1 $display("    JR test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_jr: assert(signals===expected_signals);
        
        opcode = `OPCODE_ORI ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_00_1_0_00_00_011_00;
        #1 $display("    ORI test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_ori: assert(signals===expected_signals);
        
        opcode = `OPCODE_LW ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_01_1_0_00_01_000_00;
        #1 $display("    LW test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_lw: assert(signals===expected_signals);
        
        opcode = `OPCODE_SW ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_01_0_1_00_01_000_00;
        #1 $display("    SW test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_sw: assert(signals===expected_signals);
        
        opcode = `OPCODE_BEQ ; funct = `FUNCT_ZZ ; expected_signals = 'b00_0_zz_0_0_01_zz_001_00; NFlag = 32'b10;
        #1 $display("    BEQ(jmp) test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_beq_jmp: assert(signals===expected_signals);
        
        opcode = `OPCODE_BEQ ; funct = `FUNCT_ZZ ; expected_signals = 'b00_0_zz_0_0_00_zz_001_00; NFlag = 32'b00;
        #1 $display("    BEQ(not-jmp) test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_beq_not_jmp: assert(signals===expected_signals);
        
        opcode = `OPCODE_LUI ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_00_1_0_00_10_011_00;
        #1 $display("    LUI test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_lui: assert(signals===expected_signals);
        
        opcode = `OPCODE_J ; funct = `FUNCT_ZZ ; expected_signals = 'bzz_z_zz_0_0_10_zz_zzz_00;
        #1 $display("    J test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_j: assert(signals===expected_signals);
        
        opcode = `OPCODE_ADDI ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_00_1_0_00_00_000_01;
        #1 $display("    ADDI test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_addi: assert(signals===expected_signals);
        
        opcode = `OPCODE_ADDIU ; funct = `FUNCT_ZZ ; expected_signals = 'b00_1_00_1_0_00_00_000_00;
        #1 $display("    ADDIU test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_addiu: assert(signals===expected_signals);
        
        opcode = `OPCODE_JAL ; funct = `FUNCT_ZZ ; expected_signals = 'b10_0_10_1_0_10_zz_101_00;
        #1 $display("    JAL test: opcode=%b, funct=%b, signals = %b == %b",opcode, funct, signals, expected_signals);
        controller_jal: assert(signals===expected_signals);

        $display(" *Controller test finished.");
        finish = 1;
    end

    assign signals = {RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp};

endmodule