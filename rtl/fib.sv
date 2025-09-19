`timescale 1ps/1ps

module fib (
    input logic CLK,
    input logic rst_n,
    input logic [7:0] fib_in,
    input logic vld_in,
    input logic rdy_out,
    output logic rdy_in,
    output logic vld_out,
    output logic [31:0] fib_out
);

wire done_cnt;
wire cnt_en;
reg [7:0] cnt;

FSM FSM(.CLK(CLK), 
        .rst_n(rst_n), 
        .vld_out(vld_out), 
        .rdy_in(rdy_in), 
        .done_cnt(done_cnt),
        .cnt_en(cnt_en),
        .vld_in(vld_in),
        .rdy_out(rdy_out));

// to keep track of fib_in
always_ff @( posedge CLK ) begin : counter
    if (!rst_n) begin
        cnt <= 0;
    end else if (cnt_en && rst_n) begin
        cnt <= cnt + 1;
    end
end

assign done_cnt = (fib_in == cnt) && (fib_in != 8'b0);

reg [7:0] A;
always_ff @(posedge CLK) begin

    if (!rst_n) begin
        A <= 8'b0;
    end else if (cnt == 8'b00000001) begin
        A <= 8'b0;
    end else begin
        A <= B;
    end
end

reg [7:0] B;
always_ff @( posedge CLK ) begin
    if (!rst_n) begin
        B <= 8'b0;
    end else if (cnt == 8'b0000001) begin
        B <= 8'b00000001;
    end else begin
        B <= C;
    end
end

wire [7:0] C;
assign C = A + B;

assign fib_out = {24'b0, C};
    
endmodule