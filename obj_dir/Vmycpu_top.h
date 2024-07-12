// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VMYCPU_TOP_H_
#define VERILATED_VMYCPU_TOP_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;
class Vmycpu_top___024root;
class VerilatedVcdC;
class Vmycpu_top_UnorderedIssue;


// This class is the main interface to the Verilated model
class Vmycpu_top VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vmycpu_top__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&aclk,0,0);
    VL_IN8(&aresetn,0,0);
    VL_OUT8(&arid,3,0);
    VL_OUT8(&arlen,7,0);
    VL_OUT8(&arsize,2,0);
    VL_OUT8(&arburst,1,0);
    VL_OUT8(&arlock,1,0);
    VL_OUT8(&arcache,3,0);
    VL_OUT8(&arprot,2,0);
    VL_OUT8(&arvalid,0,0);
    VL_IN8(&arready,0,0);
    VL_IN8(&rid,3,0);
    VL_IN8(&rresp,1,0);
    VL_IN8(&rlast,0,0);
    VL_IN8(&rvalid,0,0);
    VL_OUT8(&rready,0,0);
    VL_OUT8(&awid,3,0);
    VL_OUT8(&awlen,7,0);
    VL_OUT8(&awsize,2,0);
    VL_OUT8(&awburst,1,0);
    VL_OUT8(&awlock,1,0);
    VL_OUT8(&awcache,3,0);
    VL_OUT8(&awprot,2,0);
    VL_OUT8(&awvalid,0,0);
    VL_IN8(&awready,0,0);
    VL_OUT8(&wid,3,0);
    VL_OUT8(&wstrb,3,0);
    VL_OUT8(&wlast,0,0);
    VL_OUT8(&wvalid,0,0);
    VL_IN8(&wready,0,0);
    VL_IN8(&bid,3,0);
    VL_IN8(&bresp,1,0);
    VL_IN8(&bvalid,0,0);
    VL_OUT8(&bready,0,0);
    VL_OUT8(&debug_wb_rf_we,3,0);
    VL_OUT8(&debug_wb_rf_wnum,4,0);
    VL_OUT(&araddr,31,0);
    VL_IN(&rdata,31,0);
    VL_OUT(&awaddr,31,0);
    VL_OUT(&wdata,31,0);
    VL_OUT(&debug_wb_pc,31,0);
    VL_OUT(&debug_wb_rf_wdata,31,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vmycpu_top_UnorderedIssue* const __PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue;
    Vmycpu_top_UnorderedIssue* const __PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vmycpu_top___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vmycpu_top(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vmycpu_top(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vmycpu_top();
  private:
    VL_UNCOPYABLE(Vmycpu_top);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
