// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VtrafficLightFSM.h for the primary calling header

#ifndef VERILATED_VTRAFFICLIGHTFSM___024ROOT_H_
#define VERILATED_VTRAFFICLIGHTFSM___024ROOT_H_  // guard

#include "verilated.h"


class VtrafficLightFSM__Syms;

class alignas(VL_CACHE_LINE_BYTES) VtrafficLightFSM___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(light,2,0);
    CData/*1:0*/ trafficLightFSM__DOT__current_state;
    CData/*1:0*/ trafficLightFSM__DOT__next_state;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(counter,31,0);
    IData/*31:0*/ trafficLightFSM__DOT__timer;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VtrafficLightFSM__Syms* const vlSymsp;

    // CONSTRUCTORS
    VtrafficLightFSM___024root(VtrafficLightFSM__Syms* symsp, const char* v__name);
    ~VtrafficLightFSM___024root();
    VL_UNCOPYABLE(VtrafficLightFSM___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
