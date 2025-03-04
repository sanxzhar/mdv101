module and_gate(
    input wire in1,
    input wire in0,
    output reg out
);

always @(*) begin
    out = in1 & in0;
end

endmodule