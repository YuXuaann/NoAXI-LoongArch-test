// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"

#include "Vmycpu_top_UnorderedIssue.h"
#include "Vmycpu_top__Syms.h"

void Vmycpu_top_UnorderedIssue___ctor_var_reset(Vmycpu_top_UnorderedIssue* vlSelf);

Vmycpu_top_UnorderedIssue::Vmycpu_top_UnorderedIssue(Vmycpu_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmycpu_top_UnorderedIssue___ctor_var_reset(this);
}

void Vmycpu_top_UnorderedIssue::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmycpu_top_UnorderedIssue::~Vmycpu_top_UnorderedIssue() {
}
