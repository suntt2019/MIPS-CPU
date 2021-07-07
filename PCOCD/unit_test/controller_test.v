`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module controller_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [5:0] opcode, funct;
    reg [31:0] NFlag;
    // Write enable signals
    wire PCWr, IRWr, RegWr, MemWr;
    // MUX switching signals
    wire ALUSrc;
    wire [1:0] RegDst, Mem2Reg;
    // Module control signals
    wire BACOp;
    wire [1:0] NPCSel, EXTOp, FlagOp;
    wire [2:0] ALUOp;

    // local variables
    integer i;

    // tested module
    controller controller1(
        .clk(clk),
        .reset(reset),
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
        .FlagOp(FlagOp),
        .PCWr(PCWr),
        .BACOp(BACOp),
        .IRWr(IRWr)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *Controller test started.");
        $display("  This test only test the status transition.");
        clk = 0;

        reset = 1;
        #10 $display("    Reset test:");
        $stop;
        reset = 0;

        $display(" *Controller test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

    assign signals = {RegDst, ALUSrc, Mem2Reg, RegWr, MemWr, NPCSel, EXTOp, ALUOp, FlagOp};

endmodule