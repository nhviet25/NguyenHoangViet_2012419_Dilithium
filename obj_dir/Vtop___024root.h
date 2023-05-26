// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk_i,0,0);
    VL_IN8(ntt,0,0);
    CData/*7:0*/ top__DOT__dut__DOT__ntt_addr2;
    CData/*7:0*/ top__DOT__dut__DOT__intt_addr1;
    CData/*7:0*/ top__DOT__dut__DOT__intt_addr2;
    CData/*0:0*/ top__DOT__dut__DOT__intt_wren;
    CData/*0:0*/ top__DOT__dut__DOT__ntt_wren;
    CData/*0:0*/ top__DOT__dut__DOT__wren;
    CData/*3:0*/ top__DOT__dut__DOT__agu_ins__DOT__state;
    CData/*3:0*/ top__DOT__dut__DOT__agu_ins__DOT__next_state;
    CData/*7:0*/ top__DOT__dut__DOT__agu_ins__DOT__len;
    CData/*7:0*/ top__DOT__dut__DOT__agu_ins__DOT__j;
    CData/*7:0*/ top__DOT__dut__DOT__agu_ins__DOT__k;
    CData/*7:0*/ __Vdly__top__DOT__dut__DOT__agu_ins__DOT__j;
    CData/*0:0*/ __Vclklast__TOP__clk_i;
    CData/*0:0*/ __Vclklast__TOP__ntt;
    SData/*8:0*/ top__DOT__dut__DOT__agu_ins__DOT__start;
    VL_OUT(even_debug_o,23,0);
    VL_OUT(odd_debug_o,23,0);
    IData/*23:0*/ top__DOT__dut__DOT__in1_bfu;
    IData/*23:0*/ top__DOT__dut__DOT__in2_bfu;
    IData/*23:0*/ top__DOT__dut__DOT__out1_bfu;
    IData/*23:0*/ top__DOT__dut__DOT__out2_bfu;
    IData/*23:0*/ top__DOT__dut__DOT__ntt_out1;
    IData/*23:0*/ top__DOT__dut__DOT__ntt_out2;
    IData/*23:0*/ top__DOT__dut__DOT__intt_out1;
    IData/*23:0*/ top__DOT__dut__DOT__intt_out2;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__in_add2;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__out_mul;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d;
    IData/*24:0*/ top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s;
    IData/*23:0*/ top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d;
    QData/*47:0*/ top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z;
    VlUnpacked<IData/*23:0*/, 256> top__DOT__dut__DOT__bram_NTT__DOT__ram;
    VlUnpacked<IData/*23:0*/, 256> top__DOT__dut__DOT__twiddle_fac__DOT__rom;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
