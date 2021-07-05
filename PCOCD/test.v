`timescale 1ns/ 1ns
module simple_test();

reg clk, reset;
wire debug_output;

mips mips1 (
    .clk(clk),
    .rst(reset),
    .debug_output(debug_output)
);


initial begin
    $display("Start");
    clk = 0;
end

always begin
    // @eachvec;
    #10
    clk = ~clk;
    $display("clk=%d",clk);
end

endmodule