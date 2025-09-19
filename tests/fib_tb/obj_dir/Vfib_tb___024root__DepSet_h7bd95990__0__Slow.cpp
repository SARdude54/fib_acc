// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfib_tb.h for the primary calling header

#include "Vfib_tb__pch.h"
#include "Vfib_tb___024root.h"

VL_ATTR_COLD void Vfib_tb___024root___eval_static(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_static\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfib_tb___024root___eval_final(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_final\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__stl(Vfib_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfib_tb___024root___eval_phase__stl(Vfib_tb___024root* vlSelf);

VL_ATTR_COLD void Vfib_tb___024root___eval_settle(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_settle\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfib_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("fib_tb.sv", 3, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vfib_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__stl(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___dump_triggers__stl\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfib_tb___024root___stl_sequent__TOP__0(Vfib_tb___024root* vlSelf);

VL_ATTR_COLD void Vfib_tb___024root___eval_stl(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_stl\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vfib_tb___024root___stl_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vfib_tb__ConstPool__TABLE_hb7359448_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_hb9c4ee7e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_he5b9b9b5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_he15b31be_0;

VL_ATTR_COLD void Vfib_tb___024root___stl_sequent__TOP__0(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___stl_sequent__TOP__0\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    vlSelfRef.fib_tb__DOT__UUT__DOT__C = (0xffU & ((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__A) 
                                                   + (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__B)));
    __Vtableidx1 = (((IData)(vlSelfRef.fib_tb__DOT__rdy_out) 
                     << 4U) | (((((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt) 
                                  == (IData)(vlSelfRef.fib_tb__DOT__fib_in)) 
                                 & (0U != (IData)(vlSelfRef.fib_tb__DOT__fib_in))) 
                                << 3U) | (((IData)(vlSelfRef.fib_tb__DOT__vld_in) 
                                           << 2U) | (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__PS))));
    vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__NS = 
        Vfib_tb__ConstPool__TABLE_hb7359448_0[__Vtableidx1];
    vlSelfRef.fib_tb__DOT__UUT__DOT__cnt_en = Vfib_tb__ConstPool__TABLE_hb9c4ee7e_0
        [__Vtableidx1];
    vlSelfRef.fib_tb__DOT__rdy_in = Vfib_tb__ConstPool__TABLE_he5b9b9b5_0
        [__Vtableidx1];
    vlSelfRef.fib_tb__DOT__vld_out = Vfib_tb__ConstPool__TABLE_he15b31be_0
        [__Vtableidx1];
}

VL_ATTR_COLD void Vfib_tb___024root___eval_triggers__stl(Vfib_tb___024root* vlSelf);

VL_ATTR_COLD bool Vfib_tb___024root___eval_phase__stl(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_phase__stl\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfib_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vfib_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__act(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___dump_triggers__act\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge fib_tb.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @( fib_tb.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @( fib_tb.rdy_in)\n");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @( fib_tb.vld_out)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__nba(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___dump_triggers__nba\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge fib_tb.CLK)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @( fib_tb.CLK)\n");
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @( fib_tb.rdy_in)\n");
    }
    if ((0x10ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @( fib_tb.vld_out)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfib_tb___024root___ctor_var_reset(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___ctor_var_reset\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->fib_tb__DOT__CLK = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__fib_in = VL_RAND_RESET_I(8);
    vlSelf->fib_tb__DOT__vld_in = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__rdy_out = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__vld_out = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__rdy_in = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__UUT__DOT__cnt_en = VL_RAND_RESET_I(1);
    vlSelf->fib_tb__DOT__UUT__DOT__cnt = VL_RAND_RESET_I(8);
    vlSelf->fib_tb__DOT__UUT__DOT__A = VL_RAND_RESET_I(8);
    vlSelf->fib_tb__DOT__UUT__DOT__B = VL_RAND_RESET_I(8);
    vlSelf->fib_tb__DOT__UUT__DOT__C = VL_RAND_RESET_I(8);
    vlSelf->fib_tb__DOT__UUT__DOT__FSM__DOT__PS = VL_RAND_RESET_I(2);
    vlSelf->fib_tb__DOT__UUT__DOT__FSM__DOT__NS = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__fib_tb__DOT__rdy_in__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__fib_tb__DOT__vld_out__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
