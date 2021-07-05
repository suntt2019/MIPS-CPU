module assert(clk, ex, ac);
    parameter WIDTH = 1;
    parameter NAME = "Unamed assertion";
    input clk;
    input [WIDTH:1] ex, ac;

    always @(posedge clk) begin
        if(ex !== ac) begin
            $display("Assertion %s failed: expected=%d, actual=%d", NAME, ex, ac);
            $finish;
        end
    end
endmodule
