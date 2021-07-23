ori $14, $0, 0x1c00 # $14 = 0x1c00
mtc0 $14, $0        # cp0.$0(SR)={16'b0, 6'b000111, 8'b0, `EXL_UNLOCK, `INT_DIS}=0x1c00
ori $8, $0, 0x7f00  # $8=0x7f00
lw $9, 16($8)       # $9=devices[1][0](IN32)
sw $9, 32($8)       # devices[2][0](OUT32)=$9
addiu $10, $0, 10	# $10=10
sw $10, 4($8)       # device[0][4](TC.Preset)=1000
ori $15, $0, 0x9    # $15=0b1001
sw $15, 0($8)       # device[0][0](TC.CTRL)=0b1001
ori $14, $0, 0x1c01 # $14 = 0x1c01
mtc0 $14, $0        # cp0.$0(SR)={16'b0, 6'b000111, 10'b0, `EXL_UNLOCK, `INT_EN}=0x1c01
lop: j lop          # endless loop
