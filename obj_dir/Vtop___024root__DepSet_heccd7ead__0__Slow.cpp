// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___initial__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h83ebf4d4__0;
    // Body
    __Vtemp_h83ebf4d4__0[0U] = 0x2e747874U;
    __Vtemp_h83ebf4d4__0[1U] = 0x64646c65U;
    __Vtemp_h83ebf4d4__0[2U] = 0x747769U;
    VL_READMEM_N(true, 24, 256, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h83ebf4d4__0)
                 ,  &(vlSelf->top__DOT__dut__DOT__twiddle_fac__DOT__rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 24, 256, 0, std::string("test.txt")
                 ,  &(vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram)
                 , 0, ~0ULL);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state = 0U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len = 0x80U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start = 0U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j = 0U;
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__k = 1U;
    vlSelf->top__DOT__dut__DOT__ntt_wren = 0U;
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state = 0U;
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len = 1U;
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start = 0U;
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j = 0U;
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__k = 0xffU;
    vlSelf->top__DOT__dut__DOT__intt_wren = 0U;
}

VL_ATTR_COLD void Vtop___024root___settle__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__0\n"); );
    // Init
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
    // Body
    vlSelf->top__DOT__dut__DOT__ntt_wren = (((0U != (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)) 
                                             & (((1U 
                                                  == (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state)) 
                                                 | ((6U 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state)) 
                                                    & (1U 
                                                       != (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)) 
                                                    & (9U 
                                                       == (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))) 
                                                   & (6U 
                                                      != (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state)))))
                                             ? 1U : 0U);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__next_state 
        = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
            ? ((4U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                         ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                             ? 0xbU : ((0x100U > (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start))
                                        ? 3U : 5U))
                         : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                             ? (((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j) 
                                 < (((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start) 
                                     + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)) 
                                    - (IData)(1U)))
                                 ? 1U : 6U) : ((0x100U 
                                                >= (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start))
                                                ? 3U
                                                : 5U))))
            : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                        ? ((0U < (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len))
                            ? 4U : 0xbU) : 0xaU) : 
                   ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                     ? ((0U < (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len))
                         ? 4U : 0xbU) : 8U)) : ((2U 
                                                 & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                                                  ? 9U
                                                  : 0U)
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state))
                                                  ? 
                                                 (((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j) 
                                                   < 
                                                   (((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start) 
                                                     + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len)) 
                                                    - (IData)(2U)))
                                                   ? 1U
                                                   : 6U)
                                                  : 7U))));
    vlSelf->top__DOT__dut__DOT__tw_tmp = vlSelf->top__DOT__dut__DOT__twiddle_fac__DOT__rom
        [((IData)(vlSelf->ntt) ? (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__k)
           : (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__k))];
    vlSelf->top__DOT__dut__DOT__intt_wren = (((0U != (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)) 
                                              & (((1U 
                                                   == (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state)) 
                                                  | ((6U 
                                                      == (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state)) 
                                                     & (1U 
                                                        != (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)))) 
                                                 | (((1U 
                                                      == (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)) 
                                                     & (9U 
                                                        == (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))) 
                                                    & (6U 
                                                       != (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state)))))
                                              ? 1U : 0U);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__next_state 
        = ((8U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
            ? ((4U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                ? 0U : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                         ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                             ? 0xbU : ((0x100U > (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start))
                                        ? 3U : 5U))
                         : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                             ? (((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j) 
                                 < (((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start) 
                                     + (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)) 
                                    - (IData)(1U)))
                                 ? 1U : 6U) : ((0x100U 
                                                >= (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start))
                                                ? 3U
                                                : 5U))))
            : ((4U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                ? ((2U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                    ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                        ? ((0U < (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len))
                            ? 4U : 0xbU) : 0xaU) : 
                   ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                     ? 4U : 8U)) : ((2U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                                     ? ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                                         ? 9U : 0U)
                                     : ((1U & (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state))
                                         ? (((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j) 
                                             < (((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start) 
                                                 + (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len)) 
                                                - (IData)(2U)))
                                             ? 1U : 6U)
                                         : 7U))));
    vlSelf->top__DOT__dut__DOT__addr1 = ((IData)(vlSelf->ntt)
                                          ? (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j)
                                          : (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j));
    vlSelf->top__DOT__dut__DOT__ntt_out1 = vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
        [vlSelf->top__DOT__dut__DOT__addr1];
    vlSelf->top__DOT__dut__DOT__addr2 = (0xffU & ((IData)(vlSelf->ntt)
                                                   ? 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j) 
                                                   + (IData)(vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len))
                                                   : 
                                                  ((IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j) 
                                                   + (IData)(vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len))));
    vlSelf->top__DOT__dut__DOT__ntt_out2 = vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram
        [vlSelf->top__DOT__dut__DOT__addr2];
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__ntt_out1 
                        + vlSelf->top__DOT__dut__DOT__ntt_out2));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__ntt_out1 
                        - vlSelf->top__DOT__dut__DOT__ntt_out2));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z 
        = (0xffffffffffffULL & ((QData)((IData)((0xffffffU 
                                                 & ((IData)(vlSelf->ntt)
                                                     ? vlSelf->top__DOT__dut__DOT__tw_tmp
                                                     : 
                                                    ((IData)(1U) 
                                                     + 
                                                     (~ vlSelf->top__DOT__dut__DOT__tw_tmp)))))) 
                                * (QData)((IData)((0xffffffU 
                                                   & ((IData)(vlSelf->ntt)
                                                       ? vlSelf->top__DOT__dut__DOT__ntt_out2
                                                       : 
                                                      ((0x1000000U 
                                                        & (vlSelf->top__DOT__dut__DOT__ntt_out1 
                                                           - vlSelf->top__DOT__dut__DOT__ntt_out2))
                                                        ? 
                                                       ((IData)(0x7fe001U) 
                                                        + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)
                                                        : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d)))))));
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
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
        = (0x1ffffffU & ((IData)(vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z) 
                         - (((IData)((0x3ffffffffffffULL 
                                      & ((QData)((IData)(
                                                         (0x3ffffffU 
                                                          & ((0x3fc0000U 
                                                              & (__Vtemp_h9ffe6e96__0[2U] 
                                                                 << 0x12U)) 
                                                             | (__Vtemp_h9ffe6e96__0[1U] 
                                                                >> 0xeU))))) 
                                         << 0x17U))) 
                             - (IData)((0x3ffffffffffffULL 
                                        & ((QData)((IData)(
                                                           (0x3ffffffU 
                                                            & ((0x3fc0000U 
                                                                & (__Vtemp_h7f87e8f8__0[2U] 
                                                                   << 0x12U)) 
                                                               | (__Vtemp_h7f87e8f8__0[1U] 
                                                                  >> 0xeU))))) 
                                           << 0xdU)))) 
                            + (IData)((QData)((IData)(
                                                      (0x3ffffffU 
                                                       & ((0x3fc0000U 
                                                           & (__Vtemp_h9f10d34e__0[2U] 
                                                              << 0x12U)) 
                                                          | (__Vtemp_h9f10d34e__0[1U] 
                                                             >> 0xeU)))))))));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul 
        = (0xffffffU & ((0x1000000U & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                       - (IData)(0x7fe001U)))
                         ? vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3
                         : (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 
                                         - (IData)(0x7fe001U)))));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
        = (0xffffffU & ((IData)(vlSelf->ntt) ? vlSelf->top__DOT__dut__DOT__ntt_out1
                         : ((1U & ((1U & ((vlSelf->top__DOT__dut__DOT__ntt_out1 
                                           + vlSelf->top__DOT__dut__DOT__ntt_out2) 
                                          >> 0x18U)) 
                                   | (~ (1U & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                                - (IData)(0x7fe001U)) 
                                               >> 0x18U)))))
                             ? (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s 
                                - (IData)(0x7fe001U))
                             : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s)));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                        + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul));
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d 
        = (0xffffffU & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                        - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul));
    if (vlSelf->ntt) {
        vlSelf->top__DOT__dut__DOT__out1_bfu = (0xffffffU 
                                                & ((1U 
                                                    & ((1U 
                                                        & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                            + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul) 
                                                           >> 0x18U)) 
                                                       | (~ 
                                                          (1U 
                                                           & ((vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                               - (IData)(0x7fe001U)) 
                                                              >> 0x18U)))))
                                                    ? 
                                                   (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s 
                                                    - (IData)(0x7fe001U))
                                                    : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s));
        vlSelf->top__DOT__dut__DOT__out2_bfu = (0xffffffU 
                                                & ((0x1000000U 
                                                    & (vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 
                                                       - vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul))
                                                    ? 
                                                   ((IData)(0x7fe001U) 
                                                    + vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d)
                                                    : vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d));
    } else {
        vlSelf->top__DOT__dut__DOT__out1_bfu = (0xffffffU 
                                                & vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2);
        vlSelf->top__DOT__dut__DOT__out2_bfu = (0xffffffU 
                                                & vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul);
    }
    vlSelf->even_debug_o = vlSelf->top__DOT__dut__DOT__out1_bfu;
    vlSelf->odd_debug_o = vlSelf->top__DOT__dut__DOT__out2_bfu;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__ntt = vlSelf->ntt;
}

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->ntt = VL_RAND_RESET_I(1);
    vlSelf->even_debug_o = VL_RAND_RESET_I(24);
    vlSelf->odd_debug_o = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__tw_tmp = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__in1_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__in2_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out1_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__out2_bfu = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__ntt_out1 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__ntt_out2 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__intt_out1 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__intt_out2 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__addr1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__addr2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__intt_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__ntt_wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__wren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__start = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__j = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_ins__DOT__k = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__next_state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__len = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__start = VL_RAND_RESET_I(9);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__j = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__dut__DOT__agu_intt__DOT__k = VL_RAND_RESET_I(8);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__bram_NTT__DOT__ram[__Vi0] = VL_RAND_RESET_I(24);
    }
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__in_add2 = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__out_mul = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add1_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub1_ins__DOT__d = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__z = VL_RAND_RESET_Q(48);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__mul_ins__DOT__t3 = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__add2_ins__DOT__s = VL_RAND_RESET_I(24);
    vlSelf->top__DOT__dut__DOT__bfu_ins__DOT__sub2_ins__DOT__d = VL_RAND_RESET_I(24);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->top__DOT__dut__DOT__twiddle_fac__DOT__rom[__Vi0] = VL_RAND_RESET_I(24);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
