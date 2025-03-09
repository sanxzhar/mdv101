// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VtrafficLightFSM.h for the primary calling header

#include "VtrafficLightFSM__pch.h"
#include "VtrafficLightFSM___024root.h"

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_static(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_static\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_initial(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_initial\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset__0 = vlSelfRef.reset;
}

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_final(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_final\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__stl(VtrafficLightFSM___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VtrafficLightFSM___024root___eval_phase__stl(VtrafficLightFSM___024root* vlSelf);

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_settle(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_settle\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            VtrafficLightFSM___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("trafficLightFSM.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VtrafficLightFSM___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__stl(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___dump_triggers__stl\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtrafficLightFSM___024root___stl_sequent__TOP__0(VtrafficLightFSM___024root* vlSelf);

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_stl(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_stl\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VtrafficLightFSM___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD void VtrafficLightFSM___024root___stl_sequent__TOP__0(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___stl_sequent__TOP__0\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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

VL_ATTR_COLD void VtrafficLightFSM___024root___eval_triggers__stl(VtrafficLightFSM___024root* vlSelf);

VL_ATTR_COLD bool VtrafficLightFSM___024root___eval_phase__stl(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___eval_phase__stl\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VtrafficLightFSM___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        VtrafficLightFSM___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__act(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___dump_triggers__act\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VtrafficLightFSM___024root___dump_triggers__nba(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___dump_triggers__nba\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge reset)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VtrafficLightFSM___024root___ctor_var_reset(VtrafficLightFSM___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VtrafficLightFSM___024root___ctor_var_reset\n"); );
    VtrafficLightFSM__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->counter = VL_RAND_RESET_I(32);
    vlSelf->light = VL_RAND_RESET_I(3);
    vlSelf->trafficLightFSM__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->trafficLightFSM__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->trafficLightFSM__DOT__timer = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = VL_RAND_RESET_I(1);
}
