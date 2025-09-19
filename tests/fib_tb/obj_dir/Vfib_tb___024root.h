// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfib_tb.h for the primary calling header

#ifndef VERILATED_VFIB_TB___024ROOT_H_
#define VERILATED_VFIB_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfib_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfib_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ fib_tb__DOT__CLK;
    CData/*0:0*/ fib_tb__DOT__rst_n;
    CData/*7:0*/ fib_tb__DOT__fib_in;
    CData/*0:0*/ fib_tb__DOT__vld_in;
    CData/*0:0*/ fib_tb__DOT__rdy_out;
    CData/*0:0*/ fib_tb__DOT__vld_out;
    CData/*0:0*/ fib_tb__DOT__rdy_in;
    CData/*0:0*/ fib_tb__DOT__UUT__DOT__cnt_en;
    CData/*7:0*/ fib_tb__DOT__UUT__DOT__cnt;
    CData/*7:0*/ fib_tb__DOT__UUT__DOT__A;
    CData/*7:0*/ fib_tb__DOT__UUT__DOT__B;
    CData/*7:0*/ fib_tb__DOT__UUT__DOT__C;
    CData/*1:0*/ fib_tb__DOT__UUT__DOT__FSM__DOT__PS;
    CData/*1:0*/ fib_tb__DOT__UUT__DOT__FSM__DOT__NS;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fib_tb__DOT__CLK__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fib_tb__DOT__rdy_in__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fib_tb__DOT__vld_out__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hdab20734__0;
    VlTriggerScheduler __VtrigSched_hfcb3b5b8__0;
    VlTriggerScheduler __VtrigSched_h8bff1afa__0;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<5> __VactTriggered;
    VlTriggerVec<5> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfib_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfib_tb___024root(Vfib_tb__Syms* symsp, const char* v__name);
    ~Vfib_tb___024root();
    VL_UNCOPYABLE(Vfib_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
