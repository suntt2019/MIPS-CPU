addu $10, $8, $9 # $8=0x1234_5678, $9=0x7654_3210
subu $10, $8, $9 # $8=0x1234_5678, $9=0x7654_3210
ori $10, $0, 100
lw $10, 4($8) # $8=24
sw $9, -8($8) # $8=24, $9=0x3456_7890
beq $8, $9, beq_test # $8=100, $9=100
beq $8, $9, beq_test # $8=100, $9=200
nop
beq_test:
j_test:
lui $10, 0x1234 # $10=0x5678
j j_test
addi $10, $8, -100 # $8=0x1234_5678
addi $10, $8, 100 # $8=0x7fff_ffff
addiu $10, $8, 100 # $8=0x7fff_ffff
slt $10, $8, $9 # $8=0x1234_5678, $9=0x7654_3210
jal j_test
jr $8 # $8=0x1234_5678
eret # cp0.EPC=0x1234_5678
mfc0 $10, $3 # cp0.PRID = `PRID
mtc0 $8, $0 # $8=0xfedc_1234
nop # HW
lw $10, 4($8) # $8=0x7f10
sw $9, 8($8) # $8=0x7f20, $9=0x3456_7890
