`include "../macro.v"

`define unit_test_hex_filename "../unit_test/unit-test.txt"
`define hex_0h 32'h00010203
`define hex_1h 32'h04050607
`define hex_2h 32'h08090a0b
`define hex_3h 32'h0c0d0e0f
`define hex_4h 32'h10111213
`define hex_5h 32'h14151617
`define hex_40h `CODE_SEG_PC/4 + 32'h42 // j-jmp to 0x42 [0]
`define hex_41h `CODE_SEG_PC/4 + 32'h40 // j-jmp to 0x40
`define hex_42h `CODE_SEG_PC/4 + 32'h45 // j-jmp to 0x45 [1]
`define hex_43h `CODE_SEG_PC/4 + 32'h43 // j-jmp to 0x43 [3][4]
`define hex_44h `CODE_SEG_PC/4 + 32'h40 // j-jmp to 0x40
`define hex_45h `CODE_SEG_PC/4 + 32'h43 // j-jmp to 0x43 [2]
`define hex_46h 32'h0000_0003 // beq-jmp +1+3 = +4 [0]
`define hex_47h 32'h0000_ffff // beq-jmp +1-1 = +0 [3][4]
`define hex_48h 32'h0000_fffe // beq-jmp +1-2 = -1
`define hex_49h 32'h0000_0003 // beq-jmp +1+3 = +4
`define hex_4ah 32'h0000_0000 // beq-jmp +1+0 = +1 [1]
`define hex_4bh 32'h0000_fffb // beq-jmp +1-5 = -4 [2]
