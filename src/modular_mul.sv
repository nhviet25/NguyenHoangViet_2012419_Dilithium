module modular_mul #(
  parameter q = 8380417
)
(
  input logic [23:0] x_i, y_i,
  output logic [23:0] z_o
);
/* verilator lint_off WIDTH */

logic [47:0] z;
logic [71:0] t;
logic [25:0] t1;
logic [49:0] t2;
logic [24:0] t3;
logic [24:0] sub_tmp;

assign z = x_i*y_i;
assign t = (z<<23)+(z<<13)+(z<<3)-z;
assign t1 = t>>46;
assign t2 = (t1<<23)-(t1<<13)+t1;
assign t3 = z-t2;
assign sub_tmp = t3 - q;

assign z_o = sub_tmp[24] ? t3 : sub_tmp[23:0];

endmodule: modular_mul

