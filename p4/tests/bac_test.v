`timescale 1ns/ 1ns
`include "unit_test_macro.v"

module bac_test(start, finish);
    input start;
    output reg finish;

    // tested module I/O
    reg BACOp;
    reg [31:0] Ain, Din1, Din2;
    wire [31:0] Aout, Dout1, Dout2;

    // local variables
    integer i;

    // tested module
    BAC bac(
        .BACOp(BACOp),
        .Ain(Ain),
        .Din1(Din1),
        .Din2(Din2),
        .Aout(Aout),
        .Dout1(Dout1),
        .Dout2(Dout2)
    );

    initial begin
        finish = 0;
    end

always @(posedge start) begin
        /*$display(" *BAC test started.");*/
        
        BACOp = `BAC_OP_WORD; Ain = 32'h1234_5678; Din1 = 32'h1212_3434; Din2 = 32'h7878_7878;
        #1 $display("    Word test: Ain=%h, Aout=%h == %h, Din1=%h, Dout1=%h == %h, Din2=%h, Dout2=%h == %h",
         Ain, Aout, Ain, Din1, Dout1, Din1, Din2, Dout2, Din2);
        if(~(Aout === Ain && Dout1 === Din1 && Dout2 === Din2)) /*$display("Assertion Error");*/
        
        BACOp = `BAC_OP_BYTE; Ain = 'h41; Din1 = 32'h1234_5678; Din2 = 32'h7890_1234;
        #1 $display("    Byte test: Ain=%h, Aout=%h == %h, Din1=%h, Dout1=%h == %h, Din2=%h, Dout2=%h == %h",
         Ain, Aout, 'h40, Din1, Dout1, 'h7890_7834, Din2, Dout2, 'h12);
        if(~(Aout === 'h40 && Dout1 === 'h7890_7834 && Dout2 === 'h12)) /*$display("Assertion Error");*/

        /*$display(" *BAC test finished.");*/
        finish = 1;
    end

endmodule