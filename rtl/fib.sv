`timescale 1ps/1ps

module fib (
    input logic CLK,
    input logic rst_n,
    input logic fib_in,
    input logic vld_in,
    input logic rdy_out,
    output logic rdy_in,
    output logic vld_out,
    output logic fib_out
);

wire cnt_en;

FSM FSM(.CLK(CLK), 
        .rst_n(rst_n), 
        .vld_out(vld_out), 
        .rdy_in(rdy_in), 
        .cnt_en(cnt_en),
        .vld_in(vld_in),
        .rdy_out(rdy_out));

always_ff @( CLK ) begin
    if (rst_n == 0) begin
        
    end
end

    
endmodule