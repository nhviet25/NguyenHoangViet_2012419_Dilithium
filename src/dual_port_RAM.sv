module dual_port_RAM (
  input logic [23:0] data_wr1_i, data_wr2_i,
  input logic [7:0] addr1_i,
  input logic [7:0] addr2_i,
  input logic wren_i, 
  input logic clk_i,
  
  output logic [23:0] data1_o, data2_o
);

logic [23:0] ram [2**8-1:0];

initial begin
  $readmemh("test.txt", ram);
end

always_ff @(posedge clk_i) begin
  if (wren_i) begin
    ram[addr1_i] <= data_wr1_i;
    ram[addr2_i] <= data_wr2_i;
  end
end

assign  data1_o = ram[addr1_i];
assign  data2_o = ram[addr2_i];

endmodule: dual_port_RAM
