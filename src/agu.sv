module agu (
  input logic clk_i,
  input logic ntt,
  output logic [7:0] cost_address, ntt_addrA_o, ntt_addrB_o,
  output logic wren_o
);
/* verilator lint_off WIDTH */
  parameter N = 256;

  // State definition
  typedef enum logic [3:0] {
    INIT,
    INC_J,
    DECREMENT_LEN,
    RESET_J,
    RESET_START,
    UPDATE_LEN,
    UPDATE_START,
    LOOP_LEN,
    LOOP_START,
    LOOP_J,
    STALL,
    FINISH
  } State;

  // Internal signals
  State state, next_state;
  logic [7:0] len;
  logic [8:0] start;
  logic [7:0] j;
  logic [7:0] k;

  // Initialization
  initial begin
    state = INIT;
    len = 128;
    start = 0;
    j = 0;
    k = 1;
    wren_o = 0;
  end

  // Sequential logic
  always_ff @(posedge clk_i or posedge ntt) begin
    if (!ntt) begin
      state <= INIT;
      len <= 128;
      start <= 0;
      j <= 0;
      k <= 1;
    end else begin
      state <= next_state;
      case (state)
        INC_J:
          j <= j + 1;
        RESET_J:
          j <= start;
        UPDATE_START: begin
          start <= j + len + 1;
          k <= k + 1;
        end
        UPDATE_LEN:
          len <= len >> 1;
        RESET_START:
          start <= 0;
        default:;
      endcase
    end
  end

  // Combinational logic
  always_comb begin
    case (state)
      INIT:
        next_state = LOOP_LEN;
      LOOP_LEN:
        next_state = (len > 0) ? RESET_START: FINISH;
      RESET_START: 
        next_state = LOOP_START;
      LOOP_START:
        next_state = (start <= N) ? RESET_J : UPDATE_LEN;
      RESET_J:
        next_state = LOOP_J;
      LOOP_J:
        next_state = (j < start + len - 1) ? INC_J : UPDATE_START;
      INC_J:
        next_state = (j < start + len - 2) ? INC_J : UPDATE_START;
      UPDATE_START:
        next_state = STALL;
      STALL:
        next_state = (start < N) ? RESET_J : UPDATE_LEN;
      UPDATE_LEN:
        next_state = (len > 0) ? RESET_START : FINISH;
      FINISH:
        next_state = FINISH; 
      default:
        next_state = INIT;
    endcase
  end

  // Output
  assign wren_o = (len != 0) && ((state == INC_J) || (state == UPDATE_START) || ((len == 1) && (state == LOOP_J))) ? 1 : 0;
  assign cost_address = k;
  assign ntt_addrA_o = j;
  assign ntt_addrB_o = j + len;
endmodule: agu
