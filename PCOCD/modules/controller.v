`include "../macro.v"

module controller(
    input clk, reset,
    input [5:0] opcode, funct,
    input [31:0] NFlag,
    // Write enable signals
    output PCWr, IRWr, RegWr, MemWr,
    // MUX switching signals
    output ALUSrc,
    output [1:0] RegDst, Mem2Reg, 
    // Module control signals
    output BACOp,
    output [1:0] NPCSel, EXTOp, FlagOp,
    output [2:0] ALUOp
);

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr, nop;
    reg [`SIGNAL_WIDTH:1] signals;
    reg [`STATUS_WIDTH:1] status;
    reg [`STATUS_WIDTH*`STATUS_COUNT:1] steps[`INSTR_COUNT:1];
    reg [`STATUS_WIDTH:1] next[`INSTR_COUNT:1][`STATUS_COUNT:1];
    reg [`INSTR_CNT_WD:1] i;
    reg [`STATUS_WIDTH*2:1] k;
    wire zero, overflow;
    reg [`STATUS_WIDTH:1] kk;

    assign addu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_ADDU;
    assign subu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SUBU;
    assign slt = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SLT;
    assign jr = opcode === `OPCODE_SPECIAL && funct === `FUNCT_JR;
    assign nop = opcode === `OPCODE_SPECIAL && funct === `FUNCT_NOP;
    assign ori = opcode === `OPCODE_ORI;
    assign lw = opcode === `OPCODE_LW;
    assign sw = opcode === `OPCODE_SW;
    assign beq = opcode === `OPCODE_BEQ;
    assign lui = opcode === `OPCODE_LUI;
    assign j = opcode === `OPCODE_J;
    assign addi = opcode === `OPCODE_ADDI;
    assign addiu = opcode === `OPCODE_ADDIU;
    assign jal = opcode === `OPCODE_JAL;

    assign overflow = NFlag[`FLAG_BIT_OVERFLOW];
    assign zero = NFlag[`FLAG_BIT_ZERO];

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            $stop;
            status = `STATUS_0_FETCH;
            steps[`INSTR_ADDU] = {`STATUS_0_FETCH, `STATUS_1_DCDRF, `STATUS_2_0_MA_W, `STATUS_0_FETCH};
            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                for(kk=0;kk<=`STATUS_COUNT;kk=kk+1) begin
                   next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]] = steps[i][`STATUS_WIDTH:1];
                    steps[i] = (steps[i] >> `STATUS_WIDTH);
                end
            end
            `ifdef DEBUG
            $display("Status transition matrix(each-row=instr\\each-col=status-from):");
            $write("i\\sf");
            for(kk=0;kk<=`STATUS_COUNT;kk=kk+1) begin
                $write("%d ", kk);
            end
            $display("");
            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                $write("%d: ", i);
                for(kk=0;kk<=`STATUS_COUNT;kk=kk+1) begin
                    $write("%d ", next[i][kk]);
                end
                $display("");
            end
            `endif

        end else begin
            case(status)
                `STATUS_0_FETCH:    signals = {  // STAGE-1
                                        `WR_EN, `WR_EN, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_1_DCDRF:   signals = { // STAGE-2
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_2_MA:       signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_ADD
                                    };
                `STATUS_3_0_MR_W:   signals = { // STAGE-4
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_3_1_MR_B:   signals = { // STAGE-4
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_4_0_MEMWB_W:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `STATUS_4_1_MEMWB_B:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `STATUS_5_0_MW_W:   signals = { // STAGE-4
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_5_1_MW_B:   signals = { // STAGE-4
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_6_0_EXE_ADD:signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_ADD
                                    };
                `STATUS_6_1_EXE_SUB:signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_SUB
                                    };
                `STATUS_7_0_0_ALUWB_I_FD:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `STATUS_7_0_1_ALUWB_I_FS:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_SET, `ALU_OP_ZZ
                                    };
                `STATUS_7_1_0_ALUWB_R_FD:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RD, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `STATUS_8_0_BRANCH_BEQ:   signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_SUB
                                    };
                `STATUS_9_0_JMP_BEQ:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_BEQ_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_9_1_JMP_J:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_9_2_JMP_REG:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `STATUS_A_RETRW:   signals = { // STAGE-5
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RET, `MEM2REG_RET,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `STATUS_B_0_EXEI_OR:signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZERO, `FLAG_OP_ZZ, `ALU_OP_OR
                                    };
                `STATUS_B_1_EXEI_LUI:signals = { // STAGE-3
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_LUI, `FLAG_OP_ZZ, `ALU_OP_OR
                                    };
                default: begin
                    $display("Exception: Invalid status id.");
                    $stop;
                end
            endcase
        end
    end

    assign {
        PCWr, IRWr, RegWr, MemWr,           // Write enable signals
        ALUSrc, RegDst, Mem2Reg,            // MUX switching signals
        BACOp, NPCSel, EXTOp, FlagOp, ALUOp // Module control signals
    } = signals;

endmodule
