// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtrafficLightFSM.h for the primary calling header

#include "VtrafficLightFSM__pch.h"
#include "VtrafficLightFSM__Syms.h"
#include "VtrafficLightFSM___024root.h"

void VtrafficLightFSM___024root___ctor_var_reset(VtrafficLightFSM___024root* vlSelf);

VtrafficLightFSM___024root::VtrafficLightFSM___024root(VtrafficLightFSM__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VtrafficLightFSM___024root___ctor_var_reset(this);
}

void VtrafficLightFSM___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VtrafficLightFSM___024root::~VtrafficLightFSM___024root() {
}
