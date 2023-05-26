module modular_sub #(
  parameter q = 8380417
)

(
  input logic [23:0] x_i, y_i,
  output logic [23:0] z_o
);

  logic [23:0] d, s;
  logic b;

assign {b,d} = x_i-y_i;
assign s = d+q;

assign z_o = b ? s : d; 

endmodule: modular_sub
