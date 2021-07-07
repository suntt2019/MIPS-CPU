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

    wire addu, subu, ori, lw, sw, beq, lui, j, addi, addiu, slt, jal, jr, nop, lb, sb;
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

    assign overflow = NFlag[`FLAG_BIT_OVERFLOW];
    assign zero = NFlag[`FLAG_BIT_ZERO];

    always @(posedge clk or posedge reset) begin
        if(reset) begin
            status = `S1;
            //    Instruction       S1      S2      S3              S4              S5              S6          S1
            steps[`INSTR_ADDU]  ={  `S1,    `S2,    `S3_EXE_ADD,                    `S5_ALU_R_FD,               `S1};
            steps[`INSTR_SUBU]  ={  `S1,    `S2,    `S3_EXE_SUB,                    `S5_ALU_R_FD,               `S1};
            steps[`INSTR_ORI]   ={  `S1,    `S2,    `S3_EXEI_OR,                    `S5_ALU_I_FD,               `S1};
            steps[`INSTR_LW]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_RD_WORD,    `S5_DM_WORD,                `S1};
            steps[`INSTR_SW]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_WR_WORD,                                `S1};
            steps[`INSTR_BEQ]   ={  `S1,    `S2,    `S3_EXE_SUB,    `S3_BR_BEQ,                     `S6_BEQ,    `S1}; //judge
            steps[`INSTR_J]     ={  `S1,    `S2,                                                    `S6_J,      `S1};
            steps[`INSTR_LUI]   ={  `S1,    `S2,    `S3_EXEI_LUI,                   `S5_ALU_I_FD,               `S1};
            steps[`INSTR_ADDI]  ={  `S1,    `S2,    `S3_EXEI_ADD,                   `S5_ALU_I_FS,               `S1};
            steps[`INSTR_ADDIU] ={  `S1,    `S2,    `S3_EXEI_ADD,                   `S5_ALU_I_FD,               `S1};
            steps[`INSTR_SLT]   ={  `S1,    `S2,    `S3_EXE_SLT,                    `S5_ALU_R_FD,               `S1};
            steps[`INSTR_NOP]   ={  `S1,    `S2,                                                                `S1};
            steps[`INSTR_LB]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_RD_BYTE,    `S5_DM_WORD,                `S1};
            steps[`INSTR_SB]    ={  `S1,    `S2,    `S3_EXEI_ADD,   `S4_WR_BYTE,                                `S1};
            steps[`INSTR_JAL]   ={  `S1,    `S2,                                    `S5_RET,        `S6_J,      `S1};
            steps[`INSTR_JR]    ={  `S1,    `S2,                                                    `S6_REG,    `S1};

            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                for(k=0;k<=`STATUS_COUNT;k=k+1) begin
                   next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]] = steps[i][`STATUS_WIDTH:1];
                    steps[i] = (steps[i] >> `STATUS_WIDTH);
                end
            end
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
            else begin
                $display("Exception: Invalid instruction (opcode=%h, funct=%h)", opcode, funct);
                $stop;
            end
            $write("        Ready to execute: status=%h(signals=%b)-[Instr=%h]->Next:", status, signals, InstrID);
            if(status === `S3_BR_BEQ) begin
                $display("beq, NFlag=%b",NFlag);
                $stop;
                status = NFlag[`FLAG_BIT_ZERO] ? `S6_BEQ : `S1;
            end else begin
                status = next[InstrID][status];
            end

            case(status)
            // S1: Fetch instruction
                `S1:    signals = {
                                        `WR_EN, `WR_EN, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };

            // S2: Decode & Read registers
                `S2:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
            
            // S3: Calculate(ALU+EXT)
                `S3_EXE_ADD:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ADD
                                    };
                `S3_EXE_SUB:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_SUB
                                    };
                `S3_EXE_SLT:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_B, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_LESS
                                    };
                `S3_EXEI_ADD:       signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_SIGN, `FLAG_OP_ZZ, `ALU_OP_ADD
                                    };
                `S3_EXEI_OR:    signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZERO, `FLAG_OP_ZZ, `ALU_OP_OR
                                    };
                `S3_EXEI_LUI:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_EXT, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_LUI, `FLAG_OP_ZZ, `ALU_OP_OR
                                    };
                `S3_BR_BEQ:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };

            // S4: Read/Write memeory
                `S4_RD_WORD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `S4_RD_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `S4_WR_WORD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `S4_WR_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_DIS, `WR_EN,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };

            // S5: Write back registers
                `S5_DM_WORD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `S5_DM_BYTE:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_RAM,
                                        `BAC_OP_BYTE, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `S5_ALU_I_FD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `S5_ALU_I_FS:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RT, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_SET, `ALU_OP_ZZ
                                    };
                `S5_ALU_R_FD:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RD, `MEM2REG_ALU,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };
                `S5_RET:   signals = {
                                        `WR_DIS, `WR_DIS, `WR_EN, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_RET, `MEM2REG_RET,
                                        `BAC_OP_WORD, `NPC_SEL_ZZ, `EXT_OP_ZZ, `FLAG_OP_DIS, `ALU_OP_ZZ
                                    };

            // S6: Jump
                `S6_BEQ:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_BEQ_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `S6_J:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_J_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
                `S6_REG:   signals = { // STAGE-6
                                        `WR_EN, `WR_DIS, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_REG_JMP, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
                                    };
            
            // Other
                default: begin
                    $display("Exception: Invalid status id: %h.", status);
                    $stop;
                end
            endcase
            
            
            $display("%h(signals=%b)", status, signals);
            // $stop;
        end
    end

    assign {
        PCWr, IRWr, RegWr, MemWr,           // Write enable signals
        ALUSrc, RegDst, Mem2Reg,            // MUX switching signals
        BACOp, NPCSel, EXTOp, FlagOp, ALUOp // Module control signals
    } = signals;

endmodule
