#define MAX_SIM 5000

void set_random(Vtop *dut, vluint64_t sim_unit) {
  dut->ntt = (sim_unit < 2076);
}
