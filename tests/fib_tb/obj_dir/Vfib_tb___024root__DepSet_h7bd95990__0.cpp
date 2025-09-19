// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfib_tb.h for the primary calling header

#include "Vfib_tb__pch.h"
#include "Vfib_tb___024root.h"

VL_ATTR_COLD void Vfib_tb___024root___eval_initial__TOP(Vfib_tb___024root* vlSelf);
VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__0(Vfib_tb___024root* vlSelf);
VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__1(Vfib_tb___024root* vlSelf);
VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__2(Vfib_tb___024root* vlSelf);

void Vfib_tb___024root___eval_initial(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_initial\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfib_tb___024root___eval_initial__TOP(vlSelf);
    Vfib_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfib_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vfib_tb___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0 
        = vlSelfRef.fib_tb__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__rdy_in__0 
        = vlSelfRef.fib_tb__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__vld_out__0 
        = vlSelfRef.fib_tb__DOT__vld_out;
}

VL_INLINE_OPT VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__1(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vtask_fib_tb__DOT__send_and_check__0__n;
    __Vtask_fib_tb__DOT__send_and_check__0__n = 0;
    CData/*7:0*/ __Vfunc_fib_tb__DOT__fib_ref__1__n;
    __Vfunc_fib_tb__DOT__fib_ref__1__n = 0;
    IData/*31:0*/ __Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i;
    __Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i = 0;
    IData/*31:0*/ __Vfunc_fib_tb__DOT__fib_ref__1__a;
    __Vfunc_fib_tb__DOT__fib_ref__1__a = 0;
    IData/*31:0*/ __Vfunc_fib_tb__DOT__fib_ref__1__b;
    __Vfunc_fib_tb__DOT__fib_ref__1__b = 0;
    IData/*31:0*/ __Vfunc_fib_tb__DOT__fib_ref__1__temp;
    __Vfunc_fib_tb__DOT__fib_ref__1__temp = 0;
    // Body
    vlSelfRef.fib_tb__DOT__fib_in = 0U;
    vlSelfRef.fib_tb__DOT__vld_in = 0U;
    vlSelfRef.fib_tb__DOT__rdy_out = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "fib_tb.sv", 
                                         84);
    vlSelfRef.fib_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         85);
    co_await vlSelfRef.__VdlySched.delay(0x14ULL, nullptr, 
                                         "fib_tb.sv", 
                                         86);
    vlSelfRef.fib_tb__DOT__rst_n = 1U;
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         87);
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         88);
    __Vtask_fib_tb__DOT__send_and_check__0__n = 6U;
    __Vfunc_fib_tb__DOT__fib_ref__1__n = __Vtask_fib_tb__DOT__send_and_check__0__n;
    {
        __Vfunc_fib_tb__DOT__fib_ref__1__a = 0U;
        __Vfunc_fib_tb__DOT__fib_ref__1__b = 1U;
        if ((0U == (IData)(__Vfunc_fib_tb__DOT__fib_ref__1__n))) {
            goto __Vlabel1;
        }
        __Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i = 1U;
        while ((__Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i 
                < (IData)(__Vfunc_fib_tb__DOT__fib_ref__1__n))) {
            __Vfunc_fib_tb__DOT__fib_ref__1__temp = 
                (__Vfunc_fib_tb__DOT__fib_ref__1__a 
                 + __Vfunc_fib_tb__DOT__fib_ref__1__b);
            __Vfunc_fib_tb__DOT__fib_ref__1__a = __Vfunc_fib_tb__DOT__fib_ref__1__b;
            __Vfunc_fib_tb__DOT__fib_ref__1__b = __Vfunc_fib_tb__DOT__fib_ref__1__temp;
            __Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i 
                = ((IData)(1U) + __Vfunc_fib_tb__DOT__fib_ref__1__unnamedblk1__DOT__i);
        }
        __Vlabel1: ;
    }
    while ((1U & (~ (IData)(vlSelfRef.fib_tb__DOT__rdy_in)))) {
        co_await vlSelfRef.__VtrigSched_hfcb3b5b8__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( fib_tb.rdy_in)", 
                                                             "fib_tb.sv", 
                                                             63);
    }
    vlSelfRef.fib_tb__DOT__fib_in = __Vtask_fib_tb__DOT__send_and_check__0__n;
    vlSelfRef.fib_tb__DOT__vld_in = 1U;
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         66);
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         67);
    vlSelfRef.fib_tb__DOT__vld_in = 0U;
    vlSelfRef.fib_tb__DOT__fib_in = 0U;
    while ((1U & (~ (IData)(vlSelfRef.fib_tb__DOT__vld_out)))) {
        co_await vlSelfRef.__VtrigSched_h8bff1afa__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( fib_tb.vld_out)", 
                                                             "fib_tb.sv", 
                                                             71);
    }
    vlSelfRef.fib_tb__DOT__rdy_out = 1U;
    co_await vlSelfRef.__VtrigSched_hdab20734__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fib_tb.CLK)", 
                                                         "fib_tb.sv", 
                                                         74);
    vlSelfRef.fib_tb__DOT__rdy_out = 0U;
    VL_WRITEF_NX("Fib Test pass\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x32ULL, nullptr, 
                                         "fib_tb.sv", 
                                         97);
    VL_FINISH_MT("fib_tb.sv", 98, "");
}

VL_INLINE_OPT VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__2(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "fib_tb.sv", 
                                             28);
        vlSelfRef.fib_tb__DOT__CLK = (1U & (~ (IData)(vlSelfRef.fib_tb__DOT__CLK)));
    }
}

void Vfib_tb___024root___act_comb__TOP__0(Vfib_tb___024root* vlSelf);

void Vfib_tb___024root___eval_act(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_act\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x1dULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vfib_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vfib_tb__ConstPool__TABLE_hb7359448_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_hb9c4ee7e_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_he5b9b9b5_0;
extern const VlUnpacked<CData/*0:0*/, 32> Vfib_tb__ConstPool__TABLE_he15b31be_0;

VL_INLINE_OPT void Vfib_tb___024root___act_comb__TOP__0(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___act_comb__TOP__0\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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

void Vfib_tb___024root___nba_sequent__TOP__0(Vfib_tb___024root* vlSelf);
void Vfib_tb___024root___nba_sequent__TOP__1(Vfib_tb___024root* vlSelf);

void Vfib_tb___024root___eval_nba(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_nba\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfib_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfib_tb___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x1fULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfib_tb___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfib_tb___024root___nba_sequent__TOP__0(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___nba_sequent__TOP__0\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __Vdly__fib_tb__DOT__UUT__DOT__cnt;
    __Vdly__fib_tb__DOT__UUT__DOT__cnt = 0;
    // Body
    __Vdly__fib_tb__DOT__UUT__DOT__cnt = vlSelfRef.fib_tb__DOT__UUT__DOT__cnt;
    if (vlSelfRef.fib_tb__DOT__rst_n) {
        if (((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt_en) 
             & (IData)(vlSelfRef.fib_tb__DOT__rst_n))) {
            __Vdly__fib_tb__DOT__UUT__DOT__cnt = (0xffU 
                                                  & ((IData)(1U) 
                                                     + (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt)));
        }
        if ((1U == (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt))) {
            vlSelfRef.fib_tb__DOT__UUT__DOT__A = 0U;
            vlSelfRef.fib_tb__DOT__UUT__DOT__B = 1U;
        } else {
            vlSelfRef.fib_tb__DOT__UUT__DOT__A = vlSelfRef.fib_tb__DOT__UUT__DOT__B;
            vlSelfRef.fib_tb__DOT__UUT__DOT__B = vlSelfRef.fib_tb__DOT__UUT__DOT__C;
        }
    } else {
        __Vdly__fib_tb__DOT__UUT__DOT__cnt = 0U;
        vlSelfRef.fib_tb__DOT__UUT__DOT__A = 0U;
        vlSelfRef.fib_tb__DOT__UUT__DOT__B = 0U;
    }
    vlSelfRef.fib_tb__DOT__UUT__DOT__cnt = __Vdly__fib_tb__DOT__UUT__DOT__cnt;
    vlSelfRef.fib_tb__DOT__UUT__DOT__C = (0xffU & ((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__A) 
                                                   + (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__B)));
}

VL_INLINE_OPT void Vfib_tb___024root___nba_sequent__TOP__1(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___nba_sequent__TOP__1\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__PS = 
        ((IData)(vlSelfRef.fib_tb__DOT__rst_n) ? (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__NS)
          : 0U);
}

void Vfib_tb___024root___timing_resume(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___timing_resume\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hdab20734__0.resume(
                                                   "@(posedge fib_tb.CLK)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_hfcb3b5b8__0.resume(
                                                   "@( fib_tb.rdy_in)");
    }
    if ((0x10ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h8bff1afa__0.resume(
                                                   "@( fib_tb.vld_out)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfib_tb___024root___timing_commit(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___timing_commit\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hdab20734__0.commit(
                                                   "@(posedge fib_tb.CLK)");
    }
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_hfcb3b5b8__0.commit(
                                                   "@( fib_tb.rdy_in)");
    }
    if ((! (0x10ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h8bff1afa__0.commit(
                                                   "@( fib_tb.vld_out)");
    }
}

void Vfib_tb___024root___eval_triggers__act(Vfib_tb___024root* vlSelf);

bool Vfib_tb___024root___eval_phase__act(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_phase__act\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<5> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfib_tb___024root___eval_triggers__act(vlSelf);
    Vfib_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfib_tb___024root___timing_resume(vlSelf);
        Vfib_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfib_tb___024root___eval_phase__nba(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_phase__nba\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfib_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__nba(Vfib_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__act(Vfib_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfib_tb___024root___eval(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfib_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fib_tb.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfib_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fib_tb.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfib_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfib_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfib_tb___024root___eval_debug_assertions(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_debug_assertions\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
