// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmycpu_top.h"
#include "Vmycpu_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmycpu_top::Vmycpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmycpu_top__Syms(contextp(), _vcname__, this)}
    , aclk{vlSymsp->TOP.aclk}
    , aresetn{vlSymsp->TOP.aresetn}
    , arid{vlSymsp->TOP.arid}
    , arlen{vlSymsp->TOP.arlen}
    , arsize{vlSymsp->TOP.arsize}
    , arburst{vlSymsp->TOP.arburst}
    , arlock{vlSymsp->TOP.arlock}
    , arcache{vlSymsp->TOP.arcache}
    , arprot{vlSymsp->TOP.arprot}
    , arvalid{vlSymsp->TOP.arvalid}
    , arready{vlSymsp->TOP.arready}
    , rid{vlSymsp->TOP.rid}
    , rresp{vlSymsp->TOP.rresp}
    , rlast{vlSymsp->TOP.rlast}
    , rvalid{vlSymsp->TOP.rvalid}
    , rready{vlSymsp->TOP.rready}
    , awid{vlSymsp->TOP.awid}
    , awlen{vlSymsp->TOP.awlen}
    , awsize{vlSymsp->TOP.awsize}
    , awburst{vlSymsp->TOP.awburst}
    , awlock{vlSymsp->TOP.awlock}
    , awcache{vlSymsp->TOP.awcache}
    , awprot{vlSymsp->TOP.awprot}
    , awvalid{vlSymsp->TOP.awvalid}
    , awready{vlSymsp->TOP.awready}
    , wid{vlSymsp->TOP.wid}
    , wstrb{vlSymsp->TOP.wstrb}
    , wlast{vlSymsp->TOP.wlast}
    , wvalid{vlSymsp->TOP.wvalid}
    , wready{vlSymsp->TOP.wready}
    , bid{vlSymsp->TOP.bid}
    , bresp{vlSymsp->TOP.bresp}
    , bvalid{vlSymsp->TOP.bvalid}
    , bready{vlSymsp->TOP.bready}
    , debug_wb_rf_we{vlSymsp->TOP.debug_wb_rf_we}
    , debug_wb_rf_wnum{vlSymsp->TOP.debug_wb_rf_wnum}
    , araddr{vlSymsp->TOP.araddr}
    , rdata{vlSymsp->TOP.rdata}
    , awaddr{vlSymsp->TOP.awaddr}
    , wdata{vlSymsp->TOP.wdata}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , debug_wb_rf_wdata{vlSymsp->TOP.debug_wb_rf_wdata}
    , __PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue{vlSymsp->TOP.__PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue}
    , __PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1{vlSymsp->TOP.__PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmycpu_top::Vmycpu_top(const char* _vcname__)
    : Vmycpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmycpu_top::~Vmycpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___eval_static(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf);

void Vmycpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmycpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmycpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmycpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmycpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmycpu_top::eventsPending() { return false; }

uint64_t Vmycpu_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmycpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmycpu_top___024root___eval_final(Vmycpu_top___024root* vlSelf);

VL_ATTR_COLD void Vmycpu_top::final() {
    Vmycpu_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmycpu_top::hierName() const { return vlSymsp->name(); }
const char* Vmycpu_top::modelName() const { return "Vmycpu_top"; }
unsigned Vmycpu_top::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vmycpu_top::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmycpu_top___024root__trace_init_top(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmycpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vmycpu_top___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vmycpu_top___024root__trace_register(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vmycpu_top::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmycpu_top::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmycpu_top___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
