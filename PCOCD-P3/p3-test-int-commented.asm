# .text 0x4180
ori $16, $0, 0x7f00 # $8=0x7f00                     4180
lw $11, 16($16)     # $11=devices[1][0](IN32)       4184   
beq $11, $12, add1  # if($11!=$12) {                4188
sw $11, 32($16)     #   devices[2][0](OUT32)=$11    418c
j intend            # } else {                      4190
add1:
lw $13, 32($16)     #   $13 = devices[2][0](OUT32)  4194
addiu $13, $13, 1   #   $13++                       4198
sw $13, 32($16)     #   devices[2][0](OUT32)=$9     419c
intend:             # }
addu $12, $11, $0   # $12=$11                       41a0
sw $10, 4($16)      # device[0][4](TC.Preset)=1000  41a4
eret                # return                        41a8
