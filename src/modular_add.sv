module modular_add #(
  parameter q = 8380417
)

(
  input logic [23:0] x_i, y_i,
  output logic [23:0] z_o
);

logic [23:0] s, d;
logic c, b;

assign {c, s} = x_i+y_i;
assign {b, d} = s-q;
assign z_o = (c || (b==0)) ? d : s;

endmodule: modular_add
