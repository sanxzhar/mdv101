// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtrafficLightFSM.h for the primary calling header

#include "VtrafficLightFSM__pch.h"
#include "VtrafficLightFSM___024root.h"

void VtrafficLightFSM___024root___eval_act(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_act\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void VtrafficLightFSM___024root___nba_sequent__TOP__0(VtrafficLightFSM___024root* vlSelf);

void VtrafficLightFSM___024root___eval_nba(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_nba\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VtrafficLightFSM___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void VtrafficLightFSM___024root___nba_sequent__TOP__0(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___nba_sequent__TOP__0\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__trafficLightFSM__DOT__timer;
    __Vdly__trafficLightFSM__DOT__timer = 0;
    // Body
    __Vdly__trafficLightFSM__DOT__timer = vlSelfRef.trafficLightFSM__DOT__timer;
    if (vlSelfRef.reset) {
        vlSelfRef.trafficLightFSM__DOT__current_state = 0U;
        __Vdly__trafficLightFSM__DOT__timer = 0U;
    } else if ((vlSelfRef.trafficLightFSM__DOT__timer 
                == vlSelfRef.counter)) {
        vlSelfRef.trafficLightFSM__DOT__current_state 
            = vlSelfRef.trafficLightFSM__DOT__next_state;
        __Vdly__trafficLightFSM__DOT__timer = 0U;
    } else {
        __Vdly__trafficLightFSM__DOT__timer = ((IData)(1U) 
                                               + vlSelfRef.trafficLightFSM__DOT__timer);
    }
    vlSelfRef.trafficLightFSM__DOT__timer = __Vdly__trafficLightFSM__DOT__timer;
    if ((0U == (IData)(vlSelfRef.trafficLightFSM__DOT__current_state))) {
        vlSelfRef.trafficLightFSM__DOT__next_state = 1U;
        vlSelfRef.light = 1U;
    } else if ((1U == (IData)(vlSelfRef.trafficLightFSM__DOT__current_state))) {
        vlSelfRef.trafficLightFSM__DOT__next_state = 2U;
        vlSelfRef.light = 2U;
    } else {
        vlSelfRef.trafficLightFSM__DOT__next_state = 0U;
        vlSelfRef.light = ((2U == (IData)(vlSelfRef.trafficLightFSM__DOT__current_state))
                            ? 4U : 1U);
    }
}

void VtrafficLightFSM___024root___eval_triggers__act(VtrafficLightFSM___024root* vlSelf);

bool VtrafficLightFSM___024root___eval_phase__act(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_phase__act\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VtrafficLightFSM___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        VtrafficLightFSM___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VtrafficLightFSM___024root___eval_phase__nba(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_phase__nba\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        VtrafficLightFSM___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__nba(VtrafficLightFSM___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__act(VtrafficLightFSM___024root* vlSelf);
#endif  // VL_DEBUG

void VtrafficLightFSM___024root___eval(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            VtrafficLightFSM___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("trafficLightFSM.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                VtrafficLightFSM___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("trafficLightFSM.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (VtrafficLightFSM___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (VtrafficLightFSM___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VtrafficLightFSM___024root___eval_debug_assertions(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_debug_assertions\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.reset & 0xfeU)))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
