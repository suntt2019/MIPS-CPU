`timescale 1ns/ 1ns
module test();

reg clk, reset;
wire debug_output;

reg dm_start, im_start, ifu_start, alu_start, ext_start, gpr_start;
wire finish;

mips mips1 (
    .clk(clk),
    .rst(reset),
    .debug_output(debug_output)
);

dm_test dmt(.start(dm_start),.finish(im_start));
im_test imt(.start(im_start),.finish(ifu_start));
ifu_test ifut(.start(ifu_start),.finish(alu_start));
alu_test alut(.start(alu_start),.finish(ext_start));
ext_test extt(.start(ext_start),.finish(gpr_start));
gpr_test gprt(.start(gpr_start),.finish(finish));
// controller_test controllert(.start(controller_start),.finish(finish));

initial begin
    $display("Test Started.");
    dm_start = 1;
    #1 while(~finish) #1;
    $display("Test finished.");
    $stop;
end

endmodule