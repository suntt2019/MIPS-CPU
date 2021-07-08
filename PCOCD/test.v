`timescale 1ns/ 1ns
module test();

reg dm_start, im_start, ifu_start, alu_start, ext_start, gpr_start, instruction_start, p1_start;
reg bac_start, p2_start, bltzal_start;
reg tc_start;
wire finish;

// Project 1
dm_test dmt(.start(dm_start), .finish(im_start));
im_test imt(.start(im_start), .finish(ifu_start));
ifu_test ifut(.start(ifu_start), .finish(alu_start));
alu_test alut(.start(alu_start), .finish(ext_start));
ext_test extt(.start(ext_start), .finish(gpr_start));
gpr_test gprt(.start(gpr_start), .finish(instruction_start));
instruction_test instructiont(.start(instruction_start), .finish(p1_start));
p1_test p1t(.start(p1_start), .finish(bac_start));

// Project 2
bac_test bact(.start(bac_start), .finish(p2_start));
p2_test p2t(.start(p2_start), .finish(bltzal_start));
bltzal_test bltzalt(.start(bltzal_start), .finish(tc_start));

// Project 3
tc_test tct(.start(tc_start), .finish(finish));

initial begin
    $display("Test Started.");
    dm_start = 1;
    #1 while(~finish) #1;
    $display("Test finished.");
    $stop;
end

endmodule