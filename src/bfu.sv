module bfu (
  input logic [23:0] a_i, b_i,
  input logic [23:0] w_i,
  input logic CT_i, //CT=1, GS=0
  output logic [23:0] even_o, odd_o
);

logic [23:0] gs_add, gs_sub, in_add2, in_mul, out_mul;
logic [23:0] out_add2, out_sub2;

modular_add add1_ins (
  .x_i(a_i),
  .y_i(b_i),
  .z_o(gs_add)
);

modular_sub sub1_ins (
  .x_i(a_i),
  .y_i(b_i),
  .z_o(gs_sub)
);

mux_32bit #(.WIDTH(24)) mux_a (
  .data0_i(gs_add),
  .data1_i(a_i),
  .sel_i(CT_i),
  .data_o(in_add2)
);

mux_32bit #(.WIDTH(24)) mux_b (
  .data0_i(gs_sub),
  .data1_i(b_i),
  .sel_i(CT_i),
  .data_o(in_mul)
);

modular_mul mul_ins (
  .x_i(w_i),
  .y_i(in_mul),
  .z_o(out_mul)
);

modular_add add2_ins (
  .x_i(in_add2),
  .y_i(out_mul),
  .z_o(out_add2)
);

modular_sub sub2_ins (
  .x_i(in_add2),
  .y_i(out_mul),
  .z_o(out_sub2)
);

mux_32bit #(.WIDTH(24)) mux_a_2 (
  .data0_i(in_add2),
  .data1_i(out_add2),
  .sel_i(CT_i),
  .data_o(even_o)
);

mux_32bit #(.WIDTH(24)) mux_b_2 (
  .data0_i(out_mul),
  .data1_i(out_sub2),
  .sel_i(CT_i),
  .data_o(odd_o)
);
endmodule: bfu
