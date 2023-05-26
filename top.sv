module top(
  input logic clk_i, ntt,
  output logic [23:0] even_debug_o, odd_debug_o
);
ntt_intt dut(.*);
endmodule: top
