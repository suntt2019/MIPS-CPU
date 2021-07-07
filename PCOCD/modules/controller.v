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
            steps[`INSTR_ADDU] = {`STATUS_0_FETCH, `STATUS_1_DCD_RF, `STATUS_2_MA, `STATUS_0_FETCH};
            for(i=1;i<=`INSTR_COUNT;i=i+1) begin
                for(kk=0;kk<=`STATUS_COUNT;kk=kk+1) begin
                    // $display("next[%d][steps[%d][%d:%d]]=next[%d][%h](%h)<-steps[%d][%d:%d](%h)",
                    //  i, i, k+`STATUS_WIDTH-1, k, i, steps[i][k+`STATUS_WIDTH-1:k], next[i][steps[i][k+`STATUS_WIDTH-1:k]], i, k-1, k-`STATUS_WIDTH, steps[i][k-1:k-`STATUS_WIDTH]);
                    // next[i][steps[i][k+`STATUS_WIDTH-1:k]] = steps[i][k-1:k-`STATUS_WIDTH];
                    // $display("next[%d][%h](%h)=steps[%d][%d:%d](%h)",
                    //  i, steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1], next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]],
                    //  i, `STATUS_WIDTH, 1, steps[i][`STATUS_WIDTH:1]);
                    next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]] = steps[i][`STATUS_WIDTH:1];
                    steps[i] = (steps[i] >> `STATUS_WIDTH);
                    // $display("ret=%h, steps[i]=%h", next[i][steps[i][`STATUS_WIDTH*2:`STATUS_WIDTH+1]],steps[i]);
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
                    `STATUS_0_FETCH: signals = {
                                        `WR_EN, `WR_EN, `WR_DIS, `WR_DIS,
                                        `ALUSRC_ZZ, `REGDST_ZZ, `MEM2REG_ZZ,
                                        `BAC_OP_ZZ, `NPC_SEL_PC_ADD_4, `EXT_OP_ZZ, `FLAG_OP_ZZ, `ALU_OP_ZZ
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
