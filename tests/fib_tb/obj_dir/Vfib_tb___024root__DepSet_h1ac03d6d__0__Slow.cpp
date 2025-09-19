// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfib_tb.h for the primary calling header

#include "Vfib_tb__pch.h"
#include "Vfib_tb__Syms.h"
#include "Vfib_tb___024root.h"

VL_ATTR_COLD void Vfib_tb___024root___eval_initial__TOP(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_initial__TOP\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fib_tb__DOT__CLK = 0U;
    vlSymsp->_vm_contextp__->dumpfile(std::string{"wave.vcd"});
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfib_tb___024root___dump_triggers__stl(Vfib_tb___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfib_tb___024root___eval_triggers__stl(Vfib_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root___eval_triggers__stl\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.set(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfib_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
