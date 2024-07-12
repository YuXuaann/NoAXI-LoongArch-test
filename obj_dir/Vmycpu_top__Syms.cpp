// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top.h"
#include "Vmycpu_top___024root.h"
#include "Vmycpu_top_UnorderedIssue.h"

// FUNCTIONS
Vmycpu_top__Syms::~Vmycpu_top__Syms()
{
}

Vmycpu_top__Syms::Vmycpu_top__Syms(VerilatedContext* contextp, const char* namep, Vmycpu_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue{this, Verilated::catName(namep, "mycpu_top.core.IssueTop.UnorderedIssue")}
    , TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1{this, Verilated::catName(namep, "mycpu_top.core.IssueTop.UnorderedIssue_1")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue = &TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue;
    TOP.__PVT__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1 = &TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__Vconfigure(true);
    TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__Vconfigure(false);
}
