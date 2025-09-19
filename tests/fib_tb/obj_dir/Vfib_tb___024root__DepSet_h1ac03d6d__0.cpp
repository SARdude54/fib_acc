// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfib_tb.h for the primary calling header

#include "Vfib_tb__pch.h"
#include "Vfib_tb__Syms.h"
#include "Vfib_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vfib_tb___024root___eval_initial__TOP__Vtiming__0(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x3b9aca00ULL, 
                                         nullptr, "fib_tb.sv", 
                                         31);
    VL_WRITEF_NX("[%0t] %%Error: fib_tb.sv:32: Assertion failed in %Nfib_tb: [%0t] Error: Simulation timed out\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name(),
                 64,VL_TIME_UNITED_Q(1),-12);
    VL_STOP_MT("fib_tb.sv", 32, "");
    co_await vlSelfRef.__VdlySched.delay(0xf4240ULL, 
                                         nullptr, "fib_tb.sv", 
                                         33);
    VL_FINISH_MT("fib_tb.sv", 34, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__act(Vfib_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vfib_tb___024root___eval_triggers__act(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_triggers__act\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.fib_tb__DOT__CLK) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.fib_tb__DOT__CLK) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((IData)(vlSelfRef.fib_tb__DOT__rdy_in) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__rdy_in__0)));
    vlSelfRef.__VactTriggered.set(4U, ((IData)(vlSelfRef.fib_tb__DOT__vld_out) 
                                       != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__vld_out__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0 
        = vlSelfRef.fib_tb__DOT__CLK;
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__rdy_in__0 
        = vlSelfRef.fib_tb__DOT__rdy_in;
    vlSelfRef.__Vtrigprevexpr___TOP__fib_tb__DOT__vld_out__0 
        = vlSelfRef.fib_tb__DOT__vld_out;
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.__VactDidInit)))))) {
        vlSelfRef.__VactDidInit = 1U;
        vlSelfRef.__VactTriggered.set(1U, 1U);
        vlSelfRef.__VactTriggered.set(3U, 1U);
        vlSelfRef.__VactTriggered.set(4U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfib_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
