module trafficLightFSM (
    input               clk,
    input               reset,
    input wire [31:0]   counter,
    output reg [2:0]    light
);

    parameter RED = 2'b00;
    parameter GREEN = 2'b01;
    parameter YELLOW = 2'b10;

    reg [1:0] current_state, next_state;
    reg [31:0] timer;

    // each time when clock rised
    // we need to add 1 to timer
    // if timer is more than counter 
    // then timer reset and state updated

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_state <= RED;
            timer <= 32'b0;
        end else begin
            if(timer == counter) begin
                current_state <= next_state;
                timer <= 32'b0;
            end else begin
                timer <= timer + 1;
            end 
        end
    end

    always @(*) begin
        case (current_state)
            RED: begin
                next_state = GREEN;
            end
            GREEN: begin
                next_state = YELLOW;
            end
            YELLOW: begin
                next_state = RED;
            end
            default: begin
                next_state = RED;
            end
        endcase
    end

    // define current_state
    always @(*) begin
        case (current_state)
            RED: begin
                light = 3'b001;
            end
            GREEN: begin
                light = 3'b010;
            end
            YELLOW: begin
                light = 3'b100;
            end
            default: begin
                light = 3'b001;
            end
        endcase
    end

endmodule
