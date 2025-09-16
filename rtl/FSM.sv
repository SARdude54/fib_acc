`timescale 1ps/1ps

module FSM (
    input logic CLK,
    input logic rst_n,
    input logic vld_in,
    input logic rdy_out,
    input logic done_cnt,
    output logic cnt_en,
    output logic vld_out,
    output logic rdy_in
);

typedef enum logic [1:0] { 
    ST_INIT,
    ST_COUNT,
    ST_READ
} state_type;

state_type PS, NS;
    
always_ff @( CLK ) begin
    if (!rst_n) begin
        PS <= ST_INIT;
    end else begin
        PS <= NS;
    end
end

always_comb begin
    NS = PS;
    cnt_en = 0;
    rdy_in = 0;
    vld_out = 0;
    case (PS)
        ST_INIT : begin
            if (!vld_in) begin
                rdy_in = 1;
                cnt_en = 0;
                vld_out = 0;
                NS = ST_INIT;
            end else begin
                rdy_in = 0;
                NS = ST_COUNT;
            end
        end

        ST_COUNT : begin
            if (!done_cnt) begin
                cnt_en = 1;
                vld_out = 0;
                NS = ST_COUNT;
            end else if (done_cnt) begin
                NS = ST_READ;
            end
        end

        ST_READ : begin
            vld_out = 1;
            cnt_en = 0;
            if (rdy_out) begin
                rdy_in = 1;
            end
            NS = ST_INIT;
        end
        default: NS = ST_INIT;
    endcase
end

endmodule