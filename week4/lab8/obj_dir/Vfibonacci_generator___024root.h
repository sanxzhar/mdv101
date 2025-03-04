// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfibonacci_generator.h for the primary calling header

#ifndef VERILATED_VFIBONACCI_GENERATOR___024ROOT_H_
#define VERILATED_VFIBONACCI_GENERATOR___024ROOT_H_  // guard

#include "verilated.h"


class Vfibonacci_generator__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfibonacci_generator___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(rst,0,0);
    VL_IN8(clk,0,0);
    VL_IN8(enable,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst__0;
    CData/*0:0*/ __VactContinue;
    VL_OUT(fib_out,31,0);
    IData/*31:0*/ fibonacci_generator__DOT__fib_prev1;
    IData/*31:0*/ fibonacci_generator__DOT__fib_prev2;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vfibonacci_generator__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vfibonacci_generator___024root(Vfibonacci_generator__Syms* symsp, const char* v__name);
    ~Vfibonacci_generator___024root();
    VL_UNCOPYABLE(Vfibonacci_generator___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
