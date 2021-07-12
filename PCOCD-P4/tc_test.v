`timescale 1ns/ 1ns
`include "macro.v"

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
        finish = 0; clk = 0;
    end

always @(posedge start) begin
        $display(" *TC test started.");

        reset = 1;
        #10 $display("    Reset test: RegCtrl=%h == %h, RegPreset=%h == %h, RegCount=%h == %h",
         tc1.RegCtrl, {28'b0, `TC_IM_DIS, `TC_MODE_0, `TC_DIS}, tc1.RegPreset, 32'b0, tc1.RegCount, 32'b0);
        if(~(tc1.RegCtrl==={28'b0, `TC_IM_DIS, `TC_MODE_0, `TC_DIS} && tc1.RegPreset===32'b0 && tc1.RegCount===32'b0)) $display("Assertion Error");
        reset = 0;

        reset = 1; #10 $display("    R/W test: reset finished."); reset = 0;
        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = 32'h1234_5678;
        #10 $display("      Write CTRL: CTRL=%h == %h", dat_o, 32'h8); 
        if(~(dat_o === 32'h8)) $display("Assertion Error");
        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h89ab_cdef;
        #10 $display("      Write PRESET: PRESET=%h == %h", dat_o, 32'h89ab_cdef); 
        if(~(dat_o === 32'h89ab_cdef)) $display("Assertion Error");
        we_i = `WR_EN; add_i = `TC_REG_CNT; dat_i = 32'habcd_ef34;
        #10 $display("      Write COUNT: COUNT=%h == %h", dat_o, 32'h0); 
        if(~(dat_o === 32'h0)) $display("Assertion Error");
        we_i = `WR_DIS; add_i = `TC_REG_CTRL; dat_i = 32'hffff_ffff;
        #10 $display("      Read CTRL: CTRL=%h == %h", dat_o, 32'h8); 
        if(~(dat_o === 32'h8)) $display("Assertion Error");
        we_i = `WR_DIS; add_i = `TC_REG_PST; dat_i = 32'hffff_ffff;
        #10 $display("      Read PRESET: PRESET=%h == %h", dat_o, 32'h89ab_cdef); 
        if(~(dat_o === 32'h89ab_cdef)) $display("Assertion Error");
        we_i = `WR_DIS; add_i = `TC_REG_CNT; dat_i = 32'hffff_ffff;
        #10 $display("      Read COUNT: COUNT=%h == %h", dat_o, 32'h0); 
        if(~(dat_o === 32'h0)) $display("Assertion Error");

        // Mode 0
        reset = 1; #10 $display("    Mode 0 test: reset finished."); reset = 0;
        we_i = `WR_DIS; add_i = `TC_REG_PST;
        #10 $display("      Check Preset, PRESET=%h == %h", dat_o, 32'b0); 
        if(~(dat_o === 32'b0)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_EN); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_EN)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_DIS, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_DIS, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_DIS, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_DIS, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h8765_4321;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h8765_4321, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h8765_4321 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'b0, irq, `IRQ_DIS); 
        if(~(dat_o === 32'b0 && irq == `IRQ_DIS)) $display("Assertion Error");
        
        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_EN};
        #10 $display("      Set mode(IM_EN, 0, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_EN}, irq, `IRQ_EN); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_EN} && irq == `IRQ_EN)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h8765_4320, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h8765_4320 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 0, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `TC_DIS}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `TC_DIS} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h3;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h3, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h3 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_0, `IRQ_EN};
        #10 $display("      Set mode(IM_EN, 0, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_0, `IRQ_EN}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_0, `IRQ_EN} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h2, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h2 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h1, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h1 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h0, irq, `IRQ_EN); 
        if(~(dat_o === 32'h0 && irq == `IRQ_EN)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h, irq=%d == %d", dat_o, 32'h0, irq, `IRQ_EN); 
        if(~(dat_o === 32'h0 && irq == `IRQ_EN)) $display("Assertion Error");

        // Mode 1
        reset = 1; #10 $display("    Mode 1 test: reset finished."); reset = 0;
        we_i = `WR_DIS; add_i = `TC_REG_PST;
        #10 $display("      Check Preset, PRESET=%h == %h", dat_o, 32'b0);
        if(~(dat_o === 32'h0)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_EN};
        #10 $display("      Set mode(IM_EN, 1, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_EN}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_EN} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'b0); 
        if(~(dat_o === 32'h0 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'b0); 
        if(~(dat_o === 32'h0 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_DIS};
        #10 $display("      Set mode(IM_EN, 1, DIS), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_DIS}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_DIS} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_PST; dat_i = 32'h3;
        #10 $display("      Set Preset, PRESET=%h == %h, irq=%d == %d",
         dat_o, 32'h3, irq, `IRQ_DIS); 
        if(~(dat_o === 32'h3 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_EN; add_i = `TC_REG_CTRL; dat_i = {`TC_IM_EN, `TC_MODE_1, `TC_EN};
        #10 $display("      Set mode(IM_EN, 1, EN), CTRL=%h == %h, irq=%d == %d",
         dat_o, {`TC_IM_EN, `TC_MODE_1, `TC_EN}, irq, `IRQ_DIS); 
        if(~(dat_o[3:0] === {`TC_IM_EN, `TC_MODE_1, `TC_EN} && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h2); 
        if(~(dat_o === 32'h2 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h1); 
        if(~(dat_o === 32'h1 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h0); 
        if(~(dat_o === 32'h0 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h2); 
        if(~(dat_o === 32'h2 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h1); 
        if(~(dat_o === 32'h1 && irq == `IRQ_DIS)) $display("Assertion Error");

        we_i = `WR_DIS; add_i = `TC_REG_CNT;
        #10 $display("      Check Count, COUNT=%h == %h", dat_o, 32'h0); 
        if(~(dat_o === 32'h0 && irq == `IRQ_DIS)) $display("Assertion Error");

        $display(" *TC test finished.");
        finish = 1;
    end

    always begin
        #1 if(~finish) #4 clk = ~clk;
    end

endmodule