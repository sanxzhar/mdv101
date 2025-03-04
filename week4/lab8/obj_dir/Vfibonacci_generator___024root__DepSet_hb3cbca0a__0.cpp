// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfibonacci_generator.h for the primary calling header

#include "Vfibonacci_generator__pch.h"
#include "Vfibonacci_generator__Syms.h"
#include "Vfibonacci_generator___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_generator___024root___dump_triggers__act(Vfibonacci_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vfibonacci_generator___024root___eval_triggers__act(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_triggers__act\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.clk) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.rst) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst__0))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst__0 = vlSelfRef.rst;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfibonacci_generator___024root___dump_triggers__act(vlSelf);
    }
#endif
}
