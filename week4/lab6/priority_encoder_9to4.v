module priority_encoder_9to4(
    input wire in8,
    input wire in7,
    input wire in6,
    input wire in5,
    input wire in4,
    input wire in3,
    input wire in2,
    input wire in1,
    input wire in0,
    output reg [3:0] out
);

always @(*) begin
    if(in8)
        out = 4'b1001;
    else if(in7)
        out = 4'b1000;
    else if(in6)
        out = 4'b0111;
    else if(in5)
        out = 4'b0110;
    else if(in4)
        out = 4'b0100;
    else if(in3)
        out = 4'b0011;
    else if(in2)
        out = 4'b0010;
    else if(in1)
        out = 4'b0001;
    else if(in0)
        out = 4'b0000;
    else
        out = 4'b0000;
end 

endmodule
    


