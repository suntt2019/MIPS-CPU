`include "macro.v"

module TC(clk_i, rst_i, add_i, we_i, dat_i, dat_o, irq);
    input clk_i, rst_i, we_i;
    input [`DEV_ADDR_WD:1] add_i;
    input [31:0] dat_i;
    output irq;
    output reg [31:0] dat_o;

    // Read or write registers
    reg [31:0] RegCtrl, RegPreset;
    // Read only registers
    reg [31:0] RegCount;

    // Private
    reg [31:0] LastPreset;
    wire im, en;
    wire [1:0] mode;

    assign im = RegCtrl[3];
    assign mode = RegCtrl[2:1];
    assign en = RegCtrl[0];
    assign irq = im && (mode === `TC_MODE_0) && (RegCount === 0);

    always @(posedge clk_i or posedge rst_i) begin
        if(rst_i) begin
            RegCtrl = {28'b0, `TC_IM_DIS, `TC_MODE_0, `TC_DIS};
            RegPreset = 32'b0;
            LastPreset = RegPreset;
            RegCount = 32'b0;
        end else begin
            // Write
            if(we_i) begin
                case(add_i)
                    `TC_REG_CTRL: begin
                        RegCtrl[3:0] = dat_i[3:0];
                    end
                    `TC_REG_PST: begin
                        RegPreset = dat_i;
                    end
                    `TC_REG_CNT: begin
                        ;
                    end
                endcase
            end
            if(en) begin
                case(mode)
                    `TC_MODE_0: begin
                        if(LastPreset !== RegPreset) begin // Write in a same value?
                            RegCount = RegPreset; // Load preset only when TC_EN?
                        end
                        if(RegCount !== 32'b0 && en) begin
                            RegCount = RegCount - 1;
                        end
                    end
                    `TC_MODE_1: begin
                        if(RegCount === 32'b0) RegCount = RegPreset;
                        if(RegCount !== 32'b0) RegCount = RegCount - 1;
                        // this "if" is used to solve PRESET == 0 case
                    end
                endcase
                LastPreset = RegPreset;
            end
            // Read
            case(add_i)
                `TC_REG_CTRL: begin
                    dat_o = {28'b0, RegCtrl[3:0]};
                end
                `TC_REG_PST: begin
                    dat_o = RegPreset;
                end
                `TC_REG_CNT: begin
                    dat_o = RegCount;
                end
            endcase
        end
    end
endmodule
