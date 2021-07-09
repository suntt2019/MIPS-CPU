`timescale 1ns/ 1ns
`include "../macro.v"

module tc_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg clk, reset, we_i;
    reg [`DEV_ADDR_WD:1] add_i;
    reg [31:0] dat_i;
    wire irq;
    wire [31:0] dat_o;

    // local variables
    integer i;

    // tested module
    TC tc1(
        .clk_i(clk),
        .rst_i(reset),
        .we_i(we_i),
        .add_i(add_i),
        .dat_i(dat_i),
        .irq(irq),
        .dat_o(dat_o)
    );

    initial begin
        finish = 0; #1 while(~start) #1;
        $display(" *TC test started.");
        clk = 0;

        reset = 1;
        #10 $display("    Reset test: RegCtrl=%h == %h, RegPreset=%h == %h, RegCount=%h == %h",
         tc1.RegCtrl, {28'b0, `TC_IM_DIS, `TC_MODE_0, `TC_DIS}, tc1.RegPreset, 32'b0, tc1.RegCount, 32'b0);
        tc_reset: assert(tc1.RegCtrl==={28'b0, `TC_IM_DIS, `TC_MODE_0, `TC_DIS} && tc1.RegPreset===32'b0 && tc1.RegCount===32'b0)
        reset = 0;

        reset = 1; #10 $display("    R/W test: reset finished."); reset = 0;
        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = 32'h1234_5678;
        #10 $display("      Write CTRL: CTRL=%h == %h", dat_o, 32'h8); 
        tc_w_ctrl: assert(dat_o === 32'h8);
        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h89ab_cdef;
        #10 $display("      Write PRESET: PRESET=%h == %h", dat_o, 32'h89ab_cdef); 
        tc_w_pst: assert(dat_o === 32'h89ab_cdef);
        we_i = `WR_EN; add_i = `TC_REG_CNT; dat_i = 32'habcd_ef34;
        #10 $display("      Write COUNT: COUNT=%h == %h", dat_o, 32'h0); 
        tc_w_cnt: assert(dat_o === 32'h0);
        we_i = `WR_DIS; add_i = `TC_REG_CTRL; dat_i = 32'hffff_ffff;
        #10 $display("      Read CTRL: CTRL=%h == %h", dat_o, 32'h8); 
        tc_r_ctrl: assert(dat_o === 32'h8);
        we_i = `WR_DIS; add_i = `TC_REG_PST; dat_i = 32'hffff_ffff;
        #10 $display("      Read PRESET: PRESET=%h == %h", dat_o, 32'h89ab_cdef); 
        tc_r_pst: assert(dat_o === 32'h89ab_cdef);
        we_i = `WR_DIS; add_i = `TC_REG_CNT; dat_i = 32'hffff_ffff;
        #10 $display("      Read COUNT: COUNT=%h == %h", dat_o, 32'h0); 
        tc_r_cnt: assert(dat_o === 32'h0);

        // Mode 0
        reset = 1; #10 $display("    Mode 0 test: reset finished."); reset = 0;
        we_i = `WR_DIS; add_i = `TC_REG_PST;
        #10 $display("      Check Preset, PRESET=%h == %h", dat_o, 32'b0); 
        tc_cp_0: assert(dat_o === 32'b0);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_EN); 
        tc_en_0_dis_cz: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_EN);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_DIS, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_DIS, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_DIS, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        tc_dis_0_dis_cz: assert(dat_o[3:0] === {`TC_IM_DIS, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h8765_4321;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h8765_4321, irq, `IRQ_DIS); 
        tc_preset_87654321: assert(dat_o === 32'h8765_4321 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'b0, irq, `IRQ_DIS); 
        tc_cc_6: assert(dat_o === 32'b0 && irq == `IRQ_DIS);
        
        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_EN};
        #10 $display("      Set mode(IM_EN, 0, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_EN}, irq, `IRQ_EN); 
        tc_en_0_en_cz0: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_EN} && irq == `IRQ_EN);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h8765_4320, irq, `IRQ_DIS); 
        tc_cc_0: assert(dat_o === 32'h8765_4320 && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        tc_en_0_dis_cnz: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        tc_en_0_en_cz1: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h3;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h3, irq, `IRQ_DIS); 
        tc_preset_3: assert(dat_o === 32'h3 && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `IRQ_EN};
        #10 $display("      Set mode(IM_EN, 0, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `IRQ_EN}, irq, `IRQ_DIS); 
        tc_en_0_en_cz2: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `IRQ_EN} && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h2, irq, `IRQ_DIS); 
        tc_cc_3: assert(dat_o === 32'h2 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h1, irq, `IRQ_DIS); 
        tc_cc_4: assert(dat_o === 32'h1 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h0, irq, `IRQ_EN); 
        tc_cc_5: assert(dat_o === 32'h0 && irq == `IRQ_EN);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h0, irq, `IRQ_EN); 
        tc_cc_7: assert(dat_o === 32'h0 && irq == `IRQ_EN);

        // Mode 1
        reset = 1; #10 $display("    Mode 1 test: reset finished."); reset = 0;
        we_i = `WR_DIS; add_i = `TC_REG_PST;
        #10 $display("      Check Preset, PRESET=%h == %h", dat_o, 32'b0);
        tc_cp_1: assert(dat_o === 32'h0);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_EN};
        #10 $display("      Set mode(IM_EN, 1, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_EN}, irq, `IRQ_DIS); 
        tc_en_1_en_1: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_EN} && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'b0); 
        tc_cc_8: assert(dat_o === 32'h0 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'b0); 
        tc_cc_9: assert(dat_o === 32'h0 && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 1, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_DIS}, irq, `IRQ_DIS); 
        tc_en_1_dis: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_DIS} && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h3;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h3, irq, `IRQ_DIS); 
        tc_preset_3_2: assert(dat_o === 32'h3 && irq == `IRQ_DIS);

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_EN};
        #10 $display("      Set mode(IM_EN, 1, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_EN}, irq, `IRQ_DIS); 
        tc_en_1_en_2: assert(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_EN} && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h2); 
        tc_cc_10: assert(dat_o === 32'h2 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h1); 
        tc_cc_11: assert(dat_o === 32'h1 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h0); 
        tc_cc_12: assert(dat_o === 32'h0 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h2); 
        tc_cc_13: assert(dat_o === 32'h2 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h1); 
        tc_cc_14: assert(dat_o === 32'h1 && irq == `IRQ_DIS);

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h0); 
        tc_cc_15: assert(dat_o === 32'h0 && irq == `IRQ_DIS);

        $display(" *TC test finished.");
        finish = 1;
    end

    always begin
        #5 clk = ~clk;
    end

endmodule