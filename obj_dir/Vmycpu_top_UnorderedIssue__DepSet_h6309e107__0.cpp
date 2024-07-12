// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "verilated.h"

#include "Vmycpu_top_UnorderedIssue.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__0(Vmycpu_top_UnorderedIssue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__mem_3_src1Ispc;
    __Vdly__mem_3_src1Ispc = 0;
    CData/*0:0*/ __Vdly__mem_3_src1IsZero;
    __Vdly__mem_3_src1IsZero = 0;
    CData/*0:0*/ __Vdly__mem_3_src2IsFour;
    __Vdly__mem_3_src2IsFour = 0;
    CData/*0:0*/ __Vdly__mem_3_src2IsImm;
    __Vdly__mem_3_src2IsImm = 0;
    CData/*0:0*/ __Vdly__mem_3_iswf;
    __Vdly__mem_3_iswf = 0;
    CData/*0:0*/ __Vdly__mem_3_predict_en;
    __Vdly__mem_3_predict_en = 0;
    CData/*0:0*/ __Vdly__mem_3_realBr_en;
    __Vdly__mem_3_realBr_en = 0;
    CData/*1:0*/ __Vdly__topPtr;
    __Vdly__topPtr = 0;
    // Body
    __Vdly__mem_3_realBr_en = vlSelf->__PVT__mem_3_realBr_en;
    __Vdly__mem_3_predict_en = vlSelf->__PVT__mem_3_predict_en;
    __Vdly__mem_3_iswf = vlSelf->__PVT__mem_3_iswf;
    __Vdly__mem_3_src2IsImm = vlSelf->__PVT__mem_3_src2IsImm;
    __Vdly__mem_3_src2IsFour = vlSelf->__PVT__mem_3_src2IsFour;
    __Vdly__mem_3_src1IsZero = vlSelf->__PVT__mem_3_src1IsZero;
    __Vdly__mem_3_src1Ispc = vlSelf->__PVT__mem_3_src1Ispc;
    __Vdly__topPtr = vlSelf->__PVT__topPtr;
    if (vlSymsp->TOP.aresetn) {
        vlSelf->__PVT__maybeFull = ((~ (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT___FlushCtrl_io_backFlush)) 
                                    & ((IData)(vlSelf->__PVT___GEN_0)
                                        ? (IData)(vlSelf->__PVT__maybeFull)
                                        : (IData)(vlSelf->__PVT___GEN)));
        if (((IData)(vlSelf->__PVT___GEN) & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->__PVT__topPtr)))))) {
            if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_0_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_0_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_0_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_0_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_0_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_0_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_0_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_0_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_0_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_0_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_0_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_0_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_0_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_0_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_0_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_0_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_0_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_0_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_0_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_0_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_0_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_0_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_0_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_0_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_0_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_0_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_0_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_0_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_0_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_0_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_0_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_0_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_0_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_0_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_0_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_0_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_0_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_0_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_0_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_0_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_0_pc = 0U;
                vlSelf->__PVT__mem_0_inst = 0U;
                vlSelf->__PVT__mem_0_func_type = 0U;
                vlSelf->__PVT__mem_0_op_type = 0U;
                vlSelf->__PVT__mem_0_imm = 0U;
                vlSelf->__PVT__mem_0_opreg = 0U;
                vlSelf->__PVT__mem_0_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_0_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_0_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_0_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_0_robId = 0U;
                vlSelf->__PVT__mem_0_exc_type = 0U;
                vlSelf->__PVT__mem_0_predict_tar = 0U;
                vlSelf->__PVT__mem_0_src1Ispc = 0U;
                vlSelf->__PVT__mem_0_src1IsZero = 0U;
                vlSelf->__PVT__mem_0_src2IsFour = 0U;
                vlSelf->__PVT__mem_0_src2IsImm = 0U;
                vlSelf->__PVT__mem_0_iswf = 0U;
                vlSelf->__PVT__mem_0_predict_en = 0U;
                vlSelf->__PVT__mem_0_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__hitVec_0) {
            vlSelf->__PVT__mem_0_pc = vlSelf->__PVT__mem_1_pc;
            vlSelf->__PVT__mem_0_inst = vlSelf->__PVT__mem_1_inst;
            vlSelf->__PVT__mem_0_func_type = vlSelf->__PVT__mem_1_func_type;
            vlSelf->__PVT__mem_0_op_type = vlSelf->__PVT__mem_1_op_type;
            vlSelf->__PVT__mem_0_imm = vlSelf->__PVT__mem_1_imm;
            vlSelf->__PVT__mem_0_src1Ispc = vlSelf->__PVT__mem_1_src1Ispc;
            vlSelf->__PVT__mem_0_src1IsZero = vlSelf->__PVT__mem_1_src1IsZero;
            vlSelf->__PVT__mem_0_src2IsFour = vlSelf->__PVT__mem_1_src2IsFour;
            vlSelf->__PVT__mem_0_src2IsImm = vlSelf->__PVT__mem_1_src2IsImm;
            vlSelf->__PVT__mem_0_iswf = vlSelf->__PVT__mem_1_iswf;
            vlSelf->__PVT__mem_0_opreg = vlSelf->__PVT__mem_1_opreg;
            vlSelf->__PVT__mem_0_rjInfo_preg = vlSelf->__PVT__mem_1_rjInfo_preg;
            vlSelf->__PVT__mem_0_rkInfo_preg = vlSelf->__PVT__mem_1_rkInfo_preg;
            vlSelf->__PVT__mem_0_rdInfo_areg = vlSelf->__PVT__mem_1_rdInfo_areg;
            vlSelf->__PVT__mem_0_rdInfo_preg = vlSelf->__PVT__mem_1_rdInfo_preg;
            vlSelf->__PVT__mem_0_robId = vlSelf->__PVT__mem_1_robId;
            vlSelf->__PVT__mem_0_exc_type = vlSelf->__PVT__mem_1_exc_type;
            vlSelf->__PVT__mem_0_predict_en = vlSelf->__PVT__mem_1_predict_en;
            vlSelf->__PVT__mem_0_predict_tar = vlSelf->__PVT__mem_1_predict_tar;
            vlSelf->__PVT__mem_0_realBr_en = vlSelf->__PVT__mem_1_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (1U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_1_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_1_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_1_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_1_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_1_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_1_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_1_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_1_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_1_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_1_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_1_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_1_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_1_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_1_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_1_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_1_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_1_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_1_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_1_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_1_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_1_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_1_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_1_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_1_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_1_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_1_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_1_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_1_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_1_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_1_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_1_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_1_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_1_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_1_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_1_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_1_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_1_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_1_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_1_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_1_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_1_pc = 0U;
                vlSelf->__PVT__mem_1_inst = 0U;
                vlSelf->__PVT__mem_1_func_type = 0U;
                vlSelf->__PVT__mem_1_op_type = 0U;
                vlSelf->__PVT__mem_1_imm = 0U;
                vlSelf->__PVT__mem_1_opreg = 0U;
                vlSelf->__PVT__mem_1_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_1_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_1_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_1_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_1_robId = 0U;
                vlSelf->__PVT__mem_1_exc_type = 0U;
                vlSelf->__PVT__mem_1_predict_tar = 0U;
                vlSelf->__PVT__mem_1_src1Ispc = 0U;
                vlSelf->__PVT__mem_1_src1IsZero = 0U;
                vlSelf->__PVT__mem_1_src2IsFour = 0U;
                vlSelf->__PVT__mem_1_src2IsImm = 0U;
                vlSelf->__PVT__mem_1_iswf = 0U;
                vlSelf->__PVT__mem_1_predict_en = 0U;
                vlSelf->__PVT__mem_1_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__shiftVec_1) {
            vlSelf->__PVT__mem_1_pc = vlSelf->__PVT__mem_2_pc;
            vlSelf->__PVT__mem_1_inst = vlSelf->__PVT__mem_2_inst;
            vlSelf->__PVT__mem_1_func_type = vlSelf->__PVT__mem_2_func_type;
            vlSelf->__PVT__mem_1_op_type = vlSelf->__PVT__mem_2_op_type;
            vlSelf->__PVT__mem_1_imm = vlSelf->__PVT__mem_2_imm;
            vlSelf->__PVT__mem_1_src1Ispc = vlSelf->__PVT__mem_2_src1Ispc;
            vlSelf->__PVT__mem_1_src1IsZero = vlSelf->__PVT__mem_2_src1IsZero;
            vlSelf->__PVT__mem_1_src2IsFour = vlSelf->__PVT__mem_2_src2IsFour;
            vlSelf->__PVT__mem_1_src2IsImm = vlSelf->__PVT__mem_2_src2IsImm;
            vlSelf->__PVT__mem_1_iswf = vlSelf->__PVT__mem_2_iswf;
            vlSelf->__PVT__mem_1_opreg = vlSelf->__PVT__mem_2_opreg;
            vlSelf->__PVT__mem_1_rjInfo_preg = vlSelf->__PVT__mem_2_rjInfo_preg;
            vlSelf->__PVT__mem_1_rkInfo_preg = vlSelf->__PVT__mem_2_rkInfo_preg;
            vlSelf->__PVT__mem_1_rdInfo_areg = vlSelf->__PVT__mem_2_rdInfo_areg;
            vlSelf->__PVT__mem_1_rdInfo_preg = vlSelf->__PVT__mem_2_rdInfo_preg;
            vlSelf->__PVT__mem_1_robId = vlSelf->__PVT__mem_2_robId;
            vlSelf->__PVT__mem_1_exc_type = vlSelf->__PVT__mem_2_exc_type;
            vlSelf->__PVT__mem_1_predict_en = vlSelf->__PVT__mem_2_predict_en;
            vlSelf->__PVT__mem_1_predict_tar = vlSelf->__PVT__mem_2_predict_tar;
            vlSelf->__PVT__mem_1_realBr_en = vlSelf->__PVT__mem_2_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (2U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_2_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_2_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_2_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_2_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_2_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_2_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_2_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_2_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_2_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_2_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_2_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_2_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_2_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_2_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_2_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_2_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_2_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_2_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_2_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_2_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_2_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_2_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_2_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_2_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_2_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_2_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_2_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_2_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_2_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_2_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_2_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_2_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_2_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_2_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_2_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_2_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_2_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_2_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_2_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_2_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_2_pc = 0U;
                vlSelf->__PVT__mem_2_inst = 0U;
                vlSelf->__PVT__mem_2_func_type = 0U;
                vlSelf->__PVT__mem_2_op_type = 0U;
                vlSelf->__PVT__mem_2_imm = 0U;
                vlSelf->__PVT__mem_2_opreg = 0U;
                vlSelf->__PVT__mem_2_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_2_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_2_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_2_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_2_robId = 0U;
                vlSelf->__PVT__mem_2_exc_type = 0U;
                vlSelf->__PVT__mem_2_predict_tar = 0U;
                vlSelf->__PVT__mem_2_src1Ispc = 0U;
                vlSelf->__PVT__mem_2_src1IsZero = 0U;
                vlSelf->__PVT__mem_2_src2IsFour = 0U;
                vlSelf->__PVT__mem_2_src2IsImm = 0U;
                vlSelf->__PVT__mem_2_iswf = 0U;
                vlSelf->__PVT__mem_2_predict_en = 0U;
                vlSelf->__PVT__mem_2_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__shiftVec_2) {
            vlSelf->__PVT__mem_2_pc = vlSelf->__PVT__mem_3_pc;
            vlSelf->__PVT__mem_2_inst = vlSelf->__PVT__mem_3_inst;
            vlSelf->__PVT__mem_2_func_type = vlSelf->__PVT__mem_3_func_type;
            vlSelf->__PVT__mem_2_op_type = vlSelf->__PVT__mem_3_op_type;
            vlSelf->__PVT__mem_2_imm = vlSelf->__PVT__mem_3_imm;
            vlSelf->__PVT__mem_2_src1Ispc = vlSelf->__PVT__mem_3_src1Ispc;
            vlSelf->__PVT__mem_2_src1IsZero = vlSelf->__PVT__mem_3_src1IsZero;
            vlSelf->__PVT__mem_2_src2IsFour = vlSelf->__PVT__mem_3_src2IsFour;
            vlSelf->__PVT__mem_2_src2IsImm = vlSelf->__PVT__mem_3_src2IsImm;
            vlSelf->__PVT__mem_2_iswf = vlSelf->__PVT__mem_3_iswf;
            vlSelf->__PVT__mem_2_opreg = vlSelf->__PVT__mem_3_opreg;
            vlSelf->__PVT__mem_2_rjInfo_preg = vlSelf->__PVT__mem_3_rjInfo_preg;
            vlSelf->__PVT__mem_2_rkInfo_preg = vlSelf->__PVT__mem_3_rkInfo_preg;
            vlSelf->__PVT__mem_2_rdInfo_areg = vlSelf->__PVT__mem_3_rdInfo_areg;
            vlSelf->__PVT__mem_2_rdInfo_preg = vlSelf->__PVT__mem_3_rdInfo_preg;
            vlSelf->__PVT__mem_2_robId = vlSelf->__PVT__mem_3_robId;
            vlSelf->__PVT__mem_2_exc_type = vlSelf->__PVT__mem_3_exc_type;
            vlSelf->__PVT__mem_2_predict_en = vlSelf->__PVT__mem_3_predict_en;
            vlSelf->__PVT__mem_2_predict_tar = vlSelf->__PVT__mem_3_predict_tar;
            vlSelf->__PVT__mem_2_realBr_en = vlSelf->__PVT__mem_3_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (3U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_3_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_3_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_3_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_3_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_3_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                __Vdly__mem_3_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                __Vdly__mem_3_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                __Vdly__mem_3_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                __Vdly__mem_3_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                __Vdly__mem_3_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_3_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_3_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_3_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_3_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_3_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_3_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_3_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                __Vdly__mem_3_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_3_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                __Vdly__mem_3_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((0U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_3_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_3_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_3_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_3_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_3_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_3_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_3_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_3_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_3_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_3_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_3_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_3_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_3_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                __Vdly__mem_3_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                __Vdly__mem_3_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                __Vdly__mem_3_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                __Vdly__mem_3_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                __Vdly__mem_3_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                __Vdly__mem_3_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                __Vdly__mem_3_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_3_pc = 0U;
                vlSelf->__PVT__mem_3_inst = 0U;
                vlSelf->__PVT__mem_3_func_type = 0U;
                vlSelf->__PVT__mem_3_op_type = 0U;
                vlSelf->__PVT__mem_3_imm = 0U;
                vlSelf->__PVT__mem_3_opreg = 0U;
                vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_3_robId = 0U;
                vlSelf->__PVT__mem_3_exc_type = 0U;
                vlSelf->__PVT__mem_3_predict_tar = 0U;
                __Vdly__mem_3_src1Ispc = 0U;
                __Vdly__mem_3_src1IsZero = 0U;
                __Vdly__mem_3_src2IsFour = 0U;
                __Vdly__mem_3_src2IsImm = 0U;
                __Vdly__mem_3_iswf = 0U;
                __Vdly__mem_3_predict_en = 0U;
                __Vdly__mem_3_realBr_en = 0U;
            }
        } else {
            __Vdly__mem_3_src1Ispc = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                      & (IData)(vlSelf->__PVT__mem_3_src1Ispc));
            __Vdly__mem_3_src1IsZero = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_src1IsZero));
            __Vdly__mem_3_src2IsFour = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_src2IsFour));
            __Vdly__mem_3_src2IsImm = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                       & (IData)(vlSelf->__PVT__mem_3_src2IsImm));
            __Vdly__mem_3_iswf = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                  & (IData)(vlSelf->__PVT__mem_3_iswf));
            __Vdly__mem_3_predict_en = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_predict_en));
            __Vdly__mem_3_realBr_en = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                       & (IData)(vlSelf->__PVT__mem_3_realBr_en));
            if (vlSelf->__PVT__shiftVec_3) {
                vlSelf->__PVT__mem_3_pc = 0U;
                vlSelf->__PVT__mem_3_inst = 0U;
                vlSelf->__PVT__mem_3_func_type = 0U;
                vlSelf->__PVT__mem_3_op_type = 0U;
                vlSelf->__PVT__mem_3_imm = 0U;
                vlSelf->__PVT__mem_3_opreg = 0U;
                vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_3_robId = 0U;
                vlSelf->__PVT__mem_3_exc_type = 0U;
                vlSelf->__PVT__mem_3_predict_tar = 0U;
            }
        }
        if (vlSymsp->TOP.mycpu_top__DOT__core__DOT___FlushCtrl_io_backFlush) {
            __Vdly__topPtr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT___GEN_0)))) {
            __Vdly__topPtr = (3U & ((IData)(vlSelf->__PVT___GEN)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__topPtr))
                                     : ((IData)(vlSelf->__PVT__topPtr) 
                                        - (IData)(1U))));
        }
    } else {
        vlSelf->__PVT__maybeFull = 0U;
        vlSelf->__PVT__mem_0_pc = 0U;
        vlSelf->__PVT__mem_0_inst = 0U;
        vlSelf->__PVT__mem_0_func_type = 0U;
        vlSelf->__PVT__mem_0_op_type = 0U;
        vlSelf->__PVT__mem_0_imm = 0U;
        vlSelf->__PVT__mem_0_src1Ispc = 0U;
        vlSelf->__PVT__mem_0_src1IsZero = 0U;
        vlSelf->__PVT__mem_0_src2IsFour = 0U;
        vlSelf->__PVT__mem_0_src2IsImm = 0U;
        vlSelf->__PVT__mem_0_iswf = 0U;
        vlSelf->__PVT__mem_0_opreg = 0U;
        vlSelf->__PVT__mem_0_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_0_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_0_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_0_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_0_robId = 0U;
        vlSelf->__PVT__mem_0_exc_type = 0U;
        vlSelf->__PVT__mem_0_predict_en = 0U;
        vlSelf->__PVT__mem_0_predict_tar = 0U;
        vlSelf->__PVT__mem_0_realBr_en = 0U;
        vlSelf->__PVT__mem_1_pc = 0U;
        vlSelf->__PVT__mem_1_inst = 0U;
        vlSelf->__PVT__mem_1_func_type = 0U;
        vlSelf->__PVT__mem_1_op_type = 0U;
        vlSelf->__PVT__mem_1_imm = 0U;
        vlSelf->__PVT__mem_1_src1Ispc = 0U;
        vlSelf->__PVT__mem_1_src1IsZero = 0U;
        vlSelf->__PVT__mem_1_src2IsFour = 0U;
        vlSelf->__PVT__mem_1_src2IsImm = 0U;
        vlSelf->__PVT__mem_1_iswf = 0U;
        vlSelf->__PVT__mem_1_opreg = 0U;
        vlSelf->__PVT__mem_1_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_1_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_1_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_1_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_1_robId = 0U;
        vlSelf->__PVT__mem_1_exc_type = 0U;
        vlSelf->__PVT__mem_1_predict_en = 0U;
        vlSelf->__PVT__mem_1_predict_tar = 0U;
        vlSelf->__PVT__mem_1_realBr_en = 0U;
        vlSelf->__PVT__mem_2_pc = 0U;
        vlSelf->__PVT__mem_2_inst = 0U;
        vlSelf->__PVT__mem_2_func_type = 0U;
        vlSelf->__PVT__mem_2_op_type = 0U;
        vlSelf->__PVT__mem_2_imm = 0U;
        vlSelf->__PVT__mem_2_src1Ispc = 0U;
        vlSelf->__PVT__mem_2_src1IsZero = 0U;
        vlSelf->__PVT__mem_2_src2IsFour = 0U;
        vlSelf->__PVT__mem_2_src2IsImm = 0U;
        vlSelf->__PVT__mem_2_iswf = 0U;
        vlSelf->__PVT__mem_2_opreg = 0U;
        vlSelf->__PVT__mem_2_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_2_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_2_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_2_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_2_robId = 0U;
        vlSelf->__PVT__mem_2_exc_type = 0U;
        vlSelf->__PVT__mem_2_predict_en = 0U;
        vlSelf->__PVT__mem_2_predict_tar = 0U;
        vlSelf->__PVT__mem_2_realBr_en = 0U;
        vlSelf->__PVT__mem_3_pc = 0U;
        vlSelf->__PVT__mem_3_inst = 0U;
        vlSelf->__PVT__mem_3_func_type = 0U;
        vlSelf->__PVT__mem_3_op_type = 0U;
        vlSelf->__PVT__mem_3_imm = 0U;
        __Vdly__mem_3_src1Ispc = 0U;
        __Vdly__mem_3_src1IsZero = 0U;
        __Vdly__mem_3_src2IsFour = 0U;
        __Vdly__mem_3_src2IsImm = 0U;
        __Vdly__mem_3_iswf = 0U;
        vlSelf->__PVT__mem_3_opreg = 0U;
        vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_3_robId = 0U;
        vlSelf->__PVT__mem_3_exc_type = 0U;
        __Vdly__mem_3_predict_en = 0U;
        vlSelf->__PVT__mem_3_predict_tar = 0U;
        __Vdly__mem_3_realBr_en = 0U;
        __Vdly__topPtr = 0U;
    }
    vlSelf->__PVT__mem_3_src1Ispc = __Vdly__mem_3_src1Ispc;
    vlSelf->__PVT__mem_3_src1IsZero = __Vdly__mem_3_src1IsZero;
    vlSelf->__PVT__mem_3_src2IsFour = __Vdly__mem_3_src2IsFour;
    vlSelf->__PVT__mem_3_src2IsImm = __Vdly__mem_3_src2IsImm;
    vlSelf->__PVT__mem_3_iswf = __Vdly__mem_3_iswf;
    vlSelf->__PVT__mem_3_predict_en = __Vdly__mem_3_predict_en;
    vlSelf->__PVT__mem_3_realBr_en = __Vdly__mem_3_realBr_en;
    vlSelf->__PVT__topPtr = __Vdly__topPtr;
    vlSelf->__PVT__casez_tmp_5 = ((0x20U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_6 = ((0x20U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_3 = ((0x20U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_4 = ((0x20U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp = ((0x20U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                 ? ((0x10U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                     ? ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                     : ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                 : ((0x10U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                     ? ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                     : ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_0 = ((0x20U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_1 = ((0x20U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_2 = ((0x20U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__full = ((~ (IData)((0U != (IData)(vlSelf->__PVT__topPtr)))) 
                           & (IData)(vlSelf->__PVT__maybeFull));
    vlSelf->__PVT__hitVec_2 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp_3)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_4)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg)))))))));
    vlSelf->__PVT__hitVec_0 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_0)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg)))))))));
    vlSelf->__PVT__hitVec_1 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp_1)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_2)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg)))))))));
    vlSelf->__PVT__shiftVec_1 = ((IData)(vlSelf->__PVT__hitVec_0) 
                                 | (IData)(vlSelf->__PVT__hitVec_1));
    vlSelf->__PVT__index = ((IData)(vlSelf->__PVT__hitVec_0)
                             ? 0U : ((IData)(vlSelf->__PVT__hitVec_1)
                                      ? 1U : (2U | 
                                              (1U & 
                                               (~ (IData)(vlSelf->__PVT__hitVec_2))))));
    vlSelf->__PVT__shiftVec_2 = ((IData)(vlSelf->__PVT__shiftVec_1) 
                                 | (IData)(vlSelf->__PVT__hitVec_2));
    vlSelf->__PVT__casez_tmp_21 = ((0U == (IData)(vlSelf->__PVT__index))
                                    ? (IData)(vlSelf->__PVT__mem_0_rdInfo_preg)
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? (IData)(vlSelf->__PVT__mem_1_rdInfo_preg)
                                        : ((2U == (IData)(vlSelf->__PVT__index))
                                            ? (IData)(vlSelf->__PVT__mem_2_rdInfo_preg)
                                            : (IData)(vlSelf->__PVT__mem_3_rdInfo_preg))));
    vlSelf->__PVT__shiftVec_3 = (1U & ((IData)(vlSelf->__PVT__shiftVec_2) 
                                       | ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                              | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                                 | ((~ (IData)(vlSelf->__PVT__casez_tmp_5)) 
                                                    | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                          == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))))))) 
                                          & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                              & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                                 == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                             | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                                 & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                                | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                                   | ((~ (IData)(vlSelf->__PVT__casez_tmp_6)) 
                                                      | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                            == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))))))))));
    vlSelf->io_to_valid = ((~ ((~ (IData)(vlSelf->__PVT__maybeFull)) 
                               & (~ (IData)((0U != (IData)(vlSelf->__PVT__topPtr)))))) 
                           & (IData)(vlSelf->__PVT__shiftVec_3));
}

VL_INLINE_OPT void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__1(Vmycpu_top_UnorderedIssue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue__1\n"); );
    // Body
    vlSelf->__PVT___GEN = ((~ (IData)(vlSelf->__PVT__full)) 
                           & (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_0_valid_0));
    vlSelf->__PVT___GEN_0 = ((IData)(vlSelf->__PVT___GEN) 
                             == (IData)(vlSelf->io_to_valid));
}

VL_INLINE_OPT void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__0(Vmycpu_top_UnorderedIssue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__mem_3_src1Ispc;
    __Vdly__mem_3_src1Ispc = 0;
    CData/*0:0*/ __Vdly__mem_3_src1IsZero;
    __Vdly__mem_3_src1IsZero = 0;
    CData/*0:0*/ __Vdly__mem_3_src2IsFour;
    __Vdly__mem_3_src2IsFour = 0;
    CData/*0:0*/ __Vdly__mem_3_src2IsImm;
    __Vdly__mem_3_src2IsImm = 0;
    CData/*0:0*/ __Vdly__mem_3_iswf;
    __Vdly__mem_3_iswf = 0;
    CData/*0:0*/ __Vdly__mem_3_predict_en;
    __Vdly__mem_3_predict_en = 0;
    CData/*0:0*/ __Vdly__mem_3_realBr_en;
    __Vdly__mem_3_realBr_en = 0;
    CData/*1:0*/ __Vdly__topPtr;
    __Vdly__topPtr = 0;
    // Body
    __Vdly__mem_3_realBr_en = vlSelf->__PVT__mem_3_realBr_en;
    __Vdly__mem_3_predict_en = vlSelf->__PVT__mem_3_predict_en;
    __Vdly__mem_3_iswf = vlSelf->__PVT__mem_3_iswf;
    __Vdly__mem_3_src2IsImm = vlSelf->__PVT__mem_3_src2IsImm;
    __Vdly__mem_3_src2IsFour = vlSelf->__PVT__mem_3_src2IsFour;
    __Vdly__mem_3_src1IsZero = vlSelf->__PVT__mem_3_src1IsZero;
    __Vdly__mem_3_src1Ispc = vlSelf->__PVT__mem_3_src1Ispc;
    __Vdly__topPtr = vlSelf->__PVT__topPtr;
    if (vlSymsp->TOP.aresetn) {
        vlSelf->__PVT__maybeFull = ((~ (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT___FlushCtrl_io_backFlush)) 
                                    & ((IData)(vlSelf->__PVT___GEN_0)
                                        ? (IData)(vlSelf->__PVT__maybeFull)
                                        : (IData)(vlSelf->__PVT___GEN)));
        if (((IData)(vlSelf->__PVT___GEN) & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->__PVT__topPtr)))))) {
            if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_0_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_0_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_0_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_0_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_0_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_0_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_0_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_0_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_0_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_0_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_0_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_0_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_0_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_0_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_0_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_0_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_0_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_0_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_0_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_0_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_0_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_0_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_0_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_0_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_0_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_0_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_0_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_0_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_0_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_0_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_0_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_0_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_0_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_0_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_0_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_0_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_0_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_0_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_0_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_0_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_0_pc = 0U;
                vlSelf->__PVT__mem_0_inst = 0U;
                vlSelf->__PVT__mem_0_func_type = 0U;
                vlSelf->__PVT__mem_0_op_type = 0U;
                vlSelf->__PVT__mem_0_imm = 0U;
                vlSelf->__PVT__mem_0_opreg = 0U;
                vlSelf->__PVT__mem_0_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_0_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_0_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_0_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_0_robId = 0U;
                vlSelf->__PVT__mem_0_exc_type = 0U;
                vlSelf->__PVT__mem_0_predict_tar = 0U;
                vlSelf->__PVT__mem_0_src1Ispc = 0U;
                vlSelf->__PVT__mem_0_src1IsZero = 0U;
                vlSelf->__PVT__mem_0_src2IsFour = 0U;
                vlSelf->__PVT__mem_0_src2IsImm = 0U;
                vlSelf->__PVT__mem_0_iswf = 0U;
                vlSelf->__PVT__mem_0_predict_en = 0U;
                vlSelf->__PVT__mem_0_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__hitVec_0) {
            vlSelf->__PVT__mem_0_pc = vlSelf->__PVT__mem_1_pc;
            vlSelf->__PVT__mem_0_inst = vlSelf->__PVT__mem_1_inst;
            vlSelf->__PVT__mem_0_func_type = vlSelf->__PVT__mem_1_func_type;
            vlSelf->__PVT__mem_0_op_type = vlSelf->__PVT__mem_1_op_type;
            vlSelf->__PVT__mem_0_imm = vlSelf->__PVT__mem_1_imm;
            vlSelf->__PVT__mem_0_src1Ispc = vlSelf->__PVT__mem_1_src1Ispc;
            vlSelf->__PVT__mem_0_src1IsZero = vlSelf->__PVT__mem_1_src1IsZero;
            vlSelf->__PVT__mem_0_src2IsFour = vlSelf->__PVT__mem_1_src2IsFour;
            vlSelf->__PVT__mem_0_src2IsImm = vlSelf->__PVT__mem_1_src2IsImm;
            vlSelf->__PVT__mem_0_iswf = vlSelf->__PVT__mem_1_iswf;
            vlSelf->__PVT__mem_0_opreg = vlSelf->__PVT__mem_1_opreg;
            vlSelf->__PVT__mem_0_rjInfo_preg = vlSelf->__PVT__mem_1_rjInfo_preg;
            vlSelf->__PVT__mem_0_rkInfo_preg = vlSelf->__PVT__mem_1_rkInfo_preg;
            vlSelf->__PVT__mem_0_rdInfo_areg = vlSelf->__PVT__mem_1_rdInfo_areg;
            vlSelf->__PVT__mem_0_rdInfo_preg = vlSelf->__PVT__mem_1_rdInfo_preg;
            vlSelf->__PVT__mem_0_robId = vlSelf->__PVT__mem_1_robId;
            vlSelf->__PVT__mem_0_exc_type = vlSelf->__PVT__mem_1_exc_type;
            vlSelf->__PVT__mem_0_predict_en = vlSelf->__PVT__mem_1_predict_en;
            vlSelf->__PVT__mem_0_predict_tar = vlSelf->__PVT__mem_1_predict_tar;
            vlSelf->__PVT__mem_0_realBr_en = vlSelf->__PVT__mem_1_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (1U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_1_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_1_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_1_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_1_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_1_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_1_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_1_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_1_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_1_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_1_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_1_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_1_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_1_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_1_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_1_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_1_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_1_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_1_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_1_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_1_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_1_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_1_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_1_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_1_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_1_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_1_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_1_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_1_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_1_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_1_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_1_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_1_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_1_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_1_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_1_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_1_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_1_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_1_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_1_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_1_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_1_pc = 0U;
                vlSelf->__PVT__mem_1_inst = 0U;
                vlSelf->__PVT__mem_1_func_type = 0U;
                vlSelf->__PVT__mem_1_op_type = 0U;
                vlSelf->__PVT__mem_1_imm = 0U;
                vlSelf->__PVT__mem_1_opreg = 0U;
                vlSelf->__PVT__mem_1_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_1_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_1_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_1_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_1_robId = 0U;
                vlSelf->__PVT__mem_1_exc_type = 0U;
                vlSelf->__PVT__mem_1_predict_tar = 0U;
                vlSelf->__PVT__mem_1_src1Ispc = 0U;
                vlSelf->__PVT__mem_1_src1IsZero = 0U;
                vlSelf->__PVT__mem_1_src2IsFour = 0U;
                vlSelf->__PVT__mem_1_src2IsImm = 0U;
                vlSelf->__PVT__mem_1_iswf = 0U;
                vlSelf->__PVT__mem_1_predict_en = 0U;
                vlSelf->__PVT__mem_1_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__shiftVec_1) {
            vlSelf->__PVT__mem_1_pc = vlSelf->__PVT__mem_2_pc;
            vlSelf->__PVT__mem_1_inst = vlSelf->__PVT__mem_2_inst;
            vlSelf->__PVT__mem_1_func_type = vlSelf->__PVT__mem_2_func_type;
            vlSelf->__PVT__mem_1_op_type = vlSelf->__PVT__mem_2_op_type;
            vlSelf->__PVT__mem_1_imm = vlSelf->__PVT__mem_2_imm;
            vlSelf->__PVT__mem_1_src1Ispc = vlSelf->__PVT__mem_2_src1Ispc;
            vlSelf->__PVT__mem_1_src1IsZero = vlSelf->__PVT__mem_2_src1IsZero;
            vlSelf->__PVT__mem_1_src2IsFour = vlSelf->__PVT__mem_2_src2IsFour;
            vlSelf->__PVT__mem_1_src2IsImm = vlSelf->__PVT__mem_2_src2IsImm;
            vlSelf->__PVT__mem_1_iswf = vlSelf->__PVT__mem_2_iswf;
            vlSelf->__PVT__mem_1_opreg = vlSelf->__PVT__mem_2_opreg;
            vlSelf->__PVT__mem_1_rjInfo_preg = vlSelf->__PVT__mem_2_rjInfo_preg;
            vlSelf->__PVT__mem_1_rkInfo_preg = vlSelf->__PVT__mem_2_rkInfo_preg;
            vlSelf->__PVT__mem_1_rdInfo_areg = vlSelf->__PVT__mem_2_rdInfo_areg;
            vlSelf->__PVT__mem_1_rdInfo_preg = vlSelf->__PVT__mem_2_rdInfo_preg;
            vlSelf->__PVT__mem_1_robId = vlSelf->__PVT__mem_2_robId;
            vlSelf->__PVT__mem_1_exc_type = vlSelf->__PVT__mem_2_exc_type;
            vlSelf->__PVT__mem_1_predict_en = vlSelf->__PVT__mem_2_predict_en;
            vlSelf->__PVT__mem_1_predict_tar = vlSelf->__PVT__mem_2_predict_tar;
            vlSelf->__PVT__mem_1_realBr_en = vlSelf->__PVT__mem_2_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (2U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_2_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_2_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_2_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_2_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_2_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                vlSelf->__PVT__mem_2_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                vlSelf->__PVT__mem_2_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                vlSelf->__PVT__mem_2_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                vlSelf->__PVT__mem_2_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                vlSelf->__PVT__mem_2_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_2_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_2_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_2_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_2_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_2_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_2_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_2_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                vlSelf->__PVT__mem_2_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_2_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                vlSelf->__PVT__mem_2_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_2_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_2_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_2_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_2_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_2_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_2_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_2_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_2_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_2_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_2_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_2_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_2_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_2_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                vlSelf->__PVT__mem_2_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                vlSelf->__PVT__mem_2_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                vlSelf->__PVT__mem_2_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                vlSelf->__PVT__mem_2_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                vlSelf->__PVT__mem_2_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                vlSelf->__PVT__mem_2_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                vlSelf->__PVT__mem_2_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_2_pc = 0U;
                vlSelf->__PVT__mem_2_inst = 0U;
                vlSelf->__PVT__mem_2_func_type = 0U;
                vlSelf->__PVT__mem_2_op_type = 0U;
                vlSelf->__PVT__mem_2_imm = 0U;
                vlSelf->__PVT__mem_2_opreg = 0U;
                vlSelf->__PVT__mem_2_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_2_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_2_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_2_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_2_robId = 0U;
                vlSelf->__PVT__mem_2_exc_type = 0U;
                vlSelf->__PVT__mem_2_predict_tar = 0U;
                vlSelf->__PVT__mem_2_src1Ispc = 0U;
                vlSelf->__PVT__mem_2_src1IsZero = 0U;
                vlSelf->__PVT__mem_2_src2IsFour = 0U;
                vlSelf->__PVT__mem_2_src2IsImm = 0U;
                vlSelf->__PVT__mem_2_iswf = 0U;
                vlSelf->__PVT__mem_2_predict_en = 0U;
                vlSelf->__PVT__mem_2_realBr_en = 0U;
            }
        } else if (vlSelf->__PVT__shiftVec_2) {
            vlSelf->__PVT__mem_2_pc = vlSelf->__PVT__mem_3_pc;
            vlSelf->__PVT__mem_2_inst = vlSelf->__PVT__mem_3_inst;
            vlSelf->__PVT__mem_2_func_type = vlSelf->__PVT__mem_3_func_type;
            vlSelf->__PVT__mem_2_op_type = vlSelf->__PVT__mem_3_op_type;
            vlSelf->__PVT__mem_2_imm = vlSelf->__PVT__mem_3_imm;
            vlSelf->__PVT__mem_2_src1Ispc = vlSelf->__PVT__mem_3_src1Ispc;
            vlSelf->__PVT__mem_2_src1IsZero = vlSelf->__PVT__mem_3_src1IsZero;
            vlSelf->__PVT__mem_2_src2IsFour = vlSelf->__PVT__mem_3_src2IsFour;
            vlSelf->__PVT__mem_2_src2IsImm = vlSelf->__PVT__mem_3_src2IsImm;
            vlSelf->__PVT__mem_2_iswf = vlSelf->__PVT__mem_3_iswf;
            vlSelf->__PVT__mem_2_opreg = vlSelf->__PVT__mem_3_opreg;
            vlSelf->__PVT__mem_2_rjInfo_preg = vlSelf->__PVT__mem_3_rjInfo_preg;
            vlSelf->__PVT__mem_2_rkInfo_preg = vlSelf->__PVT__mem_3_rkInfo_preg;
            vlSelf->__PVT__mem_2_rdInfo_areg = vlSelf->__PVT__mem_3_rdInfo_areg;
            vlSelf->__PVT__mem_2_rdInfo_preg = vlSelf->__PVT__mem_3_rdInfo_preg;
            vlSelf->__PVT__mem_2_robId = vlSelf->__PVT__mem_3_robId;
            vlSelf->__PVT__mem_2_exc_type = vlSelf->__PVT__mem_3_exc_type;
            vlSelf->__PVT__mem_2_predict_en = vlSelf->__PVT__mem_3_predict_en;
            vlSelf->__PVT__mem_2_predict_tar = vlSelf->__PVT__mem_3_predict_tar;
            vlSelf->__PVT__mem_2_realBr_en = vlSelf->__PVT__mem_3_realBr_en;
        }
        if (((IData)(vlSelf->__PVT___GEN) & (3U == (IData)(vlSelf->__PVT__topPtr)))) {
            if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))) {
                vlSelf->__PVT__mem_3_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc;
                vlSelf->__PVT__mem_3_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst;
                vlSelf->__PVT__mem_3_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type;
                vlSelf->__PVT__mem_3_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type;
                vlSelf->__PVT__mem_3_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm;
                __Vdly__mem_3_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc;
                __Vdly__mem_3_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero;
                __Vdly__mem_3_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour;
                __Vdly__mem_3_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm;
                __Vdly__mem_3_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf;
                vlSelf->__PVT__mem_3_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg;
                vlSelf->__PVT__mem_3_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg;
                vlSelf->__PVT__mem_3_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg;
                vlSelf->__PVT__mem_3_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg;
                vlSelf->__PVT__mem_3_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg;
                vlSelf->__PVT__mem_3_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId;
                vlSelf->__PVT__mem_3_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type;
                __Vdly__mem_3_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en;
                vlSelf->__PVT__mem_3_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar;
                __Vdly__mem_3_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en;
            } else if ((1U == (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))) {
                vlSelf->__PVT__mem_3_pc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc;
                vlSelf->__PVT__mem_3_inst = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst;
                vlSelf->__PVT__mem_3_func_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type;
                vlSelf->__PVT__mem_3_op_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type;
                vlSelf->__PVT__mem_3_imm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm;
                vlSelf->__PVT__mem_3_opreg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg;
                vlSelf->__PVT__mem_3_rjInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg;
                vlSelf->__PVT__mem_3_rkInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg;
                vlSelf->__PVT__mem_3_rdInfo_areg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg;
                vlSelf->__PVT__mem_3_rdInfo_preg = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg;
                vlSelf->__PVT__mem_3_robId = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId;
                vlSelf->__PVT__mem_3_exc_type = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type;
                vlSelf->__PVT__mem_3_predict_tar = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar;
                __Vdly__mem_3_src1Ispc = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc;
                __Vdly__mem_3_src1IsZero = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero;
                __Vdly__mem_3_src2IsFour = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour;
                __Vdly__mem_3_src2IsImm = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm;
                __Vdly__mem_3_iswf = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf;
                __Vdly__mem_3_predict_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en;
                __Vdly__mem_3_realBr_en = vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en;
            } else {
                vlSelf->__PVT__mem_3_pc = 0U;
                vlSelf->__PVT__mem_3_inst = 0U;
                vlSelf->__PVT__mem_3_func_type = 0U;
                vlSelf->__PVT__mem_3_op_type = 0U;
                vlSelf->__PVT__mem_3_imm = 0U;
                vlSelf->__PVT__mem_3_opreg = 0U;
                vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_3_robId = 0U;
                vlSelf->__PVT__mem_3_exc_type = 0U;
                vlSelf->__PVT__mem_3_predict_tar = 0U;
                __Vdly__mem_3_src1Ispc = 0U;
                __Vdly__mem_3_src1IsZero = 0U;
                __Vdly__mem_3_src2IsFour = 0U;
                __Vdly__mem_3_src2IsImm = 0U;
                __Vdly__mem_3_iswf = 0U;
                __Vdly__mem_3_predict_en = 0U;
                __Vdly__mem_3_realBr_en = 0U;
            }
        } else {
            __Vdly__mem_3_src1Ispc = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                      & (IData)(vlSelf->__PVT__mem_3_src1Ispc));
            __Vdly__mem_3_src1IsZero = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_src1IsZero));
            __Vdly__mem_3_src2IsFour = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_src2IsFour));
            __Vdly__mem_3_src2IsImm = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                       & (IData)(vlSelf->__PVT__mem_3_src2IsImm));
            __Vdly__mem_3_iswf = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                  & (IData)(vlSelf->__PVT__mem_3_iswf));
            __Vdly__mem_3_predict_en = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                        & (IData)(vlSelf->__PVT__mem_3_predict_en));
            __Vdly__mem_3_realBr_en = ((~ (IData)(vlSelf->__PVT__shiftVec_3)) 
                                       & (IData)(vlSelf->__PVT__mem_3_realBr_en));
            if (vlSelf->__PVT__shiftVec_3) {
                vlSelf->__PVT__mem_3_pc = 0U;
                vlSelf->__PVT__mem_3_inst = 0U;
                vlSelf->__PVT__mem_3_func_type = 0U;
                vlSelf->__PVT__mem_3_op_type = 0U;
                vlSelf->__PVT__mem_3_imm = 0U;
                vlSelf->__PVT__mem_3_opreg = 0U;
                vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
                vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
                vlSelf->__PVT__mem_3_robId = 0U;
                vlSelf->__PVT__mem_3_exc_type = 0U;
                vlSelf->__PVT__mem_3_predict_tar = 0U;
            }
        }
        if (vlSymsp->TOP.mycpu_top__DOT__core__DOT___FlushCtrl_io_backFlush) {
            __Vdly__topPtr = 0U;
        } else if ((1U & (~ (IData)(vlSelf->__PVT___GEN_0)))) {
            __Vdly__topPtr = (3U & ((IData)(vlSelf->__PVT___GEN)
                                     ? ((IData)(1U) 
                                        + (IData)(vlSelf->__PVT__topPtr))
                                     : ((IData)(vlSelf->__PVT__topPtr) 
                                        - (IData)(1U))));
        }
    } else {
        vlSelf->__PVT__maybeFull = 0U;
        vlSelf->__PVT__mem_0_pc = 0U;
        vlSelf->__PVT__mem_0_inst = 0U;
        vlSelf->__PVT__mem_0_func_type = 0U;
        vlSelf->__PVT__mem_0_op_type = 0U;
        vlSelf->__PVT__mem_0_imm = 0U;
        vlSelf->__PVT__mem_0_src1Ispc = 0U;
        vlSelf->__PVT__mem_0_src1IsZero = 0U;
        vlSelf->__PVT__mem_0_src2IsFour = 0U;
        vlSelf->__PVT__mem_0_src2IsImm = 0U;
        vlSelf->__PVT__mem_0_iswf = 0U;
        vlSelf->__PVT__mem_0_opreg = 0U;
        vlSelf->__PVT__mem_0_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_0_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_0_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_0_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_0_robId = 0U;
        vlSelf->__PVT__mem_0_exc_type = 0U;
        vlSelf->__PVT__mem_0_predict_en = 0U;
        vlSelf->__PVT__mem_0_predict_tar = 0U;
        vlSelf->__PVT__mem_0_realBr_en = 0U;
        vlSelf->__PVT__mem_1_pc = 0U;
        vlSelf->__PVT__mem_1_inst = 0U;
        vlSelf->__PVT__mem_1_func_type = 0U;
        vlSelf->__PVT__mem_1_op_type = 0U;
        vlSelf->__PVT__mem_1_imm = 0U;
        vlSelf->__PVT__mem_1_src1Ispc = 0U;
        vlSelf->__PVT__mem_1_src1IsZero = 0U;
        vlSelf->__PVT__mem_1_src2IsFour = 0U;
        vlSelf->__PVT__mem_1_src2IsImm = 0U;
        vlSelf->__PVT__mem_1_iswf = 0U;
        vlSelf->__PVT__mem_1_opreg = 0U;
        vlSelf->__PVT__mem_1_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_1_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_1_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_1_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_1_robId = 0U;
        vlSelf->__PVT__mem_1_exc_type = 0U;
        vlSelf->__PVT__mem_1_predict_en = 0U;
        vlSelf->__PVT__mem_1_predict_tar = 0U;
        vlSelf->__PVT__mem_1_realBr_en = 0U;
        vlSelf->__PVT__mem_2_pc = 0U;
        vlSelf->__PVT__mem_2_inst = 0U;
        vlSelf->__PVT__mem_2_func_type = 0U;
        vlSelf->__PVT__mem_2_op_type = 0U;
        vlSelf->__PVT__mem_2_imm = 0U;
        vlSelf->__PVT__mem_2_src1Ispc = 0U;
        vlSelf->__PVT__mem_2_src1IsZero = 0U;
        vlSelf->__PVT__mem_2_src2IsFour = 0U;
        vlSelf->__PVT__mem_2_src2IsImm = 0U;
        vlSelf->__PVT__mem_2_iswf = 0U;
        vlSelf->__PVT__mem_2_opreg = 0U;
        vlSelf->__PVT__mem_2_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_2_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_2_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_2_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_2_robId = 0U;
        vlSelf->__PVT__mem_2_exc_type = 0U;
        vlSelf->__PVT__mem_2_predict_en = 0U;
        vlSelf->__PVT__mem_2_predict_tar = 0U;
        vlSelf->__PVT__mem_2_realBr_en = 0U;
        vlSelf->__PVT__mem_3_pc = 0U;
        vlSelf->__PVT__mem_3_inst = 0U;
        vlSelf->__PVT__mem_3_func_type = 0U;
        vlSelf->__PVT__mem_3_op_type = 0U;
        vlSelf->__PVT__mem_3_imm = 0U;
        __Vdly__mem_3_src1Ispc = 0U;
        __Vdly__mem_3_src1IsZero = 0U;
        __Vdly__mem_3_src2IsFour = 0U;
        __Vdly__mem_3_src2IsImm = 0U;
        __Vdly__mem_3_iswf = 0U;
        vlSelf->__PVT__mem_3_opreg = 0U;
        vlSelf->__PVT__mem_3_rjInfo_preg = 0U;
        vlSelf->__PVT__mem_3_rkInfo_preg = 0U;
        vlSelf->__PVT__mem_3_rdInfo_areg = 0U;
        vlSelf->__PVT__mem_3_rdInfo_preg = 0U;
        vlSelf->__PVT__mem_3_robId = 0U;
        vlSelf->__PVT__mem_3_exc_type = 0U;
        __Vdly__mem_3_predict_en = 0U;
        vlSelf->__PVT__mem_3_predict_tar = 0U;
        __Vdly__mem_3_realBr_en = 0U;
        __Vdly__topPtr = 0U;
    }
    vlSelf->__PVT__mem_3_src1Ispc = __Vdly__mem_3_src1Ispc;
    vlSelf->__PVT__mem_3_src1IsZero = __Vdly__mem_3_src1IsZero;
    vlSelf->__PVT__mem_3_src2IsFour = __Vdly__mem_3_src2IsFour;
    vlSelf->__PVT__mem_3_src2IsImm = __Vdly__mem_3_src2IsImm;
    vlSelf->__PVT__mem_3_iswf = __Vdly__mem_3_iswf;
    vlSelf->__PVT__mem_3_predict_en = __Vdly__mem_3_predict_en;
    vlSelf->__PVT__mem_3_realBr_en = __Vdly__mem_3_realBr_en;
    vlSelf->__PVT__topPtr = __Vdly__topPtr;
    vlSelf->__PVT__casez_tmp_5 = ((0x20U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_6 = ((0x20U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_3 = ((0x20U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_4 = ((0x20U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp = ((0x20U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                 ? ((0x10U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                     ? ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                     : ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                 : ((0x10U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                     ? ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                     : ((8U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                         ? ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                         : ((4U & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                             ? ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                             : ((2U 
                                                 & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                 ? 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))
                                                  ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                  : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_0 = ((0x20U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_1 = ((0x20U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__casez_tmp_2 = ((0x20U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                   ? ((0x10U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32))))))
                                   : ((0x10U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                       ? ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16)))))
                                       : ((8U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                           ? ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8))))
                                           : ((4U & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                               ? ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4)))
                                               : ((2U 
                                                   & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2))
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))
                                                    ? (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1)
                                                    : (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0)))))));
    vlSelf->__PVT__full = ((~ (IData)((0U != (IData)(vlSelf->__PVT__topPtr)))) 
                           & (IData)(vlSelf->__PVT__maybeFull));
    vlSelf->__PVT__hitVec_2 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp_3)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_2_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_4)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_2_rkInfo_preg)))))))));
    vlSelf->__PVT__hitVec_0 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_0_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_0)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_0_rkInfo_preg)))))))));
    vlSelf->__PVT__hitVec_1 = (1U & ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                          == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                      | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                          & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                             == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                         | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                             & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))) 
                                            | ((~ (IData)(vlSelf->__PVT__casez_tmp_1)) 
                                               | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_1_rjInfo_preg))))))) 
                                     & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                        | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg))) 
                                              | ((~ (IData)(vlSelf->__PVT__casez_tmp_2)) 
                                                 | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_1_rkInfo_preg)))))))));
    vlSelf->__PVT__shiftVec_1 = ((IData)(vlSelf->__PVT__hitVec_0) 
                                 | (IData)(vlSelf->__PVT__hitVec_1));
    vlSelf->__PVT__index = ((IData)(vlSelf->__PVT__hitVec_0)
                             ? 0U : ((IData)(vlSelf->__PVT__hitVec_1)
                                      ? 1U : (2U | 
                                              (1U & 
                                               (~ (IData)(vlSelf->__PVT__hitVec_2))))));
    vlSelf->__PVT__shiftVec_2 = ((IData)(vlSelf->__PVT__shiftVec_1) 
                                 | (IData)(vlSelf->__PVT__hitVec_2));
    vlSelf->__PVT__casez_tmp_21 = ((0U == (IData)(vlSelf->__PVT__index))
                                    ? (IData)(vlSelf->__PVT__mem_0_rdInfo_preg)
                                    : ((1U == (IData)(vlSelf->__PVT__index))
                                        ? (IData)(vlSelf->__PVT__mem_1_rdInfo_preg)
                                        : ((2U == (IData)(vlSelf->__PVT__index))
                                            ? (IData)(vlSelf->__PVT__mem_2_rdInfo_preg)
                                            : (IData)(vlSelf->__PVT__mem_3_rdInfo_preg))));
    vlSelf->__PVT__shiftVec_3 = (1U & ((IData)(vlSelf->__PVT__shiftVec_2) 
                                       | ((((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                            & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                           | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                               & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                              | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                  & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))) 
                                                 | ((~ (IData)(vlSelf->__PVT__casez_tmp_5)) 
                                                    | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                       & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                          == (IData)(vlSelf->__PVT__mem_3_rjInfo_preg))))))) 
                                          & (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                              & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                                 == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                             | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                                 & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                                | (((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                    & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))) 
                                                   | ((~ (IData)(vlSelf->__PVT__casez_tmp_6)) 
                                                      | ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                         & ((IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                            == (IData)(vlSelf->__PVT__mem_3_rkInfo_preg))))))))));
    vlSelf->io_to_valid = ((~ ((~ (IData)(vlSelf->__PVT__maybeFull)) 
                               & (~ (IData)((0U != (IData)(vlSelf->__PVT__topPtr)))))) 
                           & (IData)(vlSelf->__PVT__shiftVec_3));
}

VL_INLINE_OPT void Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__1(Vmycpu_top_UnorderedIssue* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vmycpu_top_UnorderedIssue___nba_sequent__TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1__1\n"); );
    // Body
    vlSelf->__PVT___GEN = ((~ (IData)(vlSelf->__PVT__full)) 
                           & (IData)(vlSymsp->TOP.mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_1_valid_0));
    vlSelf->__PVT___GEN_0 = ((IData)(vlSelf->__PVT___GEN) 
                             == (IData)(vlSelf->io_to_valid));
}
