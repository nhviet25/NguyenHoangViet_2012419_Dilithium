module ntt_intt(
  input logic clk_i, ntt,
  output logic [23:0] even_debug_o, odd_debug_o
);
/* verilator lint_off UNUSED */
logic [23:0] tw, tw_tmp, in1_bfu, in2_bfu, out1_bfu, out2_bfu;
logic [23:0] ntt_out1, ntt_out2, intt_out1, intt_out2;
logic [7:0] addr1, addr2;
logic [7:0] ntt_addr1, ntt_addr2, intt_addr1, intt_addr2, tw_addr, tw_addr_ntt, tw_addr_intt;
logic intt_wren, ntt_wren, wren;

agu agu_ins (
  .clk_i(clk_i),
  .ntt(ntt),
  
  .cost_address(tw_addr_ntt),
  .wren_o(ntt_wren),
  .ntt_addrA_o(ntt_addr1),
  .ntt_addrB_o(ntt_addr2)
);

agu_intt agu_intt (
  .clk_i(clk_i),
  .ntt(ntt),
  
  .cost_address(tw_addr_intt),
  .wren_o(intt_wren),
  .ntt_addrA_o(intt_addr1),
  .ntt_addrB_o(intt_addr2)
  
);

mux_32bit #(.WIDTH(8))  sel_addr1 (
  .data0_i(intt_addr1),
  .data1_i(ntt_addr1),
  .sel_i(ntt),
  .data_o(addr1)
);

mux_32bit #(.WIDTH(8)) sel_addr2 (
  .data0_i(intt_addr2),
  .data1_i(ntt_addr2),
  .sel_i(ntt),
  .data_o(addr2)
);

dual_port_RAM bram_NTT (
  .clk_i(clk_i),
  .wren_i(ntt_wren | intt_wren),
  .addr1_i(addr1),
  .data_wr1_i(out1_bfu),
 
  .addr2_i(addr2),
  .data_wr2_i(out2_bfu),
  
  .data1_o(ntt_out1),
  .data2_o(ntt_out2)
);
/*
dual_port_RAM bram_INTT (
  .clk_i(clk_i),
  .wren_i(intt_wren),
  .addr1_i(intt_addr1),
  .data_wr1_i(out1_bfu),
 
  .addr2_i(intt_addr2),
  .data_wr2_i(out2_bfu),
  
  .data1_o(intt_out1),
  .data2_o(intt_out2)
);

mux_32bit sel_in1_bfu (
  .data0_i(ntt_out1),
  .data1_i(intt_out1),
  .sel_i(~ntt),
  .data_o(in1_bfu)
);

mux_32bit sel_in2_bfu (
  .data0_i(ntt_out2),
  .data1_i(intt_out2),
  .sel_i(~ntt),
  .data_o(in2_bfu)
);
*/

mux_32bit #(.WIDTH(24)) sel_tw (
  .data0_i(~ tw_tmp + 1),
  .data1_i(tw_tmp),
  .sel_i(ntt),
  .data_o(tw)
);

bfu bfu_ins (
  .a_i(ntt_out1),
  .b_i(ntt_out2),
  .w_i(tw),
  .CT_i(ntt),

  .even_o(out1_bfu),
  .odd_o(out2_bfu)
);

mux_32bit #(.WIDTH(8)) sel_tw_addr (
  .data0_i(tw_addr_intt),
  .data1_i(tw_addr_ntt),
  .sel_i(ntt),
  .data_o(tw_addr)
);

single_port_ROM twiddle_fac (
  .addr_i(tw_addr),

  .data_o(tw_tmp)
);

assign even_debug_o = out1_bfu;
assign odd_debug_o = out2_bfu;
endmodule: ntt_intt
