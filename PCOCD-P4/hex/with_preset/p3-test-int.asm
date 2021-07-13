# .text 0x4180
ori $16, $0, 0x7f00	# $8=0x7f00
lw $11, 16($16)		# $11=devices[1][0](IN32)
beq $11, $12, add1
sw $11, 32($16)		# devices[2][0](OUT32)=$11
j intend
add1:
lw $13, 32($16)		# $13 = devices[2][0](OUT32)
addiu $13, $13, 1	# $13++
sw $13, 32($16)		# devices[2][0](OUT32)=$9
intend:
addu $12, $11, $0
sw $10, 4($16)		# device[0][4](TC.Preset)=1000
eret
