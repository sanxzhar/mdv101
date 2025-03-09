module lock (
    input wire                  clk,
    input wire                  reset,
    input wire [3:0]            input_signal,
    output wire                 locked
);

    parameter INITIAL_STATE =   4'b1111;
    parameter STATE1 =          4'b0001;
    parameter STATE2 =          4'b0010;
    parameter STATE3 =          4'b0011;
    parameter STATE4 =          4'b0100;
    parameter STATE5 =          4'b0101;
    parameter ACCEPT_STATE =    4'b0111;

    parameter DIGIT1 =          4'b0011;
    parameter DIGIT2 =          4'b0011;
    parameter DIGIT3 =          4'b0101;
    parameter DIGIT4 =          4'b0010;
    parameter DIGIT5 =          4'b0101;
    parameter DIGIT6 =          4'b0110;

    reg       temp_final_state;
    reg [3:0] current_state;

    assign locked = temp_final_state;

    always @(posedge clk or posedge reset) begin
        if (reset)
            current_state <= INITIAL_STATE;
        else begin
            case(current_state)
                INITIAL_STATE: current_state <= (input_signal == DIGIT1) ? STATE1 : INITIAL_STATE;
                STATE1:        current_state <= (input_signal == DIGIT2) ? STATE2 : INITIAL_STATE;
                STATE2:        current_state <= (input_signal == DIGIT3) ? STATE3 : INITIAL_STATE;
                STATE3:        current_state <= (input_signal == DIGIT4) ? STATE4 : INITIAL_STATE;
                STATE4:        current_state <= (input_signal == DIGIT5) ? STATE5 : INITIAL_STATE;
                STATE5:        current_state <= (input_signal == DIGIT6) ? ACCEPT_STATE : INITIAL_STATE;
                ACCEPT_STATE:  current_state <= ACCEPT_STATE;
                default:       current_state <= INITIAL_STATE;
            endcase
        end
    end

    always @(*) begin
        if (reset)
            temp_final_state = 1'b1;
        else if (current_state == ACCEPT_STATE)
            temp_final_state = 1'b0;
        else
            temp_final_state = 1'b1;
    end

endmodule
