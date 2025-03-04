// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vfibonacci_generator__Syms.h"


VL_ATTR_COLD void Vfibonacci_generator___024root__trace_init_sub__TOP__0(Vfibonacci_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_init_sub__TOP__0\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"fib_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("fibonacci_generator", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+1,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+2,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+3,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"fib_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"fib_prev1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,0,"fib_prev2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_init_top(Vfibonacci_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_init_top\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfibonacci_generator___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vfibonacci_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfibonacci_generator___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vfibonacci_generator___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_register(Vfibonacci_generator___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_register\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vfibonacci_generator___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Vfibonacci_generator___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Vfibonacci_generator___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Vfibonacci_generator___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_const_0\n"); );
    // Init
    Vfibonacci_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfibonacci_generator___024root*>(voidSelf);
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_full_0_sub_0(Vfibonacci_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_full_0\n"); );
    // Init
    Vfibonacci_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfibonacci_generator___024root*>(voidSelf);
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vfibonacci_generator___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_full_0_sub_0(Vfibonacci_generator___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfibonacci_generator___024root__trace_full_0_sub_0\n"); );
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.rst));
    bufp->fullBit(oldp+2,(vlSelfRef.clk));
    bufp->fullBit(oldp+3,(vlSelfRef.enable));
    bufp->fullIData(oldp+4,(vlSelfRef.fib_out),32);
    bufp->fullIData(oldp+5,(vlSelfRef.fibonacci_generator__DOT__fib_prev1),32);
    bufp->fullIData(oldp+6,(vlSelfRef.fibonacci_generator__DOT__fib_prev2),32);
}
