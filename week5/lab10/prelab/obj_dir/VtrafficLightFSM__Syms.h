// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTRAFFICLIGHTFSM__SYMS_H_
#define VERILATED_VTRAFFICLIGHTFSM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VtrafficLightFSM.h"

// INCLUDE MODULE CLASSES
#include "VtrafficLightFSM___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VtrafficLightFSM__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VtrafficLightFSM* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VtrafficLightFSM___024root     TOP;

    // CONSTRUCTORS
    VtrafficLightFSM__Syms(VerilatedContext* contextp, const char* namep, VtrafficLightFSM* modelp);
    ~VtrafficLightFSM__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
