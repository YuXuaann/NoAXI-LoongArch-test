// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP_UNORDEREDISSUE_H_
#define VERILATED_VMYCPU_TOP_UNORDEREDISSUE_H_  // guard

#include "verilated.h"

class Vmycpu_top__Syms;

class Vmycpu_top_UnorderedIssue final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_from_ready,0,0);
        VL_IN8(io_from_valid,0,0);
        VL_IN8(io_from_bits_func_type,3,0);
        VL_IN8(io_from_bits_op_type,4,0);
        VL_IN8(io_from_bits_src1Ispc,0,0);
        VL_IN8(io_from_bits_src1IsZero,0,0);
        VL_IN8(io_from_bits_src2IsFour,0,0);
        VL_IN8(io_from_bits_src2IsImm,0,0);
        VL_IN8(io_from_bits_iswf,0,0);
        VL_IN8(io_from_bits_opreg,5,0);
        VL_IN8(io_from_bits_rjInfo_preg,5,0);
        VL_IN8(io_from_bits_rkInfo_preg,5,0);
        VL_IN8(io_from_bits_rdInfo_areg,4,0);
        VL_IN8(io_from_bits_rdInfo_preg,5,0);
        VL_IN8(io_from_bits_robId,4,0);
        VL_IN8(io_from_bits_exc_type,6,0);
        VL_IN8(io_from_bits_predict_en,0,0);
        VL_IN8(io_from_bits_realBr_en,0,0);
        VL_OUT8(io_to_valid,0,0);
        VL_OUT8(io_to_bits_func_type,3,0);
        VL_OUT8(io_to_bits_op_type,4,0);
        VL_OUT8(io_to_bits_src1Ispc,0,0);
        VL_OUT8(io_to_bits_src1IsZero,0,0);
        VL_OUT8(io_to_bits_src2IsFour,0,0);
        VL_OUT8(io_to_bits_src2IsImm,0,0);
        VL_OUT8(io_to_bits_iswf,0,0);
        VL_OUT8(io_to_bits_opreg,5,0);
        VL_OUT8(io_to_bits_rjInfo_preg,5,0);
        VL_OUT8(io_to_bits_rkInfo_preg,5,0);
        VL_OUT8(io_to_bits_rdInfo_areg,4,0);
        VL_OUT8(io_to_bits_rdInfo_preg,5,0);
        VL_OUT8(io_to_bits_robId,4,0);
        VL_OUT8(io_to_bits_exc_type,6,0);
        VL_OUT8(io_to_bits_predict_en,0,0);
        VL_OUT8(io_to_bits_realBr_en,0,0);
        VL_IN8(io_flush,0,0);
        VL_IN8(io_awake_0_valid,0,0);
        VL_IN8(io_awake_0_preg,5,0);
        VL_IN8(io_awake_1_valid,0,0);
        VL_IN8(io_awake_1_preg,5,0);
        VL_IN8(io_awake_2_valid,0,0);
        VL_IN8(io_awake_2_preg,5,0);
        VL_IN8(io_awake_3_valid,0,0);
        VL_IN8(io_awake_3_preg,5,0);
        VL_IN8(io_busy_0,0,0);
        VL_IN8(io_busy_1,0,0);
        VL_IN8(io_busy_2,0,0);
        VL_IN8(io_busy_3,0,0);
        VL_IN8(io_busy_4,0,0);
        VL_IN8(io_busy_5,0,0);
        VL_IN8(io_busy_6,0,0);
        VL_IN8(io_busy_7,0,0);
        VL_IN8(io_busy_8,0,0);
        VL_IN8(io_busy_9,0,0);
        VL_IN8(io_busy_10,0,0);
        VL_IN8(io_busy_11,0,0);
        VL_IN8(io_busy_12,0,0);
        VL_IN8(io_busy_13,0,0);
        VL_IN8(io_busy_14,0,0);
        VL_IN8(io_busy_15,0,0);
        VL_IN8(io_busy_16,0,0);
        VL_IN8(io_busy_17,0,0);
    };
    struct {
        VL_IN8(io_busy_18,0,0);
        VL_IN8(io_busy_19,0,0);
        VL_IN8(io_busy_20,0,0);
        VL_IN8(io_busy_21,0,0);
        VL_IN8(io_busy_22,0,0);
        VL_IN8(io_busy_23,0,0);
        VL_IN8(io_busy_24,0,0);
        VL_IN8(io_busy_25,0,0);
        VL_IN8(io_busy_26,0,0);
        VL_IN8(io_busy_27,0,0);
        VL_IN8(io_busy_28,0,0);
        VL_IN8(io_busy_29,0,0);
        VL_IN8(io_busy_30,0,0);
        VL_IN8(io_busy_31,0,0);
        VL_IN8(io_busy_32,0,0);
        VL_IN8(io_busy_33,0,0);
        VL_IN8(io_busy_34,0,0);
        VL_IN8(io_busy_35,0,0);
        VL_IN8(io_busy_36,0,0);
        VL_IN8(io_busy_37,0,0);
        VL_IN8(io_busy_38,0,0);
        VL_IN8(io_busy_39,0,0);
        VL_IN8(io_busy_40,0,0);
        VL_IN8(io_busy_41,0,0);
        VL_IN8(io_busy_42,0,0);
        VL_IN8(io_busy_43,0,0);
        VL_IN8(io_busy_44,0,0);
        VL_IN8(io_busy_45,0,0);
        VL_IN8(io_busy_46,0,0);
        VL_IN8(io_busy_47,0,0);
        VL_IN8(io_busy_48,0,0);
        VL_IN8(io_busy_49,0,0);
        VL_IN8(io_busy_50,0,0);
        VL_IN8(io_busy_51,0,0);
        VL_IN8(io_busy_52,0,0);
        VL_IN8(io_busy_53,0,0);
        VL_IN8(io_busy_54,0,0);
        VL_IN8(io_busy_55,0,0);
        VL_IN8(io_busy_56,0,0);
        VL_IN8(io_busy_57,0,0);
        VL_IN8(io_busy_58,0,0);
        VL_IN8(io_busy_59,0,0);
        VL_IN8(io_busy_60,0,0);
        VL_IN8(io_busy_61,0,0);
        VL_IN8(io_busy_62,0,0);
        VL_IN8(io_busy_63,0,0);
        VL_OUT8(io_arithSize,2,0);
        CData/*3:0*/ __PVT__mem_0_func_type;
        CData/*4:0*/ __PVT__mem_0_op_type;
        CData/*0:0*/ __PVT__mem_0_src1Ispc;
        CData/*0:0*/ __PVT__mem_0_src1IsZero;
        CData/*0:0*/ __PVT__mem_0_src2IsFour;
        CData/*0:0*/ __PVT__mem_0_src2IsImm;
        CData/*0:0*/ __PVT__mem_0_iswf;
        CData/*5:0*/ __PVT__mem_0_opreg;
        CData/*5:0*/ __PVT__mem_0_rjInfo_preg;
        CData/*5:0*/ __PVT__mem_0_rkInfo_preg;
        CData/*4:0*/ __PVT__mem_0_rdInfo_areg;
        CData/*5:0*/ __PVT__mem_0_rdInfo_preg;
        CData/*4:0*/ __PVT__mem_0_robId;
        CData/*6:0*/ __PVT__mem_0_exc_type;
        CData/*0:0*/ __PVT__mem_0_predict_en;
        CData/*0:0*/ __PVT__mem_0_realBr_en;
        CData/*3:0*/ __PVT__mem_1_func_type;
    };
    struct {
        CData/*4:0*/ __PVT__mem_1_op_type;
        CData/*0:0*/ __PVT__mem_1_src1Ispc;
        CData/*0:0*/ __PVT__mem_1_src1IsZero;
        CData/*0:0*/ __PVT__mem_1_src2IsFour;
        CData/*0:0*/ __PVT__mem_1_src2IsImm;
        CData/*0:0*/ __PVT__mem_1_iswf;
        CData/*5:0*/ __PVT__mem_1_opreg;
        CData/*5:0*/ __PVT__mem_1_rjInfo_preg;
        CData/*5:0*/ __PVT__mem_1_rkInfo_preg;
        CData/*4:0*/ __PVT__mem_1_rdInfo_areg;
        CData/*5:0*/ __PVT__mem_1_rdInfo_preg;
        CData/*4:0*/ __PVT__mem_1_robId;
        CData/*6:0*/ __PVT__mem_1_exc_type;
        CData/*0:0*/ __PVT__mem_1_predict_en;
        CData/*0:0*/ __PVT__mem_1_realBr_en;
        CData/*3:0*/ __PVT__mem_2_func_type;
        CData/*4:0*/ __PVT__mem_2_op_type;
        CData/*0:0*/ __PVT__mem_2_src1Ispc;
        CData/*0:0*/ __PVT__mem_2_src1IsZero;
        CData/*0:0*/ __PVT__mem_2_src2IsFour;
        CData/*0:0*/ __PVT__mem_2_src2IsImm;
        CData/*0:0*/ __PVT__mem_2_iswf;
        CData/*5:0*/ __PVT__mem_2_opreg;
        CData/*5:0*/ __PVT__mem_2_rjInfo_preg;
        CData/*5:0*/ __PVT__mem_2_rkInfo_preg;
        CData/*4:0*/ __PVT__mem_2_rdInfo_areg;
        CData/*5:0*/ __PVT__mem_2_rdInfo_preg;
        CData/*4:0*/ __PVT__mem_2_robId;
        CData/*6:0*/ __PVT__mem_2_exc_type;
        CData/*0:0*/ __PVT__mem_2_predict_en;
        CData/*0:0*/ __PVT__mem_2_realBr_en;
        CData/*3:0*/ __PVT__mem_3_func_type;
        CData/*4:0*/ __PVT__mem_3_op_type;
        CData/*0:0*/ __PVT__mem_3_src1Ispc;
        CData/*0:0*/ __PVT__mem_3_src1IsZero;
        CData/*0:0*/ __PVT__mem_3_src2IsFour;
        CData/*0:0*/ __PVT__mem_3_src2IsImm;
        CData/*0:0*/ __PVT__mem_3_iswf;
        CData/*5:0*/ __PVT__mem_3_opreg;
        CData/*5:0*/ __PVT__mem_3_rjInfo_preg;
        CData/*5:0*/ __PVT__mem_3_rkInfo_preg;
        CData/*4:0*/ __PVT__mem_3_rdInfo_areg;
        CData/*5:0*/ __PVT__mem_3_rdInfo_preg;
        CData/*4:0*/ __PVT__mem_3_robId;
        CData/*6:0*/ __PVT__mem_3_exc_type;
        CData/*0:0*/ __PVT__mem_3_predict_en;
        CData/*0:0*/ __PVT__mem_3_realBr_en;
        CData/*1:0*/ __PVT__topPtr;
        CData/*0:0*/ __PVT__maybeFull;
        CData/*0:0*/ __PVT__full;
        CData/*0:0*/ __PVT__casez_tmp;
        CData/*0:0*/ __PVT__casez_tmp_0;
        CData/*0:0*/ __PVT__hitVec_0;
        CData/*0:0*/ __PVT__casez_tmp_1;
        CData/*0:0*/ __PVT__casez_tmp_2;
        CData/*0:0*/ __PVT__hitVec_1;
        CData/*0:0*/ __PVT__casez_tmp_3;
        CData/*0:0*/ __PVT__casez_tmp_4;
        CData/*0:0*/ __PVT__hitVec_2;
        CData/*0:0*/ __PVT__casez_tmp_5;
        CData/*0:0*/ __PVT__casez_tmp_6;
        CData/*1:0*/ __PVT__index;
        CData/*5:0*/ __PVT__casez_tmp_21;
        CData/*0:0*/ __PVT__shiftVec_1;
    };
    struct {
        CData/*0:0*/ __PVT__shiftVec_2;
        CData/*0:0*/ __PVT___GEN;
        CData/*0:0*/ __PVT___GEN_0;
        CData/*0:0*/ __PVT__shiftVec_3;
        VL_IN(io_from_bits_pc,31,0);
        VL_IN(io_from_bits_inst,31,0);
        VL_IN(io_from_bits_imm,31,0);
        VL_IN(io_from_bits_predict_tar,31,0);
        VL_OUT(io_to_bits_pc,31,0);
        VL_OUT(io_to_bits_inst,31,0);
        VL_OUT(io_to_bits_imm,31,0);
        VL_OUT(io_to_bits_predict_tar,31,0);
        IData/*31:0*/ __PVT__mem_0_pc;
        IData/*31:0*/ __PVT__mem_0_inst;
        IData/*31:0*/ __PVT__mem_0_imm;
        IData/*31:0*/ __PVT__mem_0_predict_tar;
        IData/*31:0*/ __PVT__mem_1_pc;
        IData/*31:0*/ __PVT__mem_1_inst;
        IData/*31:0*/ __PVT__mem_1_imm;
        IData/*31:0*/ __PVT__mem_1_predict_tar;
        IData/*31:0*/ __PVT__mem_2_pc;
        IData/*31:0*/ __PVT__mem_2_inst;
        IData/*31:0*/ __PVT__mem_2_imm;
        IData/*31:0*/ __PVT__mem_2_predict_tar;
        IData/*31:0*/ __PVT__mem_3_pc;
        IData/*31:0*/ __PVT__mem_3_inst;
        IData/*31:0*/ __PVT__mem_3_imm;
        IData/*31:0*/ __PVT__mem_3_predict_tar;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmycpu_top_UnorderedIssue(Vmycpu_top__Syms* symsp, const char* v__name);
    ~Vmycpu_top_UnorderedIssue();
    VL_UNCOPYABLE(Vmycpu_top_UnorderedIssue);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
