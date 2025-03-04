module fibonacci_generator(
    input rst,
    input clk,
    input enable,
    output reg [31:0] fib_out
);

    reg [31:0] fib_prev1;
    reg [31:0] fib_prev2;

    always @(posedge clk or posedge rst) begin 
        if (rst) begin
            fib_prev1 <= 32'b1;
            fib_prev2 <= 32'b0;
            fib_out <= 32'b0;
        end else if (enable) begin
            fib_out <= fib_prev1 + fib_prev2;
            fib_prev2 <= fib_prev1;
            fib_prev1 <= fib_out;
        end
    end

endmodule