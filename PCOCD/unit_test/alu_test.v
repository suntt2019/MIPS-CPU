`timescale 1ns/ 1ns
`include "unit_test/macro.v"

module alu_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [31:0] x,y;
    reg [2:0] ALUOp;
    reg [5:0] shamt;
    wire [31:0] ALUOut, flag;
    wire zero;

    // local variables
    integer i;
    reg [31:0] expected_out, expected_flag;
    reg expected_zero;

    // tested module
    ALU alu1(
        .x(x),
        .y(y),
        .ALUOp(ALUOp),
        .ALUOut(ALUOut),
        .zero(zero),
        .shamt(shamt),
        .flag(flag)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *ALU test started.");

        x = 300; y = 300; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = 0; expected_zero = 1; expected_flag = 32'b0;
        #1 $display(
            "    Zero test: %h(%d) - %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_zero: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_ADD; shamt = 6'b0; expected_out = 300; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    Add(not overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_add: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 32'h7fffffff; y = 1; ALUOp = `ALU_OP_ADD; shamt = 6'b0; expected_out = 32'h80000000; expected_zero = 0; expected_flag = 32'b1;
        #1 $display(
            "    Add(overflow) test:  %h(%d) + %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_add_overflow: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = -100; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    Sub(not overflow) test:  %h(%d) - %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_sub: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 32'h70000000; y = 32'h90000000; ALUOp = `ALU_OP_SUB; shamt = 6'b0; expected_out = 32'he0000000; expected_zero = 0; expected_flag = 32'b1;
        #1 $display(
            "    Sub(not overflow) test:  %h(%d) - %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_sub_overflow: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_AND; shamt = 6'b0; expected_out = 'b01000000; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    And test:  %h(%d) & %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_and: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_OR; shamt = 6'b0; expected_out = 'b11101100; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    Or test:   %h(%d) | %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_or: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_LESS; shamt = 6'b0; expected_out = 'b1; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    Less test:   %h(%d) < %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_less: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );
        
        x = 100; y = 200; ALUOp = `ALU_OP_B; shamt = 6'b0; expected_out = 200; expected_zero = 0; expected_flag = 32'b0;
        #1 $display(
            "    B test:   %h(%d) = %h(%d) == %h(%d), zero = %d == %d, flag = %h == %h",
            y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero, flag, expected_flag
        );
        alu_b: assert(ALUOut === expected_out && zero === expected_zero && flag === expected_flag );

        $display(" *ALU test finished.");
        finish = 1;
    end

endmodule