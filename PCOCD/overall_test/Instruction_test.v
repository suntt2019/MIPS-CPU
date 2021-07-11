`timescale 1ns/ 1ns
`include "../macro.v"

module devices_for_test(clk, we, in, addr, out);
    input clk, we;
    input [31:0] in, addr;
    output [31:0] out;
    reg [31:0]regs[16'h8000:0];

    assign out = regs[addr];
    always @(posedge clk) begin
        if(we) regs[addr] = in;
    end

endmodule

module instruction_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset;
    reg [`CP0_DEV_CNT:1] HWInt;
    reg [31:0] PrDIn;
    wire [31:0] PrAddr, PrDOut;
    wire Wen;

    // local variables
    integer i, t;
    reg [31:0] instr;

    // tested module
    mips mips1(
        .clk(clk),
        .rst(reset),
        .PrDIn(PrDIn),
        .HWInt(HWInt),
        .Wen(Wen),
        .PrAddr(PrAddr),
        .PrDOut(PrDOut)
    );

    devices_for_test dev(
        .clk(clk),
        .in(PrDOut),
        .out(PrDIn),
        .addr(PrAddr),
        .we(Wen)
    );


    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *Instruction test started.");
        HWInt = 'b0;

        // ADDU Test
        $display("    ADDU Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h01095021; #10 $display("      Load instruction: addu $10, $8, $9 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: addu=%d, signals=%b", mips1.ctr.addu, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h1234_5678; $display("      Set regs[8]<-32'h1234_5678(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 32'h7654_3210; $display("      Set regs[9]<-32'h7654_3210(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h8888_8888);
        addu_reg10: assert(mips1.gpr.regs[10] === 32'h8888_8888);
        
        // SUBU Test
        $display("    SUBU Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h01095023; #10 $display("      Load instruction: subu $10, $8, $9 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: subu=%d, signals=%b", mips1.ctr.subu, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h1234_5678; $display("      Set regs[8]<-32'h1234_5678(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 32'h7654_3210; $display("      Set regs[9]<-32'h7654_3210(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h9be0_2468);
        subu_reg10: assert(mips1.gpr.regs[10] === 32'h9be0_2468);
        
        // ORI Test
        $display("    ORI Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h340a0064; #10 $display("      Load instruction: ori $10, $0, 100 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: ori=%d, signals=%b", mips1.ctr.ori, mips1.ctr.signals);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h64);
        ori_reg10: assert(mips1.gpr.regs[10] === 32'h64);
        
        // LW Test
        $display("    LW Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h8d0a0004; #10 $display("      Load instruction: lw $10, 4($8) (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: lw=%d, signals=%b", mips1.ctr.lw, mips1.ctr.signals);
        mips1.gpr.regs[8] = 24; $display("      Set regs[8]<-24(%h)", mips1.gpr.regs[8]);
        {mips1.dm.dm[31],mips1.dm.dm[30],mips1.dm.dm[29],mips1.dm.dm[28]} = 32'h1234_5678;
          $display("      Set dm[28]<-32'h1234_5678(%h)", {mips1.dm.dm[31],mips1.dm.dm[30],mips1.dm.dm[29],mips1.dm.dm[28]});
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h1234_5678);
        lw_reg10: assert(mips1.gpr.regs[10] === 32'h1234_5678);
        
        // SW Test
        $display("    SW Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'had09fff8; #10 $display("      Load instruction: sw $9, -8($8) (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: sw=%d, signals=%b", mips1.ctr.sw, mips1.ctr.signals);
        mips1.gpr.regs[8] = 24; $display("      Set regs[8]<-24(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 32'h3456_7890; $display("      Set regs[9]<-32'h3456_7890(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check dm[16]=%h == %h", {mips1.dm.dm[19],mips1.dm.dm[18],mips1.dm.dm[17],mips1.dm.dm[16]}, 32'h3456_7890);
        sw_dm16: assert({mips1.dm.dm[19],mips1.dm.dm[18],mips1.dm.dm[17],mips1.dm.dm[16]} === 32'h3456_7890);
        
        // BEQ Test(jmp)
        $display("    BEQ Test(jmp):"); reset = 1; clk = 0; t = 1;
        instr = 32'h11090002; #10 $display("      Load instruction: beq $8, $9, beq_test(im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: beq=%d, signals=%b", mips1.ctr.beq, mips1.ctr.signals);
        mips1.gpr.regs[8] = 100; $display("      Set regs[8]<-100(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 100; $display("      Set regs[9]<-100(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, 32'h0000_300c);
        beq_jmp_pc: assert(mips1.PC === 32'h0000_300c);
        
        // BEQ Test(not-jmp)
        $display("    BEQ Test(not-jmp):"); reset = 1; clk = 0; t = 1;
        instr = 32'h11090001; #10 $display("      Load instruction: beq $8, $9, beq_test(im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: beq=%d, signals=%b", mips1.ctr.beq, mips1.ctr.signals);
        mips1.gpr.regs[8] = 100; $display("      Set regs[8]<-100(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 200; $display("      Set regs[9]<-200(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, `CODE_SEG_PC+4);
        beq_njmp_pc: assert(mips1.PC === `CODE_SEG_PC+4);

        // NOP Test
        $display("    NOP Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h00000000; #10 $display("      Load instruction: nop (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: nop=%d, signals=%b", mips1.ctr.nop, mips1.ctr.signals);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, `CODE_SEG_PC+4);
        nop_pc: assert(mips1.PC === `CODE_SEG_PC+4);
        
        // LUI Test
        $display("    LUI Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h3c0a1234; #10 $display("      Load instruction: lui $10, 0x1234 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: lui=%d, signals=%b", mips1.ctr.lui, mips1.ctr.signals);
        mips1.gpr.regs[10] = 32'h5678; $display("      Set regs[8]<-32'h5678(%h)", mips1.gpr.regs[10]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h1234_0000);
        lui_reg10: assert(mips1.gpr.regs[10] === 32'h1234_0000);
        
        // J Test
        $display("    J Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h08000c08; #10 $display("      Load instruction: j j_test(im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: j=%d, signals=%b", mips1.ctr.j, mips1.ctr.signals);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, 32'h0000_3020);
        j_pc: assert(mips1.PC === 32'h0000_3020);
        
        // ADDI Test(not overflow)
        $display("    ADDI Test(not overflow):"); reset = 1; clk = 0; t = 1;
        instr = 32'h210aff9c; #10 $display("      Load instruction: addi $10, $8, -100 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: addi=%d, signals=%b", mips1.ctr.addi, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h1234_5678; $display("      Set regs[8]<-32'h1234_5678(%h)", mips1.gpr.regs[8]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h1234_5614);
        addi_nof_reg10: assert(mips1.gpr.regs[10] === 32'h1234_5614);
        $display("      Check regs[`REG_ADDR_FLAG]=%h == %h", mips1.gpr.regs[`REG_ADDR_FLAG], 32'b0);
        addi_nof_reg_flag: assert(mips1.gpr.regs[`REG_ADDR_FLAG] === 32'b0);
        
        // ADDI Test(overflow)
        $display("    ADDI Test(overflow):"); reset = 1; clk = 0; t = 1;
        instr = 32'h210a0064; #10 $display("      Load instruction: addi $10, $8, 100 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: addi=%d, signals=%b", mips1.ctr.addi, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h7fff_ffff; $display("      Set regs[8]<-32'h7fff_ffff(%h)", mips1.gpr.regs[8]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'b0);
        addi_of_reg10: assert(mips1.gpr.regs[10] === 32'b0);
        $display("      Check regs[`REG_ADDR_FLAG]=%h == %h", mips1.gpr.regs[`REG_ADDR_FLAG], 32'b1);
        addi_of_reg_flag: assert(mips1.gpr.regs[`REG_ADDR_FLAG] === 32'b1);
        
        // ADDIU Test
        $display("    ADDIU Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h250a0064; #10 $display("      Load instruction: addiu $10, $8, 100 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: addiu=%d, signals=%b", mips1.ctr.addiu, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h7fff_ffff; $display("      Set regs[8]<-32'h7fff_ffff(%h)", mips1.gpr.regs[8]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h8000_0063);
        addiu_reg10: assert(mips1.gpr.regs[10] === 32'h8000_0063);
        $display("      Check regs[`REG_ADDR_FLAG]=%h == %h", mips1.gpr.regs[`REG_ADDR_FLAG], 32'b0);
        addiu_reg_flag: assert(mips1.gpr.regs[`REG_ADDR_FLAG] === 32'b0);
        
        // SLT Test
        $display("    SLT Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h0109502a; #10 $display("      Load instruction: slt $10, $8, $9 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: slt=%d, signals=%b", mips1.ctr.slt, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h1234_5678; $display("      Set regs[8]<-32'h1234_5678(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 32'h7654_3210; $display("      Set regs[9]<-32'h7654_3210(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'b1);
        slt_reg10: assert(mips1.gpr.regs[10] === 32'b1);

        // JAL Test
        $display("    JAL Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h0c000c08; #10 $display("      Load instruction: jal j_test(im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: jal=%d, signals=%b", mips1.ctr.jal, mips1.ctr.signals);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, 32'h0000_3020);
        jal_pc: assert(mips1.PC === 32'h0000_3020);
        $display("      Check regs[`REG_ADDR_RET]=%h == %h", mips1.gpr.regs[`REG_ADDR_RET], `CODE_SEG_PC+4);
        addiu_reg_ret: assert(mips1.gpr.regs[`REG_ADDR_RET] === `CODE_SEG_PC+4);

        // JR Test
        $display("    JR Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h01000008; #10 $display("      Load instruction: jr $8 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: jr=%d, signals=%b", mips1.ctr.jr, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h1234_5678; $display("      Set regs[8]<-32'h1234_5678(%h)", mips1.gpr.regs[8]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, 32'h1234_5678);
        jr_pc: assert(mips1.PC === 32'h1234_5678);

        // ERET Test
        $display("    ERET Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h42000018; #10 $display("      Load instruction: eret (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: eret=%d, signals=%b", mips1.ctr.eret, mips1.ctr.signals);
        mips1.cp0.EPC = 30'h1234_5678; $display("      Set cp0.EPC<-30'h1234_5678(%h)", mips1.cp0.EPC);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, {30'h1234_5678, 2'b0});
        epc_pc: assert(mips1.PC === {30'h1234_5678, 2'b0});

        // MFC0 Test
        $display("    MFC0 Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h400a1800; #10 $display("      Load instruction: mfc0 $10, $3 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: mfc0=%d, signals=%b", mips1.ctr.mfc0, mips1.ctr.signals);
        mips1.cp0.RegPRID = `PRID; $display("      Set cp0.RegPRID<-`PRID(%h)", mips1.cp0.RegPRID);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], `PRID);
        mfc0_reg10: assert(mips1.gpr.regs[10] === `PRID);

        // MTC0 Test
        $display("    MTC0 Test:"); reset = 1; clk = 0; t = 1;
        instr = 32'h40880000; #10 $display("      Load instruction: mtc0 $8, $0 (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: mfc0=%d, signals=%b", mips1.ctr.mfc0, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'hfedc_1234; $display("      Set regs[8]<-32'hfedc_1234(%h)", mips1.gpr.regs[8]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check cp0.SR=%h == %h", mips1.cp0.RegSR, 32'hfedc_1234);
        mfc0_sr: assert(mips1.cp0.RegSR === 32'hfedc_1234);

        // NOP Test(with interrupt)
        $display("    NOP Test(with interrupt):"); reset = 1; clk = 0; t = 1;
        instr = 32'h00000000; #10 $display("      Load instruction: nop (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        mips1.cp0.RegSR = {16'b0, 6'b011100, 8'b0, `EXL_UNLOCK, `INT_EN}; $display("      Set cp0.RegSR<-{16'b0, 6'b011100, 8'b0, `EXL_UNLOCK, `INT_EN}(%h)", mips1.cp0.RegSR);
        HWInt = 6'b001000; $display("      Set HWInt<-6'b001000(%h)", HWInt);
        $display("      Ctr: nop=%d, signals=%b", mips1.ctr.nop, mips1.ctr.signals);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check PC=%h == %h", mips1.PC, `INT_PC);
        nop_int_pc: assert(mips1.PC === `INT_PC);
        $display("      Check cp0.SR=%h == %h", mips1.cp0.RegSR, {16'b0, 6'b011100, 8'b0, `EXL_LOCK, `INT_EN});
        nop_int_sr: assert(mips1.cp0.RegSR === {16'b0, 6'b011100, 8'b0, `EXL_LOCK, `INT_EN});
        $stop;
        // LW Test(from devices)
        $display("    LW Test(from devices):"); reset = 1; clk = 0; t = 1;
        instr = 32'h8d0a0004; #10 $display("      Load instruction: lw $10, 4($8) (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: lw=%d, signals=%b", mips1.ctr.lw, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h7f10; $display("      Set regs[8]<-32'h7f10(%h)", mips1.gpr.regs[8]);
        dev.regs[32'h7f14] = 32'h1234_5678; $display("      Set dev[1][4]<-32'h1234_5678(%h)", dev.regs[32'h7f14]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check regs[10]=%h == %h", mips1.gpr.regs[10], 32'h1234_5678);
        lw_dev_reg10: assert(mips1.gpr.regs[10] === 32'h1234_5678);
        
        // SW Test(to devices)
        $display("    SW Test(to devices):"); reset = 1; clk = 0; t = 1;
        instr = 32'had090008; #10 $display("      Load instruction: sw $9, -8($8) (im[%h]=%h)", mips1.PC, mips1.instruction);
        #10 $display("      Reset finished."); reset = 0;
        $display("      Ctr: sw=%d, signals=%b", mips1.ctr.sw, mips1.ctr.signals);
        mips1.gpr.regs[8] = 32'h7f20; $display("      Set regs[8]<-32'h7f20(%h)", mips1.gpr.regs[8]);
        mips1.gpr.regs[9] = 32'h3456_7890; $display("      Set regs[9]<-32'h3456_7890(%h)", mips1.gpr.regs[9]);
        $display("      --==Execute==--"); #20 while(mips1.ctr.status !== `S1) #10; $display("      --==Execute==--");
        $display("      Check dev[2][8]=%h == %h", dev.regs[32'h7f28], 32'h3456_7890);
        sw_dev_dev28: assert(dev.regs[32'h7f28] === 32'h3456_7890);
        $stop;
        $display(" *Instruction test finished.");
        finish = 1;
    end

    always begin
        #1
        mips1.ifu.im.im[`CODE_SEG_PC] = instr[31:24];
        mips1.ifu.im.im[`CODE_SEG_PC+1] = instr[23:16];
        mips1.ifu.im.im[`CODE_SEG_PC+2] = instr[15:8];
        mips1.ifu.im.im[`CODE_SEG_PC+3] = instr[7:0];
    end

    always begin
        #1 if(t%5===0) clk = ~clk;
    end

    always begin
        #1 if(~finish) t = t+1;
    end

endmodule