ori $16, $0, 1          # $16=1
ori $17, $0, 3          # $17=3
ori $8, $0, 1           # $8=1
ori $12, $0,0xabab      # $12=0xabab
lui $13, 10             # $13=10

# Test jal, jr, beq
start:                  # do {
addu $4, $0,$16         #   $4=$16                  //
addu $5, $0,$8          #   $5=$8                   //
jal newadd              #   newadd() // $2=$4+$5    // $2=$16+$8
addu $16, $0, $2        #   $16=2                   // $16=2
subu $17,$17,$8         #   $17-=$8                 // $17-=1 (initially, $17==3)
beq $16, $17, start     # }while($16==$17);

# Test overflow in addiu(not setting flag)
ori $8, $0,4            # $8=4
addiu $24,$0,0x7fffffff # $24=7fff_ffff
addiu $9,$24,3          # $9=$24+3 // overflow
addiu $10,$24,5         # $10=$24+5 // overflow
addu $0,$0,$0           # $0=$0 // invalid
#addi $22,$24,6

# Test sw, lw(offset is posetive, negative, zero)
start2:                 #     
                        # // $8 is set to 4 before
sw $9, 0($8)            # [$8]=$9
sw $1, 0($8)            # [$8]=$1
lb $14, 3($8)           # $14=[$8][31:24]
sb $12,7($8)            # [$8+4][31:24]=$12[7:0]
lw $15,4($8)            # $15=[$8+4]
sb $4, -3($8)           # [$4-4][15:8]=$4[7:0]
lb $18, -1($8)          # $18=[$8-4][31:24]
addu $4,$0,$8           # $4=$8
addu $5,$0,$9           # $5=$9
jal newadd              # newadd() // $2=$4+$5
slt $25,$10,$8          #
beq $25, $0,end2        # if($10<$8) {
slt $20,$12,$4          #
beq $20, $0, end1       #   if($12>=$4) {
lui $12, 65535          #        $12[31:16]=0xffff
end1:                   #    }
ori $0, $0,1            #    $0=1 // invalid
lui $19, 0xefef         #    $19[31:16]=0xefef
addiu $3,$0,0xababcdcd  #    $3=0xababcdcd
start3:                 #    while(1) {
addiu $4, $3, 2         #        $4=$3+2
addi $23, $3, 5         #        $23=$3+5
jal newadd              #        newadd() // $2=$4+$5
addu $8, $0, $2         #         $8=$2
addu $4, $0, $8         #        $4=$8
addu $5, $0, $9         #        $5=$9
jal newadd              #        newadd() // $2=$4+$5
addu $9, $0, $2         #        $9=$2
addu $9, $8, $0         #        $9=$8                    // $9=$8
lui $10, 0x69           #        $10[31:16]|=0x69
beq $8, $9, start4      #        if($8==$9) break;        // (must break)
beq $0, $0, start3      #    }
start4:j end            # } else { ...(please skip the function newadd)

newadd:                 # function newadd:
addu $2, $4, $5         # $2 = $4 + $5
addi $0,$12,0x1234      # $0 = $12 + 0x1234 // invalid
jr $31                  # return

end2:addi $26,$0,0x5678 #     $26=0x5678
end:                    # }
