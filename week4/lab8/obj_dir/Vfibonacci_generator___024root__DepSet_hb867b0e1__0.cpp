// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfibonacci_generator.h for the primary calling header

#include "Vfibonacci_generator__pch.h"
#include "Vfibonacci_generator___024root.h"

void Vfibonacci_generator___024root___eval_act(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_act\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vfibonacci_generator___024root___nba_sequent__TOP__0(Vfibonacci_generator___024root* vlSelf);

void Vfibonacci_generator___024root___eval_nba(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_nba\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vfibonacci_generator___024root___nba_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vfibonacci_generator___024root___nba_sequent__TOP__0(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___nba_sequent__TOP__0\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__fibonacci_generator__DOT__fib_prev1;
    __Vdly__fibonacci_generator__DOT__fib_prev1 = 0;
    IData/*31:0*/ __Vdly__fibonacci_generator__DOT__fib_prev2;
    __Vdly__fibonacci_generator__DOT__fib_prev2 = 0;
    // Body
    __Vdly__fibonacci_generator__DOT__fib_prev1 = vlSelfRef.fibonacci_generator__DOT__fib_prev1;
    __Vdly__fibonacci_generator__DOT__fib_prev2 = vlSelfRef.fibonacci_generator__DOT__fib_prev2;
    if (vlSelfRef.rst) {
        __Vdly__fibonacci_generator__DOT__fib_prev1 = 1U;
        __Vdly__fibonacci_generator__DOT__fib_prev2 = 0U;
        vlSelfRef.fib_out = 0U;
    } else if (vlSelfRef.enable) {
        vlSelfRef.fib_out = (vlSelfRef.fibonacci_generator__DOT__fib_prev1 
                             + vlSelfRef.fibonacci_generator__DOT__fib_prev2);
        __Vdly__fibonacci_generator__DOT__fib_prev2 
            = vlSelfRef.fibonacci_generator__DOT__fib_prev1;
        __Vdly__fibonacci_generator__DOT__fib_prev1 
            = (vlSelfRef.fibonacci_generator__DOT__fib_prev1 
               + vlSelfRef.fibonacci_generator__DOT__fib_prev2);
    }
    vlSelfRef.fibonacci_generator__DOT__fib_prev1 = __Vdly__fibonacci_generator__DOT__fib_prev1;
    vlSelfRef.fibonacci_generator__DOT__fib_prev2 = __Vdly__fibonacci_generator__DOT__fib_prev2;
}

void Vfibonacci_generator___024root___eval_triggers__act(Vfibonacci_generator___024root* vlSelf);

bool Vfibonacci_generator___024root___eval_phase__act(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_phase__act\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vfibonacci_generator___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vfibonacci_generator___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vfibonacci_generator___024root___eval_phase__nba(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_phase__nba\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vfibonacci_generator___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_generator___024root___dump_triggers__nba(Vfibonacci_generator___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vfibonacci_generator___024root___dump_triggers__act(Vfibonacci_generator___024root* vlSelf);
#endif  // VL_DEBUG

void Vfibonacci_generator___024root___eval(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vfibonacci_generator___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("fibonacci_generator.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vfibonacci_generator___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("fibonacci_generator.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vfibonacci_generator___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vfibonacci_generator___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vfibonacci_generator___024root___eval_debug_assertions(Vfibonacci_generator___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root___eval_debug_assertions\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY(((vlSelfRef.enable & 0xfeU)))) {
        Verilated::overWidthError("enable");}
}
#endif  // VL_DEBUG
