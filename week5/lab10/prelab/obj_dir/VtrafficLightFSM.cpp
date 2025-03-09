// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VtrafficLightFSM__pch.h"

//============================================================
// Constructors

VtrafficLightFSM::VtrafficLightFSM(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VtrafficLightFSM__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , light{vlSymsp->TOP.light}
    , counter{vlSymsp->TOP.counter}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VtrafficLightFSM::VtrafficLightFSM(const char* _vcname__)
    : VtrafficLightFSM(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VtrafficLightFSM::~VtrafficLightFSM() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VtrafficLightFSM___024root___eval_debug_assertions(VtrafficLightFSM___024root* vlSelf);
#endif  // VL_DEBUG
void VtrafficLightFSM___024root___eval_static(VtrafficLightFSM___024root* vlSelf);
void VtrafficLightFSM___024root___eval_initial(VtrafficLightFSM___024root* vlSelf);
void VtrafficLightFSM___024root___eval_settle(VtrafficLightFSM___024root* vlSelf);
void VtrafficLightFSM___024root___eval(VtrafficLightFSM___024root* vlSelf);

void VtrafficLightFSM::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VtrafficLightFSM::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VtrafficLightFSM___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VtrafficLightFSM___024root___eval_static(&(vlSymsp->TOP));
        VtrafficLightFSM___024root___eval_initial(&(vlSymsp->TOP));
        VtrafficLightFSM___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VtrafficLightFSM___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VtrafficLightFSM::eventsPending() { return false; }

uint64_t VtrafficLightFSM::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VtrafficLightFSM::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VtrafficLightFSM___024root___eval_final(VtrafficLightFSM___024root* vlSelf);

VL_ATTR_COLD void VtrafficLightFSM::final() {
    VtrafficLightFSM___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VtrafficLightFSM::hierName() const { return vlSymsp->name(); }
const char* VtrafficLightFSM::modelName() const { return "VtrafficLightFSM"; }
unsigned VtrafficLightFSM::threads() const { return 1; }
void VtrafficLightFSM::prepareClone() const { contextp()->prepareClone(); }
void VtrafficLightFSM::atClone() const {
    contextp()->threadPoolpOnClone();
}
