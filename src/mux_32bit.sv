module mux_32bit #(
  parameter WIDTH = 24
)
(
  input logic [WIDTH-1:0] data0_i, data1_i,
  input logic sel_i,
  output logic [WIDTH-1:0] data_o
);

assign data_o = sel_i ? data1_i : data0_i;

endmodule: mux_32bit
