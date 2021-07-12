`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module ifu_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset, PCWr;
    reg [2:0] NPCSel;
    reg [31:0] regPC, StoredInstruction;
    wire [31:0] instruction;
    wire [31:0] pc;

    // local variables
    integer i;
    reg [2:0] NPCSelBuf;
    reg IRWr;

    // tested module
    IFU ifu1(
        .clk(clk),
        .reset(reset),
        .NPCSel(NPCSel),
        .regPC(regPC),
        .instruction(instruction),
        .pc(pc),
        .PCWr(PCWr),
        .StoredInstruction(StoredInstruction)
    );

    initial begin
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        /*$display(" *IFU test started.");*/
         IRWr = 0;
        
        // test reset
        /*$display("    Reset test:");*/
        /*$display("      Read from file.");*/
        // /*$readmemh(`unit_test_hex_filename, ifu1.im.im, `CODE_SEG_PC, `CODE_SEG_PC+400);*/
        reset = 1;
        #10 /*$display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);*/
        if(~(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h)) /*$display("Assertion Error");*/

        // test PCWr
        PCWr = 0;
        /*$display("    PCWr test:");*/
        reset = 1;
        #10 /*$display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);*/
        if(~(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h)) /*$display("Assertion Error");*/
        reset = 0;
        NPCSel = `NPC_SEL_PC_ADD_4; PCWr = 0;
        #10 /*$display("      PCWr = %d, pc=%h == %h, instruction=%h == %h", PCWr, pc, `CODE_SEG_PC, instruction, `hex_0h);*/
        if(~(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h)) /*$display("Assertion Error");*/
        PCWr = 1;
        #10 /*$display("      PCWr = %d, pc=%h == %h, instruction=%h == %h", PCWr,  pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);*/
        if(~(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h)) /*$display("Assertion Error");*/
        
        
        PCWr = 1;

        // test PC+4
        /*$display("    PC+4(NPCSel=0b00) test:");*/
        reset = 1;
        #10 /*$display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);*/
        if(~(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h)) /*$display("Assertion Error");*/
        reset = 0;
        NPCSel = `NPC_SEL_PC_ADD_4;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        /*$display("      After 1 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);*/
        if(~(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        /*$display("      After 2 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h2*4, instruction, `hex_2h);*/
        if(~(pc === `CODE_SEG_PC + 'h2*4 && instruction === `hex_2h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        /*$display("      After 3 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h3*4, instruction, `hex_3h);*/
        if(~(pc === `CODE_SEG_PC + 'h3*4 && instruction === `hex_3h)) /*$display("Assertion Error");*/

        // test reg-jmp
        /*$display("    reg-jmp(NPCSel=0b01) test:");*/
        reset = 1;
        #10 /*$display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);*/
        if(~(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h)) /*$display("Assertion Error");*/
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        regPC = `CODE_SEG_PC + 'h4;
        #10 /*$display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);*/
        if(~(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        regPC = `CODE_SEG_PC + 'h10;
        #10 /*$display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h4*4, instruction, `hex_4h);*/
        if(~(pc === `CODE_SEG_PC + 'h4*4 && instruction === `hex_4h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        regPC = `CODE_SEG_PC + 'h8;
        #10 /*$display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h2*4, instruction, `hex_2h);*/
        if(~(pc === `CODE_SEG_PC + 'h2*4 && instruction === `hex_2h)) /*$display("Assertion Error");*/

        // test j-jmp
        /*$display("    j-jmp(NPCSel=0b10) test:");*/
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        regPC = `CODE_SEG_PC + 'h40 * 4;
        #10 /*$display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h40*4, instruction, `hex_40h);*/
        if(~(pc === `CODE_SEG_PC + 'h40*4 && instruction === `hex_40h)) /*$display("Assertion Error");*/
        NPCSel = `NPC_SEL_J_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After j-jmp to hex_42h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h42*4, instruction, `hex_42h);*/
        if(~(pc === `CODE_SEG_PC + 'h42*4 && instruction === `hex_42h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After j-jmp to hex_45h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h45*4, instruction, `hex_45h);*/
        if(~(pc === `CODE_SEG_PC + 'h45*4 && instruction === `hex_45h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h43*4, instruction, `hex_43h);*/
        if(~(pc === `CODE_SEG_PC + 'h43*4 && instruction === `hex_43h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h43*4, instruction, `hex_43h);*/
        if(~(pc === `CODE_SEG_PC + 'h43*4 && instruction === `hex_43h)) /*$display("Assertion Error");*/

        // test beq-jmp
        /*$display("    beq-jmp(NPCSel=0b11) test:");*/
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        regPC = `CODE_SEG_PC + 'h46 * 4;
        #10 /*$display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h46*4, instruction, `hex_46h);*/
        if(~(pc === `CODE_SEG_PC + 'h46*4 && instruction === `hex_46h)) /*$display("Assertion Error");*/
        NPCSel = `NPC_SEL_BEQ_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After beq-jmp(46+3+1=4a) to hex_4ah, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h4a*4, instruction, `hex_4ah);*/
        if(~(pc === `CODE_SEG_PC + 'h4a*4 && instruction === `hex_4ah)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After beq-jmp(4a+0+1=4b) to hex_4bh, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h4b*4, instruction, `hex_4bh);*/
        if(~(pc === `CODE_SEG_PC + 'h4b*4 && instruction === `hex_4bh)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After beq-jmp(4b-5+1=47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h47*4, instruction, `hex_47h);*/
        if(~(pc === `CODE_SEG_PC + 'h47*4 && instruction === `hex_47h)) /*$display("Assertion Error");*/
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 /*$display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;*/
        #10 /*$display("      After beq-jmp(47-1+1==47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h47*4, instruction, `hex_47h);*/
        if(~(pc === `CODE_SEG_PC + 'h47*4 && instruction === `hex_47h)) /*$display("Assertion Error");*/
        
        // test int-jmp
        /*$display("    int-jmp(NPCSel=0b100) test:");*/
        reset = 0;
        NPCSel = `NPC_SEL_INT_JMP;
        #10 /*$display("      After int-jmp, pc=%h == %h", pc, `INT_PC);*/
        if(~(pc === `INT_PC)) /*$display("Assertion Error");*/

        /*$display(" *IFU test finished.");*/
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

    always @(posedge clk) begin
        if(IRWr) StoredInstruction = instruction;
    end

endmodule