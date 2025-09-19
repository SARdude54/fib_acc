// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfib_tb.h for the primary calling header

#include "Vfib_tb__pch.h"
#include "Vfib_tb__Syms.h"
#include "Vfib_tb___024root.h"

void Vfib_tb___024root___ctor_var_reset(Vfib_tb___024root* vlSelf);

Vfib_tb___024root::Vfib_tb___024root(Vfib_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vfib_tb___024root___ctor_var_reset(this);
}

void Vfib_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfib_tb___024root::~Vfib_tb___024root() {
}
