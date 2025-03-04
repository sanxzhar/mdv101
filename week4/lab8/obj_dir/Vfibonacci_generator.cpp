// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfibonacci_generator__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vfibonacci_generator::Vfibonacci_generator(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfibonacci_generator__Syms(contextp(), _vcname__, this)}
    , rst{vlSymsp->TOP.rst}
    , clk{vlSymsp->TOP.clk}
    , enable{vlSymsp->TOP.enable}
    , fib_out{vlSymsp->TOP.fib_out}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vfibonacci_generator::Vfibonacci_generator(const char* _vcname__)
    : Vfibonacci_generator(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfibonacci_generator::~Vfibonacci_generator() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfibonacci_generator___024root___eval_debug_assertions(Vfibonacci_generator___024root* vlSelf);
#endif  // VL_DEBUG
void Vfibonacci_generator___024root___eval_static(Vfibonacci_generator___024root* vlSelf);
void Vfibonacci_generator___024root___eval_initial(Vfibonacci_generator___024root* vlSelf);
void Vfibonacci_generator___024root___eval_settle(Vfibonacci_generator___024root* vlSelf);
void Vfibonacci_generator___024root___eval(Vfibonacci_generator___024root* vlSelf);

void Vfibonacci_generator::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfibonacci_generator::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfibonacci_generator___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfibonacci_generator___024root___eval_static(&(vlSymsp->TOP));
        Vfibonacci_generator___024root___eval_initial(&(vlSymsp->TOP));
        Vfibonacci_generator___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfibonacci_generator___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfibonacci_generator::eventsPending() { return false; }

uint64_t Vfibonacci_generator::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vfibonacci_generator::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfibonacci_generator___024root___eval_final(Vfibonacci_generator___024root* vlSelf);

VL_ATTR_COLD void Vfibonacci_generator::final() {
    Vfibonacci_generator___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfibonacci_generator::hierName() const { return vlSymsp->name(); }
const char* Vfibonacci_generator::modelName() const { return "Vfibonacci_generator"; }
unsigned Vfibonacci_generator::threads() const { return 1; }
void Vfibonacci_generator::prepareClone() const { contextp()->prepareClone(); }
void Vfibonacci_generator::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vfibonacci_generator::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vfibonacci_generator___024root__trace_decl_types(VerilatedVcd* tracep);

void Vfibonacci_generator___024root__trace_init_top(Vfibonacci_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vfibonacci_generator___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vfibonacci_generator___024root*>(voidSelf);
    Vfibonacci_generator__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vfibonacci_generator___024root__trace_decl_types(tracep);
    Vfibonacci_generator___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vfibonacci_generator___024root__trace_register(Vfibonacci_generator___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vfibonacci_generator::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vfibonacci_generator::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vfibonacci_generator___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
