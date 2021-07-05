`timescale 1ns/ 1ns
module alu_test (start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg [31:0] x,y;
    reg [2:0] ALUOp;
    reg [5:0] shamt;
    wire [31:0] ALUOut;
    wire zero;

    // local variables
    integer i;
    reg [31:0] expected_out;
    reg expected_zero;

    // tested module
    ALU alu1(
        .x(x),
        .y(y),
        .ALUOp(ALUOp),
        .ALUOut(ALUOut),
        .zero(zero),
        .shamt(shamt)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *ALU test started.");

        x = 300; y = 300; ALUOp = 3'b001; shamt = 6'b0; expected_out = 0; expected_zero = 1;
        #1 $display(
            "    Zero test: %b(%d) - %b(%d) = %b(%d) == %b(%d), zero = %d == %d",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero
        );
        alu_zero: assert(ALUOut === expected_out && zero == expected_zero);
        
        x = 100; y = 200; ALUOp = 3'b000; shamt = 6'b0; expected_out = 300; expected_zero = 0;
        #1 $display(
            "    Add test:  %b(%d) - %b(%d) = %b(%d) == %b(%d), zero = %d == %d",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero
        );
        alu_add: assert(ALUOut === expected_out && zero == expected_zero);
        
        x = 100; y = 200; ALUOp = 3'b001; shamt = 6'b0; expected_out = -100; expected_zero = 0;
        #1 $display(
            "    Sub test:  %b(%d) + %b(%d) = %b(%d) == %b(%d), zero = %d == %d",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero
        );
        alu_sub: assert(ALUOut === expected_out && zero == expected_zero);
        
        x = 100; y = 200; ALUOp = 3'b010; shamt = 6'b0; expected_out = 'b01000000; expected_zero = 0;
        #1 $display(
            "    And test:  %b(%d) & %b(%d) = %b(%d) == %b(%d), zero = %d == %d",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero
        );
        alu_and: assert(ALUOut === expected_out && zero == expected_zero);
        
        x = 100; y = 200; ALUOp = 3'b011; shamt = 6'b0; expected_out = 'b11101100; expected_zero = 0;
        #1 $display(
            "    Or test:   %b(%d) | %b(%d) = %b(%d) == %b(%d), zero = %d == %d",
            x, x, y, y, ALUOut, ALUOut, expected_out, expected_out, zero, expected_zero
        );
        alu_or: assert(ALUOut === expected_out && zero == expected_zero);

        $display(" *ALU test finished.");
        finish = 1;
    end

endmodule