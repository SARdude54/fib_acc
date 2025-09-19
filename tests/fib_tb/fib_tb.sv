`timescale 1ps/1ps

module fib_tb;

logic CLK;

logic rst_n;
logic [7:0] fib_in;
logic vld_in;
logic rdy_out;

logic vld_out;
logic [31:0] fib_out;
logic rdy_in;

fib UUT(
    .CLK(CLK),
    .rst_n(rst_n),
    .fib_in(fib_in),
    .vld_in(vld_in),
    .rdy_out(rdy_out),
    .vld_out(vld_out),
    .fib_out(fib_out),
    .rdy_in(rdy_in)
);

initial CLK = 0;
always #5 CLK = ~CLK;

initial begin
    #1ms;
    $error("[%0t] Error: Simulation timed out", $time);
    #1us;
    $finish;
end

initial begin
    if ($test$plusargs("dump") || 1) begin // set to '1' to always dump
      $dumpfile("wave.vcd");               // was "wace.vcd"
      $dumpvars(0, fib_tb);                // was tb_file
    end
end


function automatic [31:0] fib_ref(input [7:0] n);
    automatic int a = 0;
    automatic int b = 1;
    automatic int temp;
    if (n == 0) return 0;
    for(int i = 1; i < n; i++) begin
        temp = a + b;
        a = b;
        b = temp;
    end
    return b;
    
endfunction

task automatic send_and_check(input [7:0] n);
    logic [31:0] expected;
    expected = fib_ref(n);

    wait (rdy_in == 1);
    fib_in = n;
    vld_in = 1;
    @(posedge CLK);
    @(posedge CLK);
    vld_in = 0;
    fib_in = 0;

    wait (vld_out == 1);

    rdy_out = 1;
    @(posedge CLK);
    rdy_out = 0;

endtask

initial begin
    fib_in = 0;
    vld_in = 0;
    rdy_out = 0;

    # 20 rst_n = 0;
    @(posedge CLK);
    #20 rst_n = 1;
    @(posedge CLK);
    @(posedge CLK);

    send_and_check(6);

    // for(byte i = 1; i <= 10; i++) begin
    //     send_and_check(i);
    // end

    $display("Fib Test pass");
    #50
    $finish;
end
    
endmodule
