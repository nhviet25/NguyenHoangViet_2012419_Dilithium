// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+56,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+56,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+55,"even_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+56,"odd_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+57,"tw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+15,"tw_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+63,"in1_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+64,"in2_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+16,"out1_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+17,"out2_bfu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+18,"ntt_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+19,"ntt_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+65,"intt_out1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+66,"intt_out2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+20,"addr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+21,"addr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+1,"ntt_addr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+2,"ntt_addr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+8,"intt_addr1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+9,"intt_addr2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+58,"tw_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,"tw_addr_ntt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,"tw_addr_intt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBit(c+59,"intt_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+60,"ntt_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+67,"wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("agu_ins ");
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+3,"cost_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"ntt_addrA_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2,"ntt_addrB_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+60,"wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "INC_J", "DECREMENT_LEN", "RESET_J", 
                                "RESET_START", "UPDATE_LEN", 
                                "UPDATE_START", "LOOP_LEN", 
                                "LOOP_START", "LOOP_J", 
                                "STALL", "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011"};
        tracep->declDTypeEnum(1, "agu.State", 12, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+4,"state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+5,"next_state",1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+6,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,"start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+1,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("agu_intt ");
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"ntt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+10,"cost_address",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+8,"ntt_addrA_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+9,"ntt_addrB_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+59,"wren_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+68,"N",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    {
        const char* __VenumItemNames[]
        = {"INIT", "INC_J", "DECREMENT_LEN", "RESET_J", 
                                "RESET_START", "UPDATE_LEN", 
                                "UPDATE_START", "LOOP_LEN", 
                                "LOOP_START", "LOOP_J", 
                                "STALL", "FINISH"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011"};
        tracep->declDTypeEnum(2, "agu_intt.State", 12, 4, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+11,"state",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+12,"next_state",2, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+13,"len",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+14,"start",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 8,0);
    tracep->declBus(c+8,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+10,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("bfu_ins ");
    tracep->declBus(c+18,"a_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"b_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+57,"w_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"CT_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"even_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+17,"odd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+22,"gs_add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+23,"gs_sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+24,"in_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+61,"in_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+25,"out_mul",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+26,"out_add2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+27,"out_sub2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->pushNamePrefix("add1_ins ");
    tracep->declBus(c+69,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+18,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+22,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+28,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+29,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+30,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+31,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("add2_ins ");
    tracep->declBus(c+69,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+25,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+26,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+32,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+33,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+34,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+35,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mul_ins ");
    tracep->declBus(c+69,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+57,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+61,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+25,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declQuad(c+36,"z",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 47,0);
    tracep->declArray(c+38,"t",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 71,0);
    tracep->declBus(c+41,"t1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 25,0);
    tracep->declQuad(c+42,"t2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 49,0);
    tracep->declBus(c+44,"t3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+45,"sub_tmp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a ");
    tracep->declBus(c+70,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+22,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+18,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+24,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_a_2 ");
    tracep->declBus(c+70,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+26,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b ");
    tracep->declBus(c+70,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+23,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+61,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("mux_b_2 ");
    tracep->declBus(c+70,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+25,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+27,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+17,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub1_ins ");
    tracep->declBus(c+69,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+18,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+23,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+46,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+47,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+48,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sub2_ins ");
    tracep->declBus(c+69,"q",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+24,"x_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+25,"y_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+27,"z_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+49,"d",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBus(c+50,"s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 23,0);
    tracep->declBit(c+51,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("bram_NTT ");
    tracep->declBus(c+16,"data_wr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+17,"data_wr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+20,"addr1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+21,"addr2_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+62,"wren_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+18,"data1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+19,"data2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_addr1 ");
    tracep->declBus(c+71,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+8,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+1,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+20,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_addr2 ");
    tracep->declBus(c+71,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+9,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+2,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+21,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_tw ");
    tracep->declBus(c+70,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+52,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+15,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+57,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sel_tw_addr ");
    tracep->declBus(c+71,"WIDTH",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+10,"data0_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+3,"data1_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+54,"sel_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+58,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("twiddle_fac ");
    tracep->declBus(c+58,"addr_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+15,"data_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__0;
    VlWide<3>/*95:0*/ __Vtemp_hc2345b77__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__1;
    VlWide<3>/*95:0*/ __Vtemp_hb7aa02b9__0;
    VlWide<3>/*95:0*/ __Vtemp_h03d8e164__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__2;
    VlWide<3>/*95:0*/ __Vtemp_h3f5c2142__0;
    VlWide<3>/*95:0*/ __Vtemp_h56b21dcd__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__3;
    VlWide<3>/*95:0*/ __Vtemp_h9ffe6e96__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a7049e9__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__4;
    VlWide<3>/*95:0*/ __Vtemp_h52c74e9c__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__5;
    VlWide<3>/*95:0*/ __Vtemp_hb627aba7__0;
    VlWide<3>/*95:0*/ __Vtemp_h5a4e905d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__6;
    VlWide<3>/*95:0*/ __Vtemp_hf8f3af10__0;
    VlWide<3>/*95:0*/ __Vtemp_hd107d3e6__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__7;
    VlWide<3>/*95:0*/ __Vtemp_h7f87e8f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__8;
    VlWide<3>/*95:0*/ __Vtemp_h391ea556__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__9;
    VlWide<3>/*95:0*/ __Vtemp_hf4f495ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h063b52f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__10;
    VlWide<3>/*95:0*/ __Vtemp_hf350d2bc__0;
    VlWide<3>/*95:0*/ __Vtemp_he463dc28__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__11;
    VlWide<3>/*95:0*/ __Vtemp_h9f10d34e__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__12;
    VlWide<3>/*95:0*/ __Vtemp_h9364e799__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__13;
    VlWide<3>/*95:0*/ __Vtemp_hb21e83f5__0;
    VlWide<3>/*95:0*/ __Vtemp_hba35f3b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__14;
    VlWide<3>/*95:0*/ __Vtemp_h42bf6306__0;
    VlWide<3>/*95:0*/ __Vtemp_hb1a6d89d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__15;
    VlWide<3>/*95:0*/ __Vtemp_h5df8ea9a__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__16;
    VlWide<3>/*95:0*/ __Vtemp_h74c44c33__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__17;
    VlWide<3>/*95:0*/ __Vtemp_hfe763c47__0;
    VlWide<3>/*95:0*/ __Vtemp_hcce62988__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__18;
    VlWide<3>/*95:0*/ __Vtemp_h6aec7fe6__0;
    VlWide<3>/*95:0*/ __Vtemp_h7ebee027__0;
    VlWide<3>/*95:0*/ __Vtemp_h4e75c9e9__19;
    VlWide<3>/*95:0*/ __Vtemp_hc96b973b__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j),8);
    bufp->fullCData(oldp+2,((0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j) 
                                      + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)))),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__k),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__next_state),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len),8);
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start),9);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j),8);
    bufp->fullCData(oldp+9,((0xffU & ((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j) 
                                      + (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)))),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__k),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__next_state),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len),8);
    bufp->fullSData(oldp+14,(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start),9);
    bufp->fullIData(oldp+15,(vlSelf->top__DOT__dut__DOT__tw_tmp),24);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__dut__DOT__out1_bfu),24);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__dut__DOT__out2_bfu),24);
    bufp->fullIData(oldp+18,(vlSelf->top__DOT__dut__DOT__ntt_out1),24);
    bufp->fullIData(oldp+19,(vlSelf->top__DOT__dut__DOT__ntt_out2),24);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__dut__DOT__addr1),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__dut__DOT__addr2),8);
    bufp->fullIData(oldp+22,((0xffffffU & ((1U & ((1U 
                                                   & ((vlSelf->top__DOT__dut__DOT__ntt_out1 
                                                       + vlSelf->top__DOT__dut__DOT__ntt_out2) 
                                                      >> 0x18U)) 
                                                  | (~ 
                                                     (1U 
                                                      & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                                          - (IData)(0x7fe001U)) 
                                                         >> 0x18U)))))
                                            ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                               - (IData)(0x7fe001U))
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s))),24);
    bufp->fullIData(oldp+23,((0xffffffU & ((0x1000000U 
                                            & (vlSelf->top__DOT__dut__DOT__ntt_out1 
                                               - vlSelf->top__DOT__dut__DOT__ntt_out2))
                                            ? ((IData)(0x7fe001U) 
                                               + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d))),24);
    bufp->fullIData(oldp+24,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2),24);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul),24);
    bufp->fullIData(oldp+26,((0xffffffU & ((1U & ((1U 
                                                   & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                       + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                                      >> 0x18U)) 
                                                  | (~ 
                                                     (1U 
                                                      & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                          - (IData)(0x7fe001U)) 
                                                         >> 0x18U)))))
                                            ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                               - (IData)(0x7fe001U))
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s))),24);
    bufp->fullIData(oldp+27,((0xffffffU & ((0x1000000U 
                                            & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                               - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul))
                                            ? ((IData)(0x7fe001U) 
                                               + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d)
                                            : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d))),24);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s),24);
    bufp->fullIData(oldp+29,((0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                           - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+30,((1U & ((vlSelf->top__DOT__dut__DOT__ntt_out1 
                                   + vlSelf->top__DOT__dut__DOT__ntt_out2) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+31,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                   - (IData)(0x7fe001U)) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s),24);
    bufp->fullIData(oldp+33,((0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                           - (IData)(0x7fe001U)))),24);
    bufp->fullBit(oldp+34,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                   + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullBit(oldp+35,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                   - (IData)(0x7fe001U)) 
                                  >> 0x18U))));
    bufp->fullQData(oldp+36,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z),48);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__0, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hc2345b77__0, __Vtemp_h4e75c9e9__0, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__1, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb7aa02b9__0, __Vtemp_h4e75c9e9__1, 0xdU);
    VL_ADD_W(3, __Vtemp_h03d8e164__0, __Vtemp_hc2345b77__0, __Vtemp_hb7aa02b9__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__2, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h3f5c2142__0, __Vtemp_h4e75c9e9__2, 3U);
    VL_ADD_W(3, __Vtemp_h56b21dcd__0, __Vtemp_h03d8e164__0, __Vtemp_h3f5c2142__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__3, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h9ffe6e96__0, __Vtemp_h56b21dcd__0, __Vtemp_h4e75c9e9__3);
    __Vtemp_h6a7049e9__0[0U] = __Vtemp_h9ffe6e96__0[0U];
    __Vtemp_h6a7049e9__0[1U] = __Vtemp_h9ffe6e96__0[1U];
    __Vtemp_h6a7049e9__0[2U] = (0xffU & __Vtemp_h9ffe6e96__0[2U]);
    bufp->fullWData(oldp+38,(__Vtemp_h6a7049e9__0),72);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__4, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h52c74e9c__0, __Vtemp_h4e75c9e9__4, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__5, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb627aba7__0, __Vtemp_h4e75c9e9__5, 0xdU);
    VL_ADD_W(3, __Vtemp_h5a4e905d__0, __Vtemp_h52c74e9c__0, __Vtemp_hb627aba7__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__6, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf8f3af10__0, __Vtemp_h4e75c9e9__6, 3U);
    VL_ADD_W(3, __Vtemp_hd107d3e6__0, __Vtemp_h5a4e905d__0, __Vtemp_hf8f3af10__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__7, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h7f87e8f8__0, __Vtemp_hd107d3e6__0, __Vtemp_h4e75c9e9__7);
    bufp->fullIData(oldp+41,((0x3ffffffU & ((0x3fc0000U 
                                             & (__Vtemp_h7f87e8f8__0[2U] 
                                                << 0x12U)) 
                                            | (__Vtemp_h7f87e8f8__0[1U] 
                                               >> 0xeU)))),26);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__8, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h391ea556__0, __Vtemp_h4e75c9e9__8, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__9, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf4f495ff__0, __Vtemp_h4e75c9e9__9, 0xdU);
    VL_ADD_W(3, __Vtemp_h063b52f4__0, __Vtemp_h391ea556__0, __Vtemp_hf4f495ff__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__10, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hf350d2bc__0, __Vtemp_h4e75c9e9__10, 3U);
    VL_ADD_W(3, __Vtemp_he463dc28__0, __Vtemp_h063b52f4__0, __Vtemp_hf350d2bc__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__11, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h9f10d34e__0, __Vtemp_he463dc28__0, __Vtemp_h4e75c9e9__11);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__12, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h9364e799__0, __Vtemp_h4e75c9e9__12, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__13, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hb21e83f5__0, __Vtemp_h4e75c9e9__13, 0xdU);
    VL_ADD_W(3, __Vtemp_hba35f3b1__0, __Vtemp_h9364e799__0, __Vtemp_hb21e83f5__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__14, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h42bf6306__0, __Vtemp_h4e75c9e9__14, 3U);
    VL_ADD_W(3, __Vtemp_hb1a6d89d__0, __Vtemp_hba35f3b1__0, __Vtemp_h42bf6306__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__15, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_h5df8ea9a__0, __Vtemp_hb1a6d89d__0, __Vtemp_h4e75c9e9__15);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__16, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h74c44c33__0, __Vtemp_h4e75c9e9__16, 0x17U);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__17, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_hfe763c47__0, __Vtemp_h4e75c9e9__17, 0xdU);
    VL_ADD_W(3, __Vtemp_hcce62988__0, __Vtemp_h74c44c33__0, __Vtemp_hfe763c47__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__18, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SHIFTL_WWI(72,72,32, __Vtemp_h6aec7fe6__0, __Vtemp_h4e75c9e9__18, 3U);
    VL_ADD_W(3, __Vtemp_h7ebee027__0, __Vtemp_hcce62988__0, __Vtemp_h6aec7fe6__0);
    VL_EXTEND_WQ(72,48, __Vtemp_h4e75c9e9__19, vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z);
    VL_SUB_W(3, __Vtemp_hc96b973b__0, __Vtemp_h7ebee027__0, __Vtemp_h4e75c9e9__19);
    bufp->fullQData(oldp+42,((0x3ffffffffffffULL & 
                              ((((QData)((IData)((0x3ffffffU 
                                                  & ((0x3fc0000U 
                                                      & (__Vtemp_h9f10d34e__0[2U] 
                                                         << 0x12U)) 
                                                     | (__Vtemp_h9f10d34e__0[1U] 
                                                        >> 0xeU))))) 
                                 << 0x17U) - ((QData)((IData)(
                                                              (0x3ffffffU 
                                                               & ((0x3fc0000U 
                                                                   & (__Vtemp_h5df8ea9a__0[2U] 
                                                                      << 0x12U)) 
                                                                  | (__Vtemp_h5df8ea9a__0[1U] 
                                                                     >> 0xeU))))) 
                                              << 0xdU)) 
                               + (QData)((IData)((0x3ffffffU 
                                                  & ((0x3fc0000U 
                                                      & (__Vtemp_hc96b973b__0[2U] 
                                                         << 0x12U)) 
                                                     | (__Vtemp_hc96b973b__0[1U] 
                                                        >> 0xeU)))))))),50);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3),25);
    bufp->fullIData(oldp+45,((0x1ffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                            - (IData)(0x7fe001U)))),25);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d),24);
    bufp->fullIData(oldp+47,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d))),24);
    bufp->fullBit(oldp+48,((1U & ((vlSelf->top__DOT__dut__DOT__ntt_out1 
                                   - vlSelf->top__DOT__dut__DOT__ntt_out2) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d),24);
    bufp->fullIData(oldp+50,((0xffffffU & ((IData)(0x7fe001U) 
                                           + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d))),24);
    bufp->fullBit(oldp+51,((1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                   - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                  >> 0x18U))));
    bufp->fullIData(oldp+52,((0xffffffU & ((IData)(1U) 
                                           + (~ vlSelf->top__DOT__dut__DOT__tw_tmp)))),24);
    bufp->fullBit(oldp+53,(vlSelf->clk_i));
    bufp->fullBit(oldp+54,(vlSelf->ntt));
    bufp->fullIData(oldp+55,(vlSelf->even_debug_o),24);
    bufp->fullIData(oldp+56,(vlSelf->odd_debug_o),24);
    bufp->fullIData(oldp+57,((0xffffffU & ((IData)(vlSelf->ntt)
                                            ? vlSelf->top__DOT__dut__DOT__tw_tmp
                                            : ((IData)(1U) 
                                               + (~ vlSelf->top__DOT__dut__DOT__tw_tmp))))),24);
    bufp->fullCData(oldp+58,(((IData)(vlSelf->ntt) ? (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__k)
                               : (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__k))),8);
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__dut__DOT__intt_wren));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__dut__DOT__ntt_wren));
    bufp->fullIData(oldp+61,((0xffffffU & ((IData)(vlSelf->ntt)
                                            ? vlSelf->top__DOT__dut__DOT__ntt_out2
                                            : ((0x1000000U 
                                                & (vlSelf->top__DOT__dut__DOT__ntt_out1 
                                                   - vlSelf->top__DOT__dut__DOT__ntt_out2))
                                                ? ((IData)(0x7fe001U) 
                                                   + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                                : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)))),24);
    bufp->fullBit(oldp+62,(((IData)(vlSelf->top__DOT__dut__DOT__ntt_wren) 
                            | (IData)(vlSelf->top__DOT__dut__DOT__intt_wren))));
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__dut__DOT__in1_bfu),24);
    bufp->fullIData(oldp+64,(vlSelf->top__DOT__dut__DOT__in2_bfu),24);
    bufp->fullIData(oldp+65,(vlSelf->top__DOT__dut__DOT__intt_out1),24);
    bufp->fullIData(oldp+66,(vlSelf->top__DOT__dut__DOT__intt_out2),24);
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__dut__DOT__wren));
    bufp->fullIData(oldp+68,(0x100U),32);
    bufp->fullIData(oldp+69,(0x7fe001U),32);
    bufp->fullIData(oldp+70,(0x18U),32);
    bufp->fullIData(oldp+71,(8U),32);
}
