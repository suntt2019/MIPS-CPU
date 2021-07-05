`timescale 1ns/ 1ns
`include "unit_test/macro.v"

module ifu_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [1:0] NPCSel;
    reg [31:0] regPC;
    wire [31:0] instruction;
    wire [31:0] pc;

    // local variables
    integer i;

    // tested module
    IFU ifu1(
        .clk(clk),
        .reset(reset),
        .NPCSel(NPCSel),
        .regPC(regPC),
        .instruction(instruction),
        .pc(pc)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *IFU test started.");
        clk = 0;
        
        // test reset
        $display("    Reset test:");
        $display("      Read from file");
        $readmemh(`unit_test_hex_filename, ifu1.im.im);
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h0*4, instruction, `hex_0h);
        ifu_reset: assert(pc === `code_seg_pc + 'h0*4 && instruction === `hex_0h);

        // test PC+4
        $display("    PC+4(NPCSel=0b00) test:");
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h0*4, instruction, `hex_0h);
        ifu_add4_0: assert(pc === `code_seg_pc + 'h0*4 && instruction === `hex_0h);
        reset = 0;
        NPCSel = 2'b00;
        #10 $display("      After 1 clock, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h1*4, instruction, `hex_1h);
        ifu_add4_1: assert(pc === `code_seg_pc + 'h1*4 && instruction === `hex_1h);
        #10 $display("      After 2 clock, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h2*4, instruction, `hex_2h);
        ifu_add4_2: assert(pc === `code_seg_pc + 'h2*4 && instruction === `hex_2h);
        #10 $display("      After 3 clock, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h3*4, instruction, `hex_3h);
        ifu_add4_3: assert(pc === `code_seg_pc + 'h3*4 && instruction === `hex_3h);

        // test reg-jmp
        $display("    reg-jmp(NPCSel=0b01) test:");
        reset = 1;
        #10 $display("      After reset, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h0*4, instruction, `hex_0h);
        ifu_regjmp_0: assert(pc === `code_seg_pc + 'h0*4 && instruction === `hex_0h);
        reset = 0;
        NPCSel = 2'b01;
        regPC = `code_seg_pc + 'h4;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `code_seg_pc + 'h1*4, instruction, `hex_1h);
        ifu_regjmp_1: assert(pc === `code_seg_pc + 'h1*4 && instruction === `hex_1h);
        regPC = `code_seg_pc + 'h10;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `code_seg_pc + 'h4*4, instruction, `hex_4h);
        ifu_regjmp_2: assert(pc === `code_seg_pc + 'h4*4 && instruction === `hex_4h);
        regPC = `code_seg_pc + 'h8;
        #10 $display("      regPC=%h, pc=%h == %h, instruction=%h == %h", regPC, pc, `code_seg_pc + 'h2*4, instruction, `hex_2h);
        ifu_regjmp_3: assert(pc === `code_seg_pc + 'h2*4 && instruction === `hex_2h);

        // test j-jmp
        $display("    j-jmp(NPCSel=0b10) test:");
        reset = 0;
        NPCSel = 2'b01;
        regPC = `code_seg_pc + 'h40 * 4;
        #10 $display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `code_seg_pc + 'h40*4, instruction, `hex_40h);
        ifu_jjmp_0: assert(pc === `code_seg_pc + 'h40*4 && instruction === `hex_40h);
        NPCSel = 2'b10;
        #10 $display("      After j-jmp to hex_42h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h42*4, instruction, `hex_42h);
        ifu_jjmp_1: assert(pc === `code_seg_pc + 'h42*4 && instruction === `hex_42h);
        #10 $display("      After j-jmp to hex_45h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h45*4, instruction, `hex_45h);
        ifu_jjmp_2: assert(pc === `code_seg_pc + 'h45*4 && instruction === `hex_45h);
        #10 $display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h43*4, instruction, `hex_43h);
        ifu_jjmp_3: assert(pc === `code_seg_pc + 'h43*4 && instruction === `hex_43h);
        #10 $display("      After j-jmp to hex_43h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h43*4, instruction, `hex_43h);
        ifu_jjmp_4: assert(pc === `code_seg_pc + 'h43*4 && instruction === `hex_43h);

        // test beq-jmp
        $display("    beq-jmp(NPCSel=0b11) test:");
        reset = 0;
        NPCSel = 2'b01;
        regPC = `code_seg_pc + 'h46 * 4;
        #10 $display("      After reg-jmp to %h, pc=%h == %h, instruction=%h == %h", regPC, pc, `code_seg_pc + 'h46*4, instruction, `hex_46h);
        ifu_beqjmp_0: assert(pc === `code_seg_pc + 'h46*4 && instruction === `hex_46h);
        NPCSel = 2'b11;
        #10 $display("      After beq-jmp(46+3+1=4a) to hex_4ah, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h4a*4, instruction, `hex_4ah);
        ifu_beqjmp_1: assert(pc === `code_seg_pc + 'h4a*4 && instruction === `hex_4ah);
        #10 $display("      After beq-jmp(4a+0+1=4b) to hex_4bh, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h4b*4, instruction, `hex_4bh);
        ifu_beqjmp_2: assert(pc === `code_seg_pc + 'h4b*4 && instruction === `hex_4bh);
        #10 $display("      After beq-jmp(4b-5+1=47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h47*4, instruction, `hex_47h);
        ifu_beqjmp_3: assert(pc === `code_seg_pc + 'h47*4 && instruction === `hex_47h);
        #10 $display("      After beq-jmp(47-1+1==47) to hex_47h, pc=%h == %h, instruction=%h == %h", pc, `code_seg_pc + 'h47*4, instruction, `hex_47h);
        ifu_beqjmp_4: assert(pc === `code_seg_pc + 'h47*4 && instruction === `hex_47h);
        
        $display(" *IFU test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule