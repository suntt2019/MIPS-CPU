`timescale 1ns/ 1ns
`include "../unit_test/macro.v"

module ifu_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset, PCWr;
    reg [1:0] NPCSel;
    reg [31:0] regPC, StoredInstruction;
    wire [31:0] instruction;
    wire [31:0] pc;

    // local variables
    integer i;
    reg [1:0] NPCSelBuf;
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
        finish = 0; #1 while(~start) #1;
        $display(" *IFU test started.");
        clk = 0; IRWr = 0;
        
        // test reset
        $display("    Reset test:");
        $display("      Read from file.");
        $readmemh(`unit_test_hex_filename, ifu1.im.im);
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);
        ifu_reset: assert(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h);

        // test PCWr
        PCWr = 0;
        $display("    PCWr test:");
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);
        ifu_pcwr_0: assert(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h);
        reset = 0;
        NPCSel = `NPC_SEL_PC_ADD_4; PCWr = 0;
        #10 $display("      PCWr = %d, pc=%h == %h, instruction=%h == %h", PCWr, pc, `CODE_SEG_PC, instruction, `hex_0h);
        ifu_pcwr_1: assert(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h);
        PCWr = 1;
        #10 $display("      PCWr = %d, pc=%h == %h, instruction=%h == %h", PCWr,  pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);
        ifu_pcwr_2: assert(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h);
        
        
        PCWr = 1;

        // test PC+4
        $display("    PC+4(NPCSel=0b00) test:");
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);
        ifu_add4_0: assert(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h);
        reset = 0;
        NPCSel = `NPC_SEL_PC_ADD_4;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        $display("      After 1 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);
        ifu_add4_1: assert(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        $display("      After 2 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h2*4, instruction, `hex_2h);
        ifu_add4_2: assert(pc === `CODE_SEG_PC + 'h2*4 && instruction === `hex_2h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        $display("      After 3 clock, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h3*4, instruction, `hex_3h);
        ifu_add4_3: assert(pc === `CODE_SEG_PC + 'h3*4 && instruction === `hex_3h);

        // test reg-jmp
        $display("    reg-jmp(NPCSel=0b01) test:");
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h0*4, instruction, `hex_0h);
        ifu_regjmp_0: assert(pc === `CODE_SEG_PC + 'h0*4 && instruction === `hex_0h);
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        regPC = `CODE_SEG_PC + 'h4;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h1*4, instruction, `hex_1h);
        ifu_regjmp_1: assert(pc === `CODE_SEG_PC + 'h1*4 && instruction === `hex_1h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        regPC = `CODE_SEG_PC + 'h10;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h4*4, instruction, `hex_4h);
        ifu_regjmp_2: assert(pc === `CODE_SEG_PC + 'h4*4 && instruction === `hex_4h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        regPC = `CODE_SEG_PC + 'h8;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h2*4, instruction, `hex_2h);
        ifu_regjmp_3: assert(pc === `CODE_SEG_PC + 'h2*4 && instruction === `hex_2h);

        // test j-jmp
        $display("    j-jmp(NPCSel=0b10) test:");
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        regPC = `CODE_SEG_PC + 'h40 * 4;
        #10 $display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h40*4, instruction, `hex_40h);
        ifu_jjmp_0: assert(pc === `CODE_SEG_PC + 'h40*4 && instruction === `hex_40h);
        NPCSel = `NPC_SEL_J_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After j-jmp to hex_42h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h42*4, instruction, `hex_42h);
        ifu_jjmp_1: assert(pc === `CODE_SEG_PC + 'h42*4 && instruction === `hex_42h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After j-jmp to hex_45h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h45*4, instruction, `hex_45h);
        ifu_jjmp_2: assert(pc === `CODE_SEG_PC + 'h45*4 && instruction === `hex_45h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h43*4, instruction, `hex_43h);
        ifu_jjmp_3: assert(pc === `CODE_SEG_PC + 'h43*4 && instruction === `hex_43h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h43*4, instruction, `hex_43h);
        ifu_jjmp_4: assert(pc === `CODE_SEG_PC + 'h43*4 && instruction === `hex_43h);

        // test beq-jmp
        $display("    beq-jmp(NPCSel=0b11) test:");
        reset = 0;
        NPCSel = `NPC_SEL_REG_JMP;
        regPC = `CODE_SEG_PC + 'h46 * 4;
        #10 $display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `CODE_SEG_PC + 'h46*4, instruction, `hex_46h);
        ifu_beqjmp_0: assert(pc === `CODE_SEG_PC + 'h46*4 && instruction === `hex_46h);
        NPCSel = `NPC_SEL_BEQ_JMP;
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After beq-jmp(46+3+1=4a) to hex_4ah, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h4a*4, instruction, `hex_4ah);
        ifu_beqjmp_1: assert(pc === `CODE_SEG_PC + 'h4a*4 && instruction === `hex_4ah);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After beq-jmp(4a+0+1=4b) to hex_4bh, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h4b*4, instruction, `hex_4bh);
        ifu_beqjmp_2: assert(pc === `CODE_SEG_PC + 'h4b*4 && instruction === `hex_4bh);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After beq-jmp(4b-5+1=47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h47*4, instruction, `hex_47h);
        ifu_beqjmp_3: assert(pc === `CODE_SEG_PC + 'h47*4 && instruction === `hex_47h);
        NPCSelBuf=NPCSel; NPCSel=`NPC_SEL_PC_ADD_4; IRWr=1; #10 $display("      S1 cycle, PC+4, PC=%h", pc); NPCSel = NPCSelBuf; IRWr=0;
        #10 $display("      After beq-jmp(47-1+1==47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `CODE_SEG_PC + 'h47*4, instruction, `hex_47h);
        ifu_beqjmp_4: assert(pc === `CODE_SEG_PC + 'h47*4 && instruction === `hex_47h);
        
        $display(" *IFU test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

    always @(posedge clk) begin
        if(IRWr) StoredInstruction = instruction;
    end

endmodule