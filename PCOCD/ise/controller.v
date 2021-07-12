`include "macro.v"

module controller(
    input clk, reset,
    input IntReq,
    input [5:0] opcode, funct,
    input [4:0] CP0Funct,
    input [31:0] NFlag,
    // Write enable signals
    output PCWr, IRWr, RegWr, MemWr, ALUOWr, CP0Wr,
    // MUX switching signals
    output ALUSrc, DRSrc, JRegSrc,
    output [1:0] RegDst, Mem2Reg, 
    // Module control signals
    output BACOp,
    output [1:0] EXTOp, FlagOp, EXLOp,
    output [2:0] NPCSel, ALUOp
);

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr, nop, lb, sb, bltzal, eret, mfc0, mtc0;
    reg [`SIGNAL_WIDTH:1] signals;
    reg [`STATUS_WIDTH:1] status;
    reg [`STATUS_WIDTH*`STATUS_COUNT:1] steps[`INSTR_COUNT:1];
    reg [`STATUS_WIDTH:1] next[`INSTR_COUNT:1][`STATUS_COUNT:1];
    reg [`INSTR_CNT_WD:1] i;
    reg [`STATUS_WIDTH:1] k;
    reg [`INSTR_WIDTH:1] InstrID;
    wire zero, overflow;

    assign addu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_ADDU;
    assign subu = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SUBU;
    assign slt = opcode === `OPCODE_SPECIAL && funct === `FUNCT_SLT;
    assign jr = opcode === `OPCODE_SPECIAL && funct === `FUNCT_JR;
    assign nop = opcode === `OPCODE_SPECIAL && funct === `FUNCT_NOP;

    assign eret = opcode === `OPCODE_COP0 && funct === `FUNCT_ERET;
    assign mfc0 = opcode === `OPCODE_COP0 && CP0Funct === `CP0FUNCT_MF;
    assign mtc0 = opcode === `OPCODE_COP0 && CP0Funct === `CP0FUNCT_MT;

    assign ori = opcode === `OPCODE_ORI;
    assign lw = opcode === `OPCODE_LW;
    assign sw = opcode === `OPCODE_SW;
    assign beq = opcode === `OPCODE_BEQ;
    assign lui = opcode === `OPCODE_LUI;
    assign j = opcode === `OPCODE_J;
    assign addi = opcode === `OPCODE_ADDI;
    assign addiu = opcode === `OPCODE_ADDIU;
    assign jal = opcode === `OPCODE_JAL;
    assign lb = opcode === `OPCODE_LB;
    assign sb = opcode === `OPCODE_SB;
    assign bltzal = opcode === `OPCODE_BLTZAL;

    assign overflow = NFlag[`FLAG_BIT_OVERFLOW];
    assign zero = NFlag[`FLAG_BIT_ZERO];

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            //    Instruction       S1      S2      S3              S4              S5              S6          S7   S1
            steps[`INSTR_ADDU]  ={  `S1,    `S2,    `S3_EXE_ADD,                    `S5_ALU_R_FD,               `S7, `S1};
            steps[`INSTR_SUBU]  ={  `S1,    `S2,    `S3_EXE_SUB,                    `S5_ALU_R_FD,               `S7, `S1};
            steps[`INSTR_ORI]   ={  `S1,    `S2,    `S3_EXEI_OR,                    `S5_ALU_I_FD,               `S7, `S1};
            steps[`INSTR_LW]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_RD_WORD,    `S5_DM_WORD,                `S7, `S1};
            steps[`INSTR_SW]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_WR_WORD,                                `S7, `S1};
            steps[`INSTR_BEQ]   ={  `S1,    `S2,    `S3_EXE_SUB,    `S3_BR_BEQ,                     `S6_BEQ,    `S7, `S1};
            steps[`INSTR_J]     ={  `S1,    `S2,                                                    `S6_J,      `S7, `S1};
            steps[`INSTR_LUI]   ={  `S1,    `S2,    `S3_EXEI_LUI,                   `S5_ALU_I_FD,               `S7, `S1};
            steps[`INSTR_ADDI]  ={  `S1,    `S2,    `S3_EXEI_ADD,   `S3_CK_OF,      `S5_ALU_I_FD,               `S7, `S1,
                                                                                    `S5_ALU_I_FS,               `S7, `S1};
            steps[`INSTR_ADDIU] ={  `S1,    `S2,    `S3_EXEI_ADD,                   `S5_ALU_I_FD,               `S7, `S1};
            steps[`INSTR_SLT]   ={  `S1,    `S2,    `S3_EXE_SLT,                    `S5_ALU_R_FD,               `S7, `S1};
            steps[`INSTR_NOP]   ={  `S1,    `S2,                                                                `S7, `S1};
            steps[`INSTR_LB]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_RD_BYTE,    `S5_DM_WORD,                `S7, `S1};
            steps[`INSTR_SB]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_WR_BYTE,                                `S7, `S1};
            steps[`INSTR_JAL]   ={  `S1,    `S2,                                    `S5_RET,        `S6_J,      `S7, `S1};
            steps[`INSTR_JR]    ={  `S1,    `S2,                                                    `S6_REG,    `S7, `S1};
            steps[`INSTR_BLTZAL]={  `S1,    `S2,    `S3_EXE_LTZ,    `S3_BR_BLTZAL,  `S5_RET,        `S6_BEQ,    `S7, `S1};
            steps[`INSTR_ERET]  ={  `S1,    `S2,                                                    `S6_ERET,   `S7, `S1};
            steps[`INSTR_MFC0]  ={  `S1,    `S2,                    `S4_RD_CP0,     `S5_DM_WORD,                `S7, `S1};
            steps[`INSTR_MTC0]  ={  `S1,    `S2,                    `S4_WR_CP0,                                 `S7, `S1};
            
            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                for(k=0;k<=`STATUS_COUNT;k=k+1) begin
                    if(steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1] > 0) begin
                        next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]] = steps[i][`STATUS_WIDTH:1];
                    end
                   steps[i] = (steps[i] >> `STATUS_WIDTH);
                end
            end

            status = `S7;
            signals = {
                `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
            };

            `ifdef DEBUG
            $display("Status transition matrix(each-row=instr\\each-col=status-from):");
            $write("i\\sf");
            for(k=0;k<=`STATUS_COUNT;k=k+1) begin
                $write("%h ", k);
            end
            $display("");
            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                $write("%h: ", i);
                for(k=0;k<=`STATUS_COUNT;k=k+1) begin
                    $write("%h ", next[i][k]);
                end
                $display("");
            end
            `endif

        end else begin

            if(addu) InstrID = `INSTR_ADDU;
            else if(subu) InstrID = `INSTR_SUBU;
            else if(ori) InstrID = `INSTR_ORI;
            else if(lw) InstrID = `INSTR_LW;
            else if(sw) InstrID = `INSTR_SW;
            else if(beq) InstrID = `INSTR_BEQ;
            else if(j) InstrID = `INSTR_J;
            else if(lui) InstrID = `INSTR_LUI;
            else if(addi) InstrID = `INSTR_ADDI;
            else if(addiu) InstrID = `INSTR_ADDIU;
            else if(slt) InstrID = `INSTR_SLT;
            else if(nop) InstrID = `INSTR_NOP;
            else if(lb) InstrID = `INSTR_LB;
            else if(sb) InstrID = `INSTR_SB;
            else if(jal) InstrID = `INSTR_JAL;
            else if(jr) InstrID = `INSTR_JR;
            else if(bltzal) InstrID = `INSTR_BLTZAL;
            else if(eret) InstrID = `INSTR_ERET;
            else if(mfc0) InstrID = `INSTR_MFC0;
            else if(mtc0) InstrID = `INSTR_MTC0;
            else begin
                $display("Exception: Invalid instruction (opcode=%h, funct=%h, CP0Funct=%h)", opcode, funct, CP0Funct);
                $stop;
            end
            `ifdef CONTROLLER_OUTPUT
            if(status === `S1) $write("        Controller: status=%h(signals=%b)-[Instr=?(delayed)]->", status, signals);
            else $write("        Controller: status=%h(signals=%b)-[Instr=%h]->", status, signals, InstrID);
            `endif
            if(status === `S3_BR_BEQ) begin
                status = NFlag[`FLAG_BIT_ZERO] ? `S6_BEQ : `S7;
            end else if(status === `S3_BR_BLTZAL) begin
                status = NFlag[`FLAG_BIT_ZERO] ? `S7 : `S5_RET;
            end else if(status === `S3_CK_OF) begin
                status = NFlag[`FLAG_BIT_OVERFLOW] ? `S5_ALU_I_FS : `S5_ALU_I_FD;
            end else begin
                status = next[InstrID][status];
            end

            if(status === `S7 && ~IntReq) begin
                // if there isn't interrupt request, skip S7
                status = next[InstrID][status];
                `ifdef CONTROLLER_OUTPUT
                $write("(IntReq=%b, skip S7)->", IntReq);
                `endif
            end

            case(status)
            // S1: Fetch instruction
                `S1:    signals = {
                                        `WR_EN, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };

            // S2: Decode & Read registers
                `S2:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
            
            // S3: Calculate(ALU+EXT)
                `S3_EXE_ADD:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ADD, `EXL_OP_NOP
                                    };
                `S3_EXE_SUB:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_SUB, `EXL_OP_NOP
                                    };
                `S3_EXE_SLT:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_LESS, `EXL_OP_NOP
                                    };
                `S3_EXEI_ADD:       signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_ADD, `EXL_OP_NOP
                                    };
                `S3_EXEI_OR:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZERO, `FLAG_OP_ZZ, `ALU_OP_OR, `EXL_OP_NOP
                                    };
                `S3_EXEI_LUI:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_LUI, `FLAG_OP_ZZ, `ALU_OP_OR, `EXL_OP_NOP
                                    };
                `S3_EXE_LTZ:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_LESS, `EXL_OP_NOP
                                    };
                `S3_BR_BEQ:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S3_BR_BLTZAL:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S3_CK_OF:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };

            // S4: Read/Write memeory
                `S4_RD_WORD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_DM, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S4_RD_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_DM, `JREGSRC_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S4_RD_CP0:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_CP0, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S4_WR_WORD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_DM, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S4_WR_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_DM, `JREGSRC_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S4_WR_CP0:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_EN,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_CP0, `JREGSRC_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };

            // S5: Write back registers
                `S5_DM_WORD:   signals = { // TODO: no need to divide into word and byte?
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S5_DM_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S5_ALU_I_FD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S5_ALU_I_FS:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_SET, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S5_ALU_R_FD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RD, `MEM2REG_ALU, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S5_RET:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RET, `MEM2REG_RET, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };

            // S6: Jump
                `S6_BEQ:   signals = {
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_BEQ_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S6_J:   signals = {
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S6_REG:   signals = {
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_A,
                                        `BAC_OP_ZZ, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_NOP
                                    };
                `S6_ERET:   signals = {
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_EPC,
                                        `BAC_OP_ZZ, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_CLR
                                    };
            
            // S7: Interrupt
                `S7:   signals = {
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ, `DRSRC_ZZ, `JREGSRC_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_INT_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ, `EXL_OP_SET
                                    };
            
            // Other
                default: begin
                    $display("Exception: Invalid status id: %h.", status);
                    $stop;
                end
            endcase
            `ifdef CONTROLLER_OUTPUT
            $display("%h(signals=%b)", status, signals);
            `endif
            if(status === `S7) begin
                `ifdef CONTROLLER_OUTPUT
                $display("        Controller: IntReq=%b, status=%h, Interrupt!", IntReq, status);
                `endif
                // $stop;
            end
            // $stop;
        end
    end

    assign {
        PCWr, IRWr, RegWr, MemWr, ALUOWr, CP0Wr,        // Write enable signals
        ALUSrc, RegDst, Mem2Reg, DRSrc, JRegSrc,        // MUX switching signals
        BACOp, NPCSel, EXTOp, FlagOp, ALUOp, EXLOp      // Module control signals
    } = signals;

endmodule
