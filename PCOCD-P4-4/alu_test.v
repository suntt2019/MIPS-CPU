`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module alu_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [31:0] x,y;
    reg [2:0] ALUOp;
    reg [5:0] shamt;
    reg [31:0] Flag;
    wire [31:0] ALUOut, NFlag;

    // local variables
    integer i;
    reg [31:0] expected_out, expected_nflag;

    // tested module
    ALU alu1(
        .x(x),
        .y(y),
        .ALUOp(ALUOp),
        .ALUOut(ALUOut),
        .shamt(shamt),
        .Flag(Flag),
        .NFlag(NFlag)
    );

    initial begin
        finish = 0;
    end

always @(posedge start) begin
        /*$display(" *ALU test started.");*/

        x = 300; y = 300; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = 0; Flag = 32'b0; expected_nflag = 32'b10;
        #1 $display(
            "    Zero test: %h(%d) - %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_ADD; shamt = 6'b0; expected_out = 300; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    Add(not overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 32'h7fffffff; y = 1; ALUOp = `ALU_OP_ADD; shamt = 6'b0; expected_out = 32'h80000000; Flag = 32'b0; expected_nflag = 32'b01;
        #1 $display(
            "    Add(overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = -100; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    Sub(not overflow) test:  %h(%d) - %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 32'h70000000; y = 32'h90000000; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = 32'he0000000; Flag = 32'b0; expected_nflag = 32'b01;
        #1 $display(
            "    Sub(not overflow) test:  %h(%d) - %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_AND; shamt = 6'b0; expected_out = 'b01000000; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    And test:  %h(%d) & %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_OR; shamt = 6'b0; expected_out = 'b11101100; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    Or test:   %h(%d) | %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_LESS; shamt = 6'b0; expected_out = 'b1; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    Less test:   %h(%d) < %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/
        
        x = 100; y = 200; ALUOp = `ALU_OP_B; shamt = 6'b0; expected_out = 200; Flag = 32'b0; expected_nflag = 32'b00;
        #1 $display(
            "    B test:   %h(%d) = %h(%d) == %h(%d), Flag = %h, NFlag = %h == %h",
            y, y, ALUOut, ALUOut, expected_out, expected_out, Flag, NFlag, expected_nflag
        );
        if(~(ALUOut === expected_out && NFlag === expected_nflag )) /*$display("Assertion Error");*/

        /*$display(" *ALU test finished.");*/
        finish = 1;
    end

endmodule