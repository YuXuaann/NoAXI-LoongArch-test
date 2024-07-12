// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"

#include "Vmycpu_top__Syms.h"
#include "Vmycpu_top___024root.h"

void Vmycpu_top___024root___nba_sequent__TOP__0(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__1(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__2(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__3(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__4(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__5(Vmycpu_top___024root* vlSelf);
void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__0(Vmycpu_top_UnorderedIssue* vlSelf);
void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__0(Vmycpu_top_UnorderedIssue* vlSelf);
void Vmycpu_top___024root___nba_sequent__TOP__6(Vmycpu_top___024root* vlSelf);
void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__1(Vmycpu_top_UnorderedIssue* vlSelf);
void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__1(Vmycpu_top_UnorderedIssue* vlSelf);

void Vmycpu_top___024root___eval_nba(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vmycpu_top___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        Vmycpu_top___024root___nba_sequent__TOP__1(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__2(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__3(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__4(vlSelf);
        Vmycpu_top___024root___nba_sequent__TOP__5(vlSelf);
        Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__0((&vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1));
        Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__0((&vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue));
        Vmycpu_top___024root___nba_sequent__TOP__6(vlSelf);
        Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__1((&vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue));
        Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__1((&vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1));
    }
}
