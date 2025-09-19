// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfib_tb__Syms.h"


void Vfib_tb___024root__trace_chg_0_sub_0(Vfib_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vfib_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root__trace_chg_0\n"); );
    // Init
    Vfib_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfib_tb___024root*>(voidSelf);
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vfib_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vfib_tb___024root__trace_chg_0_sub_0(Vfib_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root__trace_chg_0_sub_0\n"); );
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,((0xffU & ((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__A) 
                                         + (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__B)))),32);
        bufp->chgCData(oldp+1,(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt),8);
        bufp->chgCData(oldp+2,(vlSelfRef.fib_tb__DOT__UUT__DOT__A),8);
        bufp->chgCData(oldp+3,(vlSelfRef.fib_tb__DOT__UUT__DOT__B),8);
        bufp->chgCData(oldp+4,((0xffU & ((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__A) 
                                         + (IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__B)))),8);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.fib_tb__DOT__CLK));
    bufp->chgBit(oldp+6,(vlSelfRef.fib_tb__DOT__rst_n));
    bufp->chgCData(oldp+7,(vlSelfRef.fib_tb__DOT__fib_in),8);
    bufp->chgBit(oldp+8,(vlSelfRef.fib_tb__DOT__vld_in));
    bufp->chgBit(oldp+9,(vlSelfRef.fib_tb__DOT__rdy_out));
    bufp->chgBit(oldp+10,(vlSelfRef.fib_tb__DOT__vld_out));
    bufp->chgBit(oldp+11,(vlSelfRef.fib_tb__DOT__rdy_in));
    bufp->chgBit(oldp+12,((((IData)(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt) 
                            == (IData)(vlSelfRef.fib_tb__DOT__fib_in)) 
                           & (0U != (IData)(vlSelfRef.fib_tb__DOT__fib_in)))));
    bufp->chgBit(oldp+13,(vlSelfRef.fib_tb__DOT__UUT__DOT__cnt_en));
    bufp->chgCData(oldp+14,(vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__PS),2);
    bufp->chgCData(oldp+15,(vlSelfRef.fib_tb__DOT__UUT__DOT__FSM__DOT__NS),2);
}

void Vfib_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfib_tb___024root__trace_cleanup\n"); );
    // Init
    Vfib_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfib_tb___024root*>(voidSelf);
    Vfib_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
