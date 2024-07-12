// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmycpu_top__Syms.h"


void Vmycpu_top___024root__trace_chg_sub_0(Vmycpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmycpu_top___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root__trace_chg_top_0\n"); );
    // Init
    Vmycpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmycpu_top___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vmycpu_top___024root__trace_chg_sub_0(Vmycpu_top___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<4>/*127:0*/ __Vtemp_h916264d5__0;
    VlWide<4>/*127:0*/ __Vtemp_hdd0e9eea__0;
    VlWide<4>/*127:0*/ __Vtemp_h84d672ea__0;
    VlWide<4>/*127:0*/ __Vtemp_h4ecc2d51__0;
    VlWide<4>/*127:0*/ __Vtemp_h519b399a__0;
    VlWide<4>/*127:0*/ __Vtemp_h7b7dd4f9__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgIData(oldp+0,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__xilinx_simple_dual_port_1_clock_ram_read_first__DOT__ram_index),32);
        bufp->chgIData(oldp+1,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__xilinx_simple_dual_port_1_clock_ram_read_first_1__DOT__ram_index),32);
        bufp->chgIData(oldp+2,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first__DOT__ram_index),32);
        bufp->chgIData(oldp+3,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_1__DOT__ram_index),32);
        bufp->chgIData(oldp+4,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_2__DOT__ram_index),32);
        bufp->chgIData(oldp+5,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_3__DOT__ram_index),32);
        bufp->chgIData(oldp+6,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__ram_index),32);
        bufp->chgIData(oldp+7,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_1__DOT__ram_index),32);
        bufp->chgIData(oldp+8,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_2__DOT__ram_index),32);
        bufp->chgIData(oldp+9,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__ram_index),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+10,(vlSelf->mycpu_top__DOT__core__DOT___AXILayer_io_icache_ar_ready));
        bufp->chgBit(oldp+11,(vlSelf->mycpu_top__DOT__core__DOT___AXILayer_io_dcache_ar_ready));
        bufp->chgBit(oldp+12,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT___io_iCache_request_valid_T)))));
        bufp->chgBit(oldp+13,(vlSelf->mycpu_top__DOT__core__DOT___BPU_io_preFetch_nextPC_en));
        bufp->chgIData(oldp+14,(vlSelf->mycpu_top__DOT__core__DOT___BPU_io_preFetch_nextPC_tar),32);
        bufp->chgBit(oldp+15,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_5));
        bufp->chgBit(oldp+16,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready)
                                    : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__arvalid)
                                            ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT___AXILayer_io_dcache_ar_ready) 
                                               | (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready))
                                            : ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_20)) 
                                               & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready)))
                                        : (((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__wstate)) 
                                            | (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_16))) 
                                           & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready))))
                                : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                    ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_14) 
                                           & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready))
                                        : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready))
                                    : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_9) 
                                           | (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready))
                                        : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_7) 
                                           & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready)))))));
        bufp->chgBit(oldp+17,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                               & (IData)(vlSelf->mycpu_top__DOT__core__DOT___BPU_io_preFetch_nextPC_en))));
        bufp->chgIData(oldp+18,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                  ? 0U : vlSelf->mycpu_top__DOT__core__DOT___BPU_io_preFetch_nextPC_tar)),32);
        bufp->chgBit(oldp+19,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__getline_complete));
        bufp->chgWData(oldp+20,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata),128);
        bufp->chgBit(oldp+24,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__tagsram_0_wea));
        bufp->chgBit(oldp+25,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__tagsram_1_wea));
        bufp->chgCData(oldp+26,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__tagsram_0_addra),8);
        bufp->chgCData(oldp+27,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__tagsram_1_addra),8);
        bufp->chgCData(oldp+28,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__casez_tmp_2),2);
        if (vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_6) {
            __Vtemp_h916264d5__0[0U] = 0U;
            __Vtemp_h916264d5__0[1U] = 0U;
            __Vtemp_h916264d5__0[2U] = 0U;
            __Vtemp_h916264d5__0[3U] = 0U;
        } else {
            __Vtemp_h916264d5__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[0U];
            __Vtemp_h916264d5__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[1U];
            __Vtemp_h916264d5__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[2U];
            __Vtemp_h916264d5__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[3U];
        }
        bufp->chgWData(oldp+29,(__Vtemp_h916264d5__0),128);
        if (vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_7) {
            __Vtemp_hdd0e9eea__0[0U] = 0U;
            __Vtemp_hdd0e9eea__0[1U] = 0U;
            __Vtemp_hdd0e9eea__0[2U] = 0U;
            __Vtemp_hdd0e9eea__0[3U] = 0U;
        } else {
            __Vtemp_hdd0e9eea__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[0U];
            __Vtemp_hdd0e9eea__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[1U];
            __Vtemp_hdd0e9eea__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[2U];
            __Vtemp_hdd0e9eea__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__final_linedata[3U];
        }
        bufp->chgWData(oldp+33,(__Vtemp_hdd0e9eea__0),128);
        bufp->chgIData(oldp+37,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_6)
                                  ? 0U : (vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_info_addr 
                                          >> 0xcU))),20);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_7)
                                  ? 0U : (vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_info_addr 
                                          >> 0xcU))),20);
        bufp->chgBit(oldp+39,(vlSelf->mycpu_top__DOT__core__DOT____Vcellinp__PrefetchTop__io_from_valid));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+40,(vlSelf->mycpu_top__DOT__core__DOT__REG));
        bufp->chgBit(oldp+41,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__arvalid));
        bufp->chgIData(oldp+42,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ar_addr),32);
        bufp->chgCData(oldp+43,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ar_len),8);
        bufp->chgCData(oldp+44,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__ar_size),3);
        bufp->chgBit(oldp+45,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__rready));
        bufp->chgBit(oldp+46,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__arvalid));
        bufp->chgCData(oldp+47,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__ar_id),4);
        bufp->chgIData(oldp+48,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__ar_addr),32);
        bufp->chgCData(oldp+49,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__ar_len),8);
        bufp->chgBit(oldp+50,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__rready));
        bufp->chgBit(oldp+51,(vlSelf->mycpu_top__DOT__core__DOT__AXILayer__DOT__ar_sel_lock));
        bufp->chgBit(oldp+52,(vlSelf->mycpu_top__DOT__core__DOT__AXILayer__DOT__ar_sel_val));
        bufp->chgBit(oldp+53,(vlSelf->mycpu_top__DOT__core__DOT__AXILayer__DOT__ar_sel));
        bufp->chgBit(oldp+54,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_2));
        bufp->chgIData(oldp+55,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_pc),32);
        bufp->chgIData(oldp+56,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_inst),32);
        bufp->chgCData(oldp+57,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+58,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_op_type),5);
        bufp->chgIData(oldp+59,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_imm),32);
        bufp->chgBit(oldp+60,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_iswf));
        bufp->chgCData(oldp+61,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_opreg),6);
        bufp->chgIData(oldp+62,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src1Ispc)
                                  ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_pc
                                  : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src1IsZero)
                                      ? 0U : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                               ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                               : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                   : 
                                                  (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                                    ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                    : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp)))))),32);
        bufp->chgIData(oldp+63,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src2IsFour)
                                  ? 4U : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src2IsImm)
                                           ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_imm
                                           : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                               ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                               : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                   : 
                                                  (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                                    ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                    : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_0)))))),32);
        bufp->chgCData(oldp+64,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+65,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg),6);
        bufp->chgCData(oldp+66,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+67,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+68,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_predict_en));
        bufp->chgIData(oldp+69,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_predict_tar),32);
        bufp->chgBit(oldp+70,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_2));
        bufp->chgIData(oldp+71,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+72,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+73,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+74,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_iswf));
        bufp->chgCData(oldp+75,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+76,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+77,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+78,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result),32);
        bufp->chgCData(oldp+79,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+80,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+81,(((~ (((((5U == (0xfU 
                                              & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                       ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__unsigned_less))
                                       : ((4U == (0xfU 
                                                  & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__unsigned_less)
                                           : ((3U == 
                                               (0xfU 
                                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                               ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__signed_less))
                                               : ((2U 
                                                   == 
                                                   (0xfU 
                                                    & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                                   ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__signed_less)
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (0xfU 
                                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                                    ? 
                                                   (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__equal))
                                                    : 
                                                   ((0U 
                                                     != 
                                                     (0xfU 
                                                      & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type))) 
                                                    | (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__equal))))))) 
                                     & (1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type))) 
                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_predict_en)) 
                                   & (((((0x13U == 
                                          (vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_inst 
                                           >> 0x1aU))
                                          ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rjInfo_data
                                          : vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_pc) 
                                        + vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_imm) 
                                       == vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_predict_tar) 
                                      & (1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type))))) 
                               & (1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type)))));
        bufp->chgBit(oldp+82,(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_backFlush));
        bufp->chgBit(oldp+83,(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid));
        bufp->chgIData(oldp+84,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_inst),32);
        bufp->chgIData(oldp+85,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_imm),32);
        bufp->chgIData(oldp+86,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rjInfo_data),32);
        bufp->chgIData(oldp+87,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rkInfo_data),32);
        bufp->chgBit(oldp+88,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_predict_en));
        bufp->chgIData(oldp+89,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_predict_tar),32);
        bufp->chgBit(oldp+90,((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type))));
        bufp->chgIData(oldp+91,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__ALU__DOT__orResult),32);
        bufp->chgQData(oldp+92,((0x7fffffffffffffffULL 
                                 & ((QData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rjInfo_data)) 
                                    << (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rkInfo_data)))),63);
        bufp->chgCData(oldp+94,((0xfU & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type))),4);
        bufp->chgBit(oldp+95,((((5U == (0xfU & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                 ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__unsigned_less))
                                 : ((4U == (0xfU & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                     ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__unsigned_less)
                                     : ((3U == (0xfU 
                                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                         ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__signed_less))
                                         : ((2U == 
                                             (0xfU 
                                              & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__signed_less)
                                             : ((1U 
                                                 == 
                                                 (0xfU 
                                                  & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type)))
                                                 ? 
                                                (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__equal))
                                                 : 
                                                ((0U 
                                                  != 
                                                  (0xfU 
                                                   & (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_op_type))) 
                                                 | (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__equal))))))) 
                               & (1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_func_type)))));
        bufp->chgBit(oldp+96,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__equal));
        bufp->chgBit(oldp+97,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__unsigned_less));
        bufp->chgBit(oldp+98,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__BRU__DOT__signed_less));
        bufp->chgBit(oldp+99,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_2));
        bufp->chgIData(oldp+100,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+101,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+102,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+103,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_iswf));
        bufp->chgCData(oldp+104,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_opreg),6);
        bufp->chgIData(oldp+105,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src1Ispc)
                                   ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_pc
                                   : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src1IsZero)
                                       ? 0U : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                                ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                                : (
                                                   ((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                                    ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                    : 
                                                   (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                     & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                        == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                                     ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                     : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_1)))))),32);
        bufp->chgIData(oldp+106,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src2IsFour)
                                   ? 4U : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src2IsImm)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_imm
                                            : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                                & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                                ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                                : (
                                                   ((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                                    ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                    : 
                                                   (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                     & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                        == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                                     ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                     : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_2)))))),32);
        bufp->chgCData(oldp+107,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+108,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg),6);
        bufp->chgCData(oldp+109,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+110,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+111,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+112,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_2));
        bufp->chgIData(oldp+113,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+114,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+115,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+116,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_iswf));
        bufp->chgCData(oldp+117,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+118,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+119,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+120,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result),32);
        bufp->chgCData(oldp+121,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+122,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+123,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+124,(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid));
        bufp->chgIData(oldp+125,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rjInfo_data),32);
        bufp->chgIData(oldp+126,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rkInfo_data),32);
        bufp->chgIData(oldp+127,(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__ALU__DOT__orResult),32);
        bufp->chgQData(oldp+128,((0x7fffffffffffffffULL 
                                  & ((QData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rjInfo_data)) 
                                     << (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rkInfo_data)))),63);
        bufp->chgBit(oldp+130,((1U & (((IData)(4U) 
                                       + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc) 
                                      >> 2U))));
        bufp->chgIData(oldp+131,(vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc),32);
        bufp->chgIData(oldp+132,(((IData)(4U) + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc)),32);
        bufp->chgIData(oldp+133,(((IData)(8U) + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc)),32);
        bufp->chgBit(oldp+134,(vlSelf->mycpu_top__DOT__core__DOT___PreDecodeTop_io_predictRes_isbr));
        bufp->chgBit(oldp+135,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0));
        bufp->chgIData(oldp+136,(vlSelf->mycpu_top__DOT__core__DOT___PreDecodeTop_io_predictRes_br_tar),32);
        bufp->chgIData(oldp+137,(vlSelf->mycpu_top__DOT__core__DOT___PreDecodeTop_io_predictRes_pc),32);
        bufp->chgCData(oldp+138,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_0),3);
        bufp->chgCData(oldp+139,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_1),3);
        bufp->chgCData(oldp+140,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_2),3);
        bufp->chgCData(oldp+141,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_3),3);
        bufp->chgCData(oldp+142,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_4),3);
        bufp->chgCData(oldp+143,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_5),3);
        bufp->chgCData(oldp+144,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_6),3);
        bufp->chgCData(oldp+145,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_7),3);
        bufp->chgCData(oldp+146,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_8),3);
        bufp->chgCData(oldp+147,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_9),3);
        bufp->chgCData(oldp+148,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_10),3);
        bufp->chgCData(oldp+149,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_11),3);
        bufp->chgCData(oldp+150,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_12),3);
        bufp->chgCData(oldp+151,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_13),3);
        bufp->chgCData(oldp+152,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_14),3);
        bufp->chgCData(oldp+153,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_15),3);
        bufp->chgCData(oldp+154,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_16),3);
        bufp->chgCData(oldp+155,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_17),3);
        bufp->chgCData(oldp+156,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_18),3);
        bufp->chgCData(oldp+157,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_19),3);
        bufp->chgCData(oldp+158,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_20),3);
        bufp->chgCData(oldp+159,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_21),3);
        bufp->chgCData(oldp+160,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_22),3);
        bufp->chgCData(oldp+161,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_23),3);
        bufp->chgCData(oldp+162,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_24),3);
        bufp->chgCData(oldp+163,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_25),3);
        bufp->chgCData(oldp+164,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_26),3);
        bufp->chgCData(oldp+165,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_27),3);
        bufp->chgCData(oldp+166,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_28),3);
        bufp->chgCData(oldp+167,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_29),3);
        bufp->chgCData(oldp+168,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_30),3);
        bufp->chgCData(oldp+169,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_31),3);
        bufp->chgCData(oldp+170,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_32),3);
        bufp->chgCData(oldp+171,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_33),3);
        bufp->chgCData(oldp+172,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_34),3);
        bufp->chgCData(oldp+173,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_35),3);
        bufp->chgCData(oldp+174,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_36),3);
        bufp->chgCData(oldp+175,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_37),3);
        bufp->chgCData(oldp+176,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_38),3);
        bufp->chgCData(oldp+177,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_39),3);
        bufp->chgCData(oldp+178,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_40),3);
        bufp->chgCData(oldp+179,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_41),3);
        bufp->chgCData(oldp+180,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_42),3);
        bufp->chgCData(oldp+181,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_43),3);
        bufp->chgCData(oldp+182,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_44),3);
        bufp->chgCData(oldp+183,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_45),3);
        bufp->chgCData(oldp+184,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_46),3);
        bufp->chgCData(oldp+185,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_47),3);
        bufp->chgCData(oldp+186,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_48),3);
        bufp->chgCData(oldp+187,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_49),3);
        bufp->chgCData(oldp+188,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_50),3);
        bufp->chgCData(oldp+189,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_51),3);
        bufp->chgCData(oldp+190,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_52),3);
        bufp->chgCData(oldp+191,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_53),3);
        bufp->chgCData(oldp+192,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_54),3);
        bufp->chgCData(oldp+193,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_55),3);
        bufp->chgCData(oldp+194,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_56),3);
        bufp->chgCData(oldp+195,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_57),3);
        bufp->chgCData(oldp+196,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_58),3);
        bufp->chgCData(oldp+197,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_59),3);
        bufp->chgCData(oldp+198,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_60),3);
        bufp->chgCData(oldp+199,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_61),3);
        bufp->chgCData(oldp+200,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_62),3);
        bufp->chgCData(oldp+201,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_0_63),3);
        bufp->chgCData(oldp+202,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_0),3);
        bufp->chgCData(oldp+203,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_1),3);
        bufp->chgCData(oldp+204,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_2),3);
        bufp->chgCData(oldp+205,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_3),3);
        bufp->chgCData(oldp+206,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_4),3);
        bufp->chgCData(oldp+207,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_5),3);
        bufp->chgCData(oldp+208,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_6),3);
        bufp->chgCData(oldp+209,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_7),3);
        bufp->chgCData(oldp+210,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_8),3);
        bufp->chgCData(oldp+211,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_9),3);
        bufp->chgCData(oldp+212,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_10),3);
        bufp->chgCData(oldp+213,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_11),3);
        bufp->chgCData(oldp+214,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_12),3);
        bufp->chgCData(oldp+215,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_13),3);
        bufp->chgCData(oldp+216,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_14),3);
        bufp->chgCData(oldp+217,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_15),3);
        bufp->chgCData(oldp+218,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_16),3);
        bufp->chgCData(oldp+219,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_17),3);
        bufp->chgCData(oldp+220,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_18),3);
        bufp->chgCData(oldp+221,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_19),3);
        bufp->chgCData(oldp+222,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_20),3);
        bufp->chgCData(oldp+223,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_21),3);
        bufp->chgCData(oldp+224,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_22),3);
        bufp->chgCData(oldp+225,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_23),3);
        bufp->chgCData(oldp+226,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_24),3);
        bufp->chgCData(oldp+227,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_25),3);
        bufp->chgCData(oldp+228,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_26),3);
        bufp->chgCData(oldp+229,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_27),3);
        bufp->chgCData(oldp+230,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_28),3);
        bufp->chgCData(oldp+231,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_29),3);
        bufp->chgCData(oldp+232,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_30),3);
        bufp->chgCData(oldp+233,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_31),3);
        bufp->chgCData(oldp+234,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_32),3);
        bufp->chgCData(oldp+235,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_33),3);
        bufp->chgCData(oldp+236,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_34),3);
        bufp->chgCData(oldp+237,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_35),3);
        bufp->chgCData(oldp+238,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_36),3);
        bufp->chgCData(oldp+239,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_37),3);
        bufp->chgCData(oldp+240,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_38),3);
        bufp->chgCData(oldp+241,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_39),3);
        bufp->chgCData(oldp+242,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_40),3);
        bufp->chgCData(oldp+243,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_41),3);
        bufp->chgCData(oldp+244,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_42),3);
        bufp->chgCData(oldp+245,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_43),3);
        bufp->chgCData(oldp+246,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_44),3);
        bufp->chgCData(oldp+247,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_45),3);
        bufp->chgCData(oldp+248,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_46),3);
        bufp->chgCData(oldp+249,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_47),3);
        bufp->chgCData(oldp+250,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_48),3);
        bufp->chgCData(oldp+251,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_49),3);
        bufp->chgCData(oldp+252,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_50),3);
        bufp->chgCData(oldp+253,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_51),3);
        bufp->chgCData(oldp+254,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_52),3);
        bufp->chgCData(oldp+255,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_53),3);
        bufp->chgCData(oldp+256,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_54),3);
        bufp->chgCData(oldp+257,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_55),3);
        bufp->chgCData(oldp+258,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_56),3);
        bufp->chgCData(oldp+259,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_57),3);
        bufp->chgCData(oldp+260,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_58),3);
        bufp->chgCData(oldp+261,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_59),3);
        bufp->chgCData(oldp+262,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_60),3);
        bufp->chgCData(oldp+263,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_61),3);
        bufp->chgCData(oldp+264,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_62),3);
        bufp->chgCData(oldp+265,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BHT_1_63),3);
        bufp->chgCData(oldp+266,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0),2);
        bufp->chgCData(oldp+267,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1),2);
        bufp->chgCData(oldp+268,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2),2);
        bufp->chgCData(oldp+269,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3),2);
        bufp->chgCData(oldp+270,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4),2);
        bufp->chgCData(oldp+271,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5),2);
        bufp->chgCData(oldp+272,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6),2);
        bufp->chgCData(oldp+273,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7),2);
        bufp->chgCData(oldp+274,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0),2);
        bufp->chgCData(oldp+275,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1),2);
        bufp->chgCData(oldp+276,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2),2);
        bufp->chgCData(oldp+277,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3),2);
        bufp->chgCData(oldp+278,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4),2);
        bufp->chgCData(oldp+279,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5),2);
        bufp->chgCData(oldp+280,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6),2);
        bufp->chgCData(oldp+281,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7),2);
        bufp->chgIData(oldp+282,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_0),32);
        bufp->chgIData(oldp+283,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_1),32);
        bufp->chgIData(oldp+284,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_2),32);
        bufp->chgIData(oldp+285,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_3),32);
        bufp->chgIData(oldp+286,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_4),32);
        bufp->chgIData(oldp+287,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_5),32);
        bufp->chgIData(oldp+288,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_6),32);
        bufp->chgIData(oldp+289,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__RAS_7),32);
        bufp->chgCData(oldp+290,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp),3);
        bufp->chgCData(oldp+291,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index),3);
        bufp->chgCData(oldp+292,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0),2);
        bufp->chgCData(oldp+293,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((0U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0))))))),2);
        bufp->chgCData(oldp+294,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((1U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1))))))),2);
        bufp->chgCData(oldp+295,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2))))))),2);
        bufp->chgCData(oldp+296,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((3U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3))))))),2);
        bufp->chgCData(oldp+297,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((4U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((4U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4))))))),2);
        bufp->chgCData(oldp+298,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((5U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((5U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (5U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5))))))),2);
        bufp->chgCData(oldp+299,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((6U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6))
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6))))))),2);
        bufp->chgCData(oldp+300,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                         ? ((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                             ? ((7U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_0)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7))
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7))))))),2);
        bufp->chgCData(oldp+301,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_9),3);
        bufp->chgCData(oldp+302,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1),3);
        bufp->chgCData(oldp+303,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10),2);
        bufp->chgCData(oldp+304,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((0U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (0U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0))
                                                 : 
                                                ((0U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0))))))),2);
        bufp->chgCData(oldp+305,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((1U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (1U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1))
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1))))))),2);
        bufp->chgCData(oldp+306,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (2U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2))
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2))))))),2);
        bufp->chgCData(oldp+307,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((3U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (3U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3))))))),2);
        bufp->chgCData(oldp+308,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((4U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((4U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (4U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4))
                                                 : 
                                                ((4U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4))))))),2);
        bufp->chgCData(oldp+309,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((5U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((5U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (5U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5))
                                                 : 
                                                ((5U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5))))))),2);
        bufp->chgCData(oldp+310,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((6U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (6U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6))
                                                 : 
                                                ((6U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6))))))),2);
        bufp->chgCData(oldp+311,((3U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                         ? ((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                             ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                             : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7))
                                         : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                             ? ((7U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                 ? 
                                                (- (IData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)))
                                                 : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7))
                                             : ((2U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10))
                                                 ? 
                                                (((2U 
                                                   == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_10)) 
                                                  & (7U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1)))
                                                  ? 
                                                 (2U 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0))))
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7))
                                                 : 
                                                ((7U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__index_1))
                                                  ? 
                                                 ((IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_predictRes_realDirection_0)
                                                   ? 2U
                                                   : 1U)
                                                  : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7))))))),2);
        bufp->chgCData(oldp+312,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19),3);
        bufp->chgCData(oldp+313,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20),3);
        bufp->chgCData(oldp+314,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                   ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                       ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_7)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_6))
                                       : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_5)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_4)))
                                   : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                       ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_3)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_2))
                                       : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_19))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_1)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_0_0))))),2);
        bufp->chgCData(oldp+315,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                   ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                       ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_7)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_6))
                                       : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_5)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_4)))
                                   : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                       ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_3)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_2))
                                       : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_20))
                                           ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_1)
                                           : (IData)(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__PHT_1_0))))),2);
        bufp->chgBit(oldp+316,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BTB_1_wea));
        bufp->chgSData(oldp+317,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BTB_1_addra),10);
        bufp->chgBit(oldp+318,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BTBHitVec_0));
        bufp->chgBit(oldp+319,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__BTBHitVec_1));
        bufp->chgCData(oldp+320,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__top),3);
        bufp->chgIData(oldp+321,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__casez_tmp_23),32);
        bufp->chgIData(oldp+322,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__tot_time),20);
        bufp->chgIData(oldp+323,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__succeed_time),20);
        bufp->chgSData(oldp+324,((0x3ffU & (vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc 
                                            >> 4U))),10);
        bufp->chgQData(oldp+325,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT____Vcellinp__xilinx_simple_dual_port_1_clock_ram_read_first_1__dina),55);
        bufp->chgQData(oldp+327,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT___xilinx_simple_dual_port_1_clock_ram_read_first_doutb),55);
        bufp->chgSData(oldp+329,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__xilinx_simple_dual_port_1_clock_ram_read_first__DOT__addr_r),10);
        bufp->chgSData(oldp+330,((0x3ffU & (((IData)(4U) 
                                             + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc) 
                                            >> 4U))),10);
        bufp->chgQData(oldp+331,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT___xilinx_simple_dual_port_1_clock_ram_read_first_1_doutb),55);
        bufp->chgSData(oldp+333,(vlSelf->mycpu_top__DOT__core__DOT__BPU__DOT__xilinx_simple_dual_port_1_clock_ram_read_first_1__DOT__addr_r),10);
        bufp->chgBit(oldp+334,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__io_rob_0_info_ready_0));
        bufp->chgBit(oldp+335,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__io_pop_0_valid_0));
        bufp->chgBit(oldp+336,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp));
        bufp->chgBit(oldp+337,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_0));
        bufp->chgCData(oldp+338,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_1),5);
        bufp->chgCData(oldp+339,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_2),6);
        bufp->chgCData(oldp+340,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_3),6);
        bufp->chgIData(oldp+341,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_4),32);
        bufp->chgBit(oldp+342,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_5));
        bufp->chgCData(oldp+343,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_6),7);
        bufp->chgBit(oldp+344,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_7));
        bufp->chgBit(oldp+345,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_8));
        bufp->chgIData(oldp+346,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_9),32);
        bufp->chgBit(oldp+347,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__io_rob_1_info_ready_0));
        bufp->chgBit(oldp+348,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__io_pop_1_valid_0));
        bufp->chgBit(oldp+349,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_10));
        bufp->chgBit(oldp+350,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_11));
        bufp->chgCData(oldp+351,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_12),5);
        bufp->chgCData(oldp+352,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_13),6);
        bufp->chgCData(oldp+353,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_14),6);
        bufp->chgIData(oldp+354,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_15),32);
        bufp->chgBit(oldp+355,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_16));
        bufp->chgCData(oldp+356,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_17),7);
        bufp->chgBit(oldp+357,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_18));
        bufp->chgBit(oldp+358,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_19));
        bufp->chgIData(oldp+359,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_20),32);
        bufp->chgBit(oldp+360,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeValid));
        bufp->chgBit(oldp+361,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeValid_1));
        bufp->chgBit(oldp+362,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__full)) 
                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeHappen))));
        bufp->chgBit(oldp+363,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__empty)))));
        bufp->chgBit(oldp+364,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_0_valid));
        bufp->chgIData(oldp+365,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_0_requestInfo_addr),32);
        bufp->chgIData(oldp+366,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_0_requestInfo_wdata),32);
        bufp->chgBit(oldp+367,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__full)))));
        bufp->chgBit(oldp+368,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__empty)) 
                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeHappen))));
        bufp->chgCData(oldp+369,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeValid),4);
        bufp->chgCData(oldp+370,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeValid_1),4);
        bufp->chgIData(oldp+371,(((IData)(1U) + vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__casez_tmp_15)),32);
        bufp->chgBit(oldp+372,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__hasFlush_0));
        bufp->chgBit(oldp+373,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__hasFlush_1));
        bufp->chgBit(oldp+374,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__readyBit_0));
        bufp->chgBit(oldp+375,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__readyBit_1));
        bufp->chgBit(oldp+376,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeHappen));
        bufp->chgBit(oldp+377,(vlSelf->mycpu_top__DOT__core__DOT__CommitTop__DOT__writeStall));
        bufp->chgIData(oldp+378,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_va),32);
        bufp->chgIData(oldp+379,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__pa),32);
        bufp->chgBit(oldp+380,(vlSelf->mycpu_top__DOT__core__DOT___DCache_io_mem1_hitVec_0));
        bufp->chgBit(oldp+381,(vlSelf->mycpu_top__DOT__core__DOT___DCache_io_mem1_hitVec_1));
        bufp->chgBit(oldp+382,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_2));
        bufp->chgBit(oldp+383,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_cached));
        bufp->chgIData(oldp+384,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_pa),32);
        bufp->chgIData(oldp+385,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_wdata),32);
        bufp->chgCData(oldp+386,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_wmask),4);
        bufp->chgBit(oldp+387,(vlSelf->mycpu_top__DOT__core__DOT___DCache_io_mem2_answer_valid));
        bufp->chgIData(oldp+388,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__imm_ansvalid)
                                   ? vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__imm_cached_ans
                                   : vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__uncachedAns)),32);
        bufp->chgBit(oldp+389,((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_op_type) 
                                         >> 3U)))));
        bufp->chgBit(oldp+390,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_dcachehitVec_0));
        bufp->chgBit(oldp+391,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_dcachehitVec_1));
        bufp->chgBit(oldp+392,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_0_0));
        bufp->chgBit(oldp+393,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_0_1));
        bufp->chgBit(oldp+394,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_1_0));
        bufp->chgBit(oldp+395,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_1_1));
        bufp->chgBit(oldp+396,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_2_0));
        bufp->chgBit(oldp+397,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_2_1));
        bufp->chgBit(oldp+398,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_3_0));
        bufp->chgBit(oldp+399,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_3_1));
        bufp->chgBit(oldp+400,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_4_0));
        bufp->chgBit(oldp+401,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_4_1));
        bufp->chgBit(oldp+402,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_5_0));
        bufp->chgBit(oldp+403,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_5_1));
        bufp->chgBit(oldp+404,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_6_0));
        bufp->chgBit(oldp+405,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_6_1));
        bufp->chgBit(oldp+406,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_7_0));
        bufp->chgBit(oldp+407,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_7_1));
        bufp->chgBit(oldp+408,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_8_0));
        bufp->chgBit(oldp+409,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_8_1));
        bufp->chgBit(oldp+410,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_9_0));
        bufp->chgBit(oldp+411,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_9_1));
        bufp->chgBit(oldp+412,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_10_0));
        bufp->chgBit(oldp+413,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_10_1));
        bufp->chgBit(oldp+414,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_11_0));
        bufp->chgBit(oldp+415,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_11_1));
        bufp->chgBit(oldp+416,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_12_0));
        bufp->chgBit(oldp+417,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_12_1));
        bufp->chgBit(oldp+418,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_13_0));
        bufp->chgBit(oldp+419,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_13_1));
        bufp->chgBit(oldp+420,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_14_0));
        bufp->chgBit(oldp+421,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_14_1));
        bufp->chgBit(oldp+422,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_15_0));
        bufp->chgBit(oldp+423,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_15_1));
        bufp->chgBit(oldp+424,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_16_0));
        bufp->chgBit(oldp+425,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_16_1));
        bufp->chgBit(oldp+426,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_17_0));
        bufp->chgBit(oldp+427,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_17_1));
        bufp->chgBit(oldp+428,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_18_0));
        bufp->chgBit(oldp+429,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_18_1));
        bufp->chgBit(oldp+430,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_19_0));
        bufp->chgBit(oldp+431,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_19_1));
        bufp->chgBit(oldp+432,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_20_0));
        bufp->chgBit(oldp+433,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_20_1));
        bufp->chgBit(oldp+434,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_21_0));
        bufp->chgBit(oldp+435,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_21_1));
        bufp->chgBit(oldp+436,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_22_0));
        bufp->chgBit(oldp+437,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_22_1));
        bufp->chgBit(oldp+438,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_23_0));
        bufp->chgBit(oldp+439,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_23_1));
        bufp->chgBit(oldp+440,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_24_0));
        bufp->chgBit(oldp+441,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_24_1));
        bufp->chgBit(oldp+442,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_25_0));
        bufp->chgBit(oldp+443,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_25_1));
        bufp->chgBit(oldp+444,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_26_0));
        bufp->chgBit(oldp+445,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_26_1));
        bufp->chgBit(oldp+446,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_27_0));
        bufp->chgBit(oldp+447,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_27_1));
        bufp->chgBit(oldp+448,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_28_0));
        bufp->chgBit(oldp+449,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_28_1));
        bufp->chgBit(oldp+450,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_29_0));
        bufp->chgBit(oldp+451,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_29_1));
        bufp->chgBit(oldp+452,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_30_0));
        bufp->chgBit(oldp+453,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_30_1));
        bufp->chgBit(oldp+454,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_31_0));
        bufp->chgBit(oldp+455,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_31_1));
        bufp->chgBit(oldp+456,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_32_0));
        bufp->chgBit(oldp+457,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_32_1));
        bufp->chgBit(oldp+458,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_33_0));
        bufp->chgBit(oldp+459,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_33_1));
        bufp->chgBit(oldp+460,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_34_0));
        bufp->chgBit(oldp+461,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_34_1));
        bufp->chgBit(oldp+462,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_35_0));
        bufp->chgBit(oldp+463,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_35_1));
        bufp->chgBit(oldp+464,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_36_0));
        bufp->chgBit(oldp+465,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_36_1));
        bufp->chgBit(oldp+466,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_37_0));
        bufp->chgBit(oldp+467,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_37_1));
        bufp->chgBit(oldp+468,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_38_0));
        bufp->chgBit(oldp+469,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_38_1));
        bufp->chgBit(oldp+470,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_39_0));
        bufp->chgBit(oldp+471,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_39_1));
        bufp->chgBit(oldp+472,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_40_0));
        bufp->chgBit(oldp+473,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_40_1));
        bufp->chgBit(oldp+474,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_41_0));
        bufp->chgBit(oldp+475,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_41_1));
        bufp->chgBit(oldp+476,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_42_0));
        bufp->chgBit(oldp+477,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_42_1));
        bufp->chgBit(oldp+478,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_43_0));
        bufp->chgBit(oldp+479,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_43_1));
        bufp->chgBit(oldp+480,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_44_0));
        bufp->chgBit(oldp+481,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_44_1));
        bufp->chgBit(oldp+482,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_45_0));
        bufp->chgBit(oldp+483,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_45_1));
        bufp->chgBit(oldp+484,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_46_0));
        bufp->chgBit(oldp+485,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_46_1));
        bufp->chgBit(oldp+486,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_47_0));
        bufp->chgBit(oldp+487,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_47_1));
        bufp->chgBit(oldp+488,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_48_0));
        bufp->chgBit(oldp+489,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_48_1));
        bufp->chgBit(oldp+490,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_49_0));
        bufp->chgBit(oldp+491,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_49_1));
        bufp->chgBit(oldp+492,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_50_0));
        bufp->chgBit(oldp+493,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_50_1));
        bufp->chgBit(oldp+494,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_51_0));
        bufp->chgBit(oldp+495,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_51_1));
        bufp->chgBit(oldp+496,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_52_0));
        bufp->chgBit(oldp+497,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_52_1));
        bufp->chgBit(oldp+498,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_53_0));
        bufp->chgBit(oldp+499,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_53_1));
        bufp->chgBit(oldp+500,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_54_0));
        bufp->chgBit(oldp+501,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_54_1));
        bufp->chgBit(oldp+502,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_55_0));
        bufp->chgBit(oldp+503,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_55_1));
        bufp->chgBit(oldp+504,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_56_0));
        bufp->chgBit(oldp+505,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_56_1));
        bufp->chgBit(oldp+506,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_57_0));
        bufp->chgBit(oldp+507,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_57_1));
        bufp->chgBit(oldp+508,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_58_0));
        bufp->chgBit(oldp+509,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_58_1));
        bufp->chgBit(oldp+510,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_59_0));
        bufp->chgBit(oldp+511,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_59_1));
        bufp->chgBit(oldp+512,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_60_0));
        bufp->chgBit(oldp+513,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_60_1));
        bufp->chgBit(oldp+514,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_61_0));
        bufp->chgBit(oldp+515,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_61_1));
        bufp->chgBit(oldp+516,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_62_0));
        bufp->chgBit(oldp+517,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_62_1));
        bufp->chgBit(oldp+518,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_63_0));
        bufp->chgBit(oldp+519,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_63_1));
        bufp->chgBit(oldp+520,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_64_0));
        bufp->chgBit(oldp+521,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_64_1));
        bufp->chgBit(oldp+522,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_65_0));
        bufp->chgBit(oldp+523,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_65_1));
        bufp->chgBit(oldp+524,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_66_0));
        bufp->chgBit(oldp+525,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_66_1));
        bufp->chgBit(oldp+526,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_67_0));
        bufp->chgBit(oldp+527,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_67_1));
        bufp->chgBit(oldp+528,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_68_0));
        bufp->chgBit(oldp+529,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_68_1));
        bufp->chgBit(oldp+530,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_69_0));
        bufp->chgBit(oldp+531,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_69_1));
        bufp->chgBit(oldp+532,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_70_0));
        bufp->chgBit(oldp+533,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_70_1));
        bufp->chgBit(oldp+534,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_71_0));
        bufp->chgBit(oldp+535,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_71_1));
        bufp->chgBit(oldp+536,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_72_0));
        bufp->chgBit(oldp+537,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_72_1));
        bufp->chgBit(oldp+538,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_73_0));
        bufp->chgBit(oldp+539,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_73_1));
        bufp->chgBit(oldp+540,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_74_0));
        bufp->chgBit(oldp+541,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_74_1));
        bufp->chgBit(oldp+542,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_75_0));
        bufp->chgBit(oldp+543,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_75_1));
        bufp->chgBit(oldp+544,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_76_0));
        bufp->chgBit(oldp+545,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_76_1));
        bufp->chgBit(oldp+546,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_77_0));
        bufp->chgBit(oldp+547,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_77_1));
        bufp->chgBit(oldp+548,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_78_0));
        bufp->chgBit(oldp+549,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_78_1));
        bufp->chgBit(oldp+550,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_79_0));
        bufp->chgBit(oldp+551,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_79_1));
        bufp->chgBit(oldp+552,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_80_0));
        bufp->chgBit(oldp+553,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_80_1));
        bufp->chgBit(oldp+554,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_81_0));
        bufp->chgBit(oldp+555,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_81_1));
        bufp->chgBit(oldp+556,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_82_0));
        bufp->chgBit(oldp+557,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_82_1));
        bufp->chgBit(oldp+558,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_83_0));
        bufp->chgBit(oldp+559,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_83_1));
        bufp->chgBit(oldp+560,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_84_0));
        bufp->chgBit(oldp+561,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_84_1));
        bufp->chgBit(oldp+562,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_85_0));
        bufp->chgBit(oldp+563,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_85_1));
        bufp->chgBit(oldp+564,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_86_0));
        bufp->chgBit(oldp+565,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_86_1));
        bufp->chgBit(oldp+566,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_87_0));
        bufp->chgBit(oldp+567,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_87_1));
        bufp->chgBit(oldp+568,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_88_0));
        bufp->chgBit(oldp+569,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_88_1));
        bufp->chgBit(oldp+570,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_89_0));
        bufp->chgBit(oldp+571,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_89_1));
        bufp->chgBit(oldp+572,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_90_0));
        bufp->chgBit(oldp+573,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_90_1));
        bufp->chgBit(oldp+574,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_91_0));
        bufp->chgBit(oldp+575,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_91_1));
        bufp->chgBit(oldp+576,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_92_0));
        bufp->chgBit(oldp+577,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_92_1));
        bufp->chgBit(oldp+578,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_93_0));
        bufp->chgBit(oldp+579,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_93_1));
        bufp->chgBit(oldp+580,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_94_0));
        bufp->chgBit(oldp+581,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_94_1));
        bufp->chgBit(oldp+582,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_95_0));
        bufp->chgBit(oldp+583,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_95_1));
        bufp->chgBit(oldp+584,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_96_0));
        bufp->chgBit(oldp+585,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_96_1));
        bufp->chgBit(oldp+586,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_97_0));
        bufp->chgBit(oldp+587,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_97_1));
        bufp->chgBit(oldp+588,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_98_0));
        bufp->chgBit(oldp+589,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_98_1));
        bufp->chgBit(oldp+590,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_99_0));
        bufp->chgBit(oldp+591,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_99_1));
        bufp->chgBit(oldp+592,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_100_0));
        bufp->chgBit(oldp+593,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_100_1));
        bufp->chgBit(oldp+594,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_101_0));
        bufp->chgBit(oldp+595,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_101_1));
        bufp->chgBit(oldp+596,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_102_0));
        bufp->chgBit(oldp+597,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_102_1));
        bufp->chgBit(oldp+598,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_103_0));
        bufp->chgBit(oldp+599,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_103_1));
        bufp->chgBit(oldp+600,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_104_0));
        bufp->chgBit(oldp+601,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_104_1));
        bufp->chgBit(oldp+602,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_105_0));
        bufp->chgBit(oldp+603,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_105_1));
        bufp->chgBit(oldp+604,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_106_0));
        bufp->chgBit(oldp+605,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_106_1));
        bufp->chgBit(oldp+606,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_107_0));
        bufp->chgBit(oldp+607,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_107_1));
        bufp->chgBit(oldp+608,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_108_0));
        bufp->chgBit(oldp+609,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_108_1));
        bufp->chgBit(oldp+610,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_109_0));
        bufp->chgBit(oldp+611,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_109_1));
        bufp->chgBit(oldp+612,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_110_0));
        bufp->chgBit(oldp+613,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_110_1));
        bufp->chgBit(oldp+614,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_111_0));
        bufp->chgBit(oldp+615,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_111_1));
        bufp->chgBit(oldp+616,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_112_0));
        bufp->chgBit(oldp+617,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_112_1));
        bufp->chgBit(oldp+618,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_113_0));
        bufp->chgBit(oldp+619,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_113_1));
        bufp->chgBit(oldp+620,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_114_0));
        bufp->chgBit(oldp+621,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_114_1));
        bufp->chgBit(oldp+622,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_115_0));
        bufp->chgBit(oldp+623,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_115_1));
        bufp->chgBit(oldp+624,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_116_0));
        bufp->chgBit(oldp+625,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_116_1));
        bufp->chgBit(oldp+626,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_117_0));
        bufp->chgBit(oldp+627,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_117_1));
        bufp->chgBit(oldp+628,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_118_0));
        bufp->chgBit(oldp+629,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_118_1));
        bufp->chgBit(oldp+630,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_119_0));
        bufp->chgBit(oldp+631,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_119_1));
        bufp->chgBit(oldp+632,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_120_0));
        bufp->chgBit(oldp+633,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_120_1));
        bufp->chgBit(oldp+634,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_121_0));
        bufp->chgBit(oldp+635,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_121_1));
        bufp->chgBit(oldp+636,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_122_0));
        bufp->chgBit(oldp+637,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_122_1));
        bufp->chgBit(oldp+638,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_123_0));
        bufp->chgBit(oldp+639,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_123_1));
        bufp->chgBit(oldp+640,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_124_0));
        bufp->chgBit(oldp+641,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_124_1));
        bufp->chgBit(oldp+642,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_125_0));
        bufp->chgBit(oldp+643,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_125_1));
        bufp->chgBit(oldp+644,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_126_0));
        bufp->chgBit(oldp+645,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_126_1));
        bufp->chgBit(oldp+646,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_127_0));
        bufp->chgBit(oldp+647,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_127_1));
        bufp->chgBit(oldp+648,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_128_0));
        bufp->chgBit(oldp+649,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_128_1));
        bufp->chgBit(oldp+650,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_129_0));
        bufp->chgBit(oldp+651,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_129_1));
        bufp->chgBit(oldp+652,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_130_0));
        bufp->chgBit(oldp+653,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_130_1));
        bufp->chgBit(oldp+654,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_131_0));
        bufp->chgBit(oldp+655,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_131_1));
        bufp->chgBit(oldp+656,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_132_0));
        bufp->chgBit(oldp+657,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_132_1));
        bufp->chgBit(oldp+658,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_133_0));
        bufp->chgBit(oldp+659,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_133_1));
        bufp->chgBit(oldp+660,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_134_0));
        bufp->chgBit(oldp+661,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_134_1));
        bufp->chgBit(oldp+662,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_135_0));
        bufp->chgBit(oldp+663,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_135_1));
        bufp->chgBit(oldp+664,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_136_0));
        bufp->chgBit(oldp+665,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_136_1));
        bufp->chgBit(oldp+666,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_137_0));
        bufp->chgBit(oldp+667,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_137_1));
        bufp->chgBit(oldp+668,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_138_0));
        bufp->chgBit(oldp+669,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_138_1));
        bufp->chgBit(oldp+670,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_139_0));
        bufp->chgBit(oldp+671,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_139_1));
        bufp->chgBit(oldp+672,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_140_0));
        bufp->chgBit(oldp+673,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_140_1));
        bufp->chgBit(oldp+674,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_141_0));
        bufp->chgBit(oldp+675,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_141_1));
        bufp->chgBit(oldp+676,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_142_0));
        bufp->chgBit(oldp+677,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_142_1));
        bufp->chgBit(oldp+678,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_143_0));
        bufp->chgBit(oldp+679,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_143_1));
        bufp->chgBit(oldp+680,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_144_0));
        bufp->chgBit(oldp+681,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_144_1));
        bufp->chgBit(oldp+682,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_145_0));
        bufp->chgBit(oldp+683,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_145_1));
        bufp->chgBit(oldp+684,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_146_0));
        bufp->chgBit(oldp+685,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_146_1));
        bufp->chgBit(oldp+686,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_147_0));
        bufp->chgBit(oldp+687,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_147_1));
        bufp->chgBit(oldp+688,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_148_0));
        bufp->chgBit(oldp+689,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_148_1));
        bufp->chgBit(oldp+690,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_149_0));
        bufp->chgBit(oldp+691,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_149_1));
        bufp->chgBit(oldp+692,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_150_0));
        bufp->chgBit(oldp+693,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_150_1));
        bufp->chgBit(oldp+694,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_151_0));
        bufp->chgBit(oldp+695,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_151_1));
        bufp->chgBit(oldp+696,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_152_0));
        bufp->chgBit(oldp+697,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_152_1));
        bufp->chgBit(oldp+698,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_153_0));
        bufp->chgBit(oldp+699,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_153_1));
        bufp->chgBit(oldp+700,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_154_0));
        bufp->chgBit(oldp+701,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_154_1));
        bufp->chgBit(oldp+702,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_155_0));
        bufp->chgBit(oldp+703,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_155_1));
        bufp->chgBit(oldp+704,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_156_0));
        bufp->chgBit(oldp+705,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_156_1));
        bufp->chgBit(oldp+706,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_157_0));
        bufp->chgBit(oldp+707,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_157_1));
        bufp->chgBit(oldp+708,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_158_0));
        bufp->chgBit(oldp+709,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_158_1));
        bufp->chgBit(oldp+710,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_159_0));
        bufp->chgBit(oldp+711,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_159_1));
        bufp->chgBit(oldp+712,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_160_0));
        bufp->chgBit(oldp+713,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_160_1));
        bufp->chgBit(oldp+714,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_161_0));
        bufp->chgBit(oldp+715,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_161_1));
        bufp->chgBit(oldp+716,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_162_0));
        bufp->chgBit(oldp+717,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_162_1));
        bufp->chgBit(oldp+718,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_163_0));
        bufp->chgBit(oldp+719,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_163_1));
        bufp->chgBit(oldp+720,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_164_0));
        bufp->chgBit(oldp+721,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_164_1));
        bufp->chgBit(oldp+722,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_165_0));
        bufp->chgBit(oldp+723,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_165_1));
        bufp->chgBit(oldp+724,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_166_0));
        bufp->chgBit(oldp+725,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_166_1));
        bufp->chgBit(oldp+726,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_167_0));
        bufp->chgBit(oldp+727,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_167_1));
        bufp->chgBit(oldp+728,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_168_0));
        bufp->chgBit(oldp+729,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_168_1));
        bufp->chgBit(oldp+730,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_169_0));
        bufp->chgBit(oldp+731,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_169_1));
        bufp->chgBit(oldp+732,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_170_0));
        bufp->chgBit(oldp+733,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_170_1));
        bufp->chgBit(oldp+734,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_171_0));
        bufp->chgBit(oldp+735,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_171_1));
        bufp->chgBit(oldp+736,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_172_0));
        bufp->chgBit(oldp+737,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_172_1));
        bufp->chgBit(oldp+738,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_173_0));
        bufp->chgBit(oldp+739,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_173_1));
        bufp->chgBit(oldp+740,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_174_0));
        bufp->chgBit(oldp+741,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_174_1));
        bufp->chgBit(oldp+742,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_175_0));
        bufp->chgBit(oldp+743,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_175_1));
        bufp->chgBit(oldp+744,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_176_0));
        bufp->chgBit(oldp+745,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_176_1));
        bufp->chgBit(oldp+746,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_177_0));
        bufp->chgBit(oldp+747,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_177_1));
        bufp->chgBit(oldp+748,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_178_0));
        bufp->chgBit(oldp+749,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_178_1));
        bufp->chgBit(oldp+750,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_179_0));
        bufp->chgBit(oldp+751,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_179_1));
        bufp->chgBit(oldp+752,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_180_0));
        bufp->chgBit(oldp+753,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_180_1));
        bufp->chgBit(oldp+754,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_181_0));
        bufp->chgBit(oldp+755,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_181_1));
        bufp->chgBit(oldp+756,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_182_0));
        bufp->chgBit(oldp+757,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_182_1));
        bufp->chgBit(oldp+758,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_183_0));
        bufp->chgBit(oldp+759,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_183_1));
        bufp->chgBit(oldp+760,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_184_0));
        bufp->chgBit(oldp+761,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_184_1));
        bufp->chgBit(oldp+762,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_185_0));
        bufp->chgBit(oldp+763,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_185_1));
        bufp->chgBit(oldp+764,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_186_0));
        bufp->chgBit(oldp+765,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_186_1));
        bufp->chgBit(oldp+766,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_187_0));
        bufp->chgBit(oldp+767,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_187_1));
        bufp->chgBit(oldp+768,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_188_0));
        bufp->chgBit(oldp+769,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_188_1));
        bufp->chgBit(oldp+770,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_189_0));
        bufp->chgBit(oldp+771,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_189_1));
        bufp->chgBit(oldp+772,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_190_0));
        bufp->chgBit(oldp+773,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_190_1));
        bufp->chgBit(oldp+774,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_191_0));
        bufp->chgBit(oldp+775,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_191_1));
        bufp->chgBit(oldp+776,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_192_0));
        bufp->chgBit(oldp+777,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_192_1));
        bufp->chgBit(oldp+778,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_193_0));
        bufp->chgBit(oldp+779,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_193_1));
        bufp->chgBit(oldp+780,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_194_0));
        bufp->chgBit(oldp+781,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_194_1));
        bufp->chgBit(oldp+782,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_195_0));
        bufp->chgBit(oldp+783,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_195_1));
        bufp->chgBit(oldp+784,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_196_0));
        bufp->chgBit(oldp+785,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_196_1));
        bufp->chgBit(oldp+786,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_197_0));
        bufp->chgBit(oldp+787,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_197_1));
        bufp->chgBit(oldp+788,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_198_0));
        bufp->chgBit(oldp+789,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_198_1));
        bufp->chgBit(oldp+790,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_199_0));
        bufp->chgBit(oldp+791,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_199_1));
        bufp->chgBit(oldp+792,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_200_0));
        bufp->chgBit(oldp+793,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_200_1));
        bufp->chgBit(oldp+794,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_201_0));
        bufp->chgBit(oldp+795,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_201_1));
        bufp->chgBit(oldp+796,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_202_0));
        bufp->chgBit(oldp+797,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_202_1));
        bufp->chgBit(oldp+798,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_203_0));
        bufp->chgBit(oldp+799,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_203_1));
        bufp->chgBit(oldp+800,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_204_0));
        bufp->chgBit(oldp+801,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_204_1));
        bufp->chgBit(oldp+802,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_205_0));
        bufp->chgBit(oldp+803,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_205_1));
        bufp->chgBit(oldp+804,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_206_0));
        bufp->chgBit(oldp+805,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_206_1));
        bufp->chgBit(oldp+806,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_207_0));
        bufp->chgBit(oldp+807,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_207_1));
        bufp->chgBit(oldp+808,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_208_0));
        bufp->chgBit(oldp+809,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_208_1));
        bufp->chgBit(oldp+810,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_209_0));
        bufp->chgBit(oldp+811,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_209_1));
        bufp->chgBit(oldp+812,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_210_0));
        bufp->chgBit(oldp+813,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_210_1));
        bufp->chgBit(oldp+814,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_211_0));
        bufp->chgBit(oldp+815,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_211_1));
        bufp->chgBit(oldp+816,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_212_0));
        bufp->chgBit(oldp+817,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_212_1));
        bufp->chgBit(oldp+818,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_213_0));
        bufp->chgBit(oldp+819,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_213_1));
        bufp->chgBit(oldp+820,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_214_0));
        bufp->chgBit(oldp+821,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_214_1));
        bufp->chgBit(oldp+822,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_215_0));
        bufp->chgBit(oldp+823,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_215_1));
        bufp->chgBit(oldp+824,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_216_0));
        bufp->chgBit(oldp+825,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_216_1));
        bufp->chgBit(oldp+826,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_217_0));
        bufp->chgBit(oldp+827,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_217_1));
        bufp->chgBit(oldp+828,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_218_0));
        bufp->chgBit(oldp+829,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_218_1));
        bufp->chgBit(oldp+830,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_219_0));
        bufp->chgBit(oldp+831,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_219_1));
        bufp->chgBit(oldp+832,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_220_0));
        bufp->chgBit(oldp+833,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_220_1));
        bufp->chgBit(oldp+834,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_221_0));
        bufp->chgBit(oldp+835,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_221_1));
        bufp->chgBit(oldp+836,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_222_0));
        bufp->chgBit(oldp+837,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_222_1));
        bufp->chgBit(oldp+838,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_223_0));
        bufp->chgBit(oldp+839,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_223_1));
        bufp->chgBit(oldp+840,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_224_0));
        bufp->chgBit(oldp+841,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_224_1));
        bufp->chgBit(oldp+842,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_225_0));
        bufp->chgBit(oldp+843,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_225_1));
        bufp->chgBit(oldp+844,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_226_0));
        bufp->chgBit(oldp+845,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_226_1));
        bufp->chgBit(oldp+846,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_227_0));
        bufp->chgBit(oldp+847,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_227_1));
        bufp->chgBit(oldp+848,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_228_0));
        bufp->chgBit(oldp+849,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_228_1));
        bufp->chgBit(oldp+850,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_229_0));
        bufp->chgBit(oldp+851,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_229_1));
        bufp->chgBit(oldp+852,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_230_0));
        bufp->chgBit(oldp+853,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_230_1));
        bufp->chgBit(oldp+854,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_231_0));
        bufp->chgBit(oldp+855,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_231_1));
        bufp->chgBit(oldp+856,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_232_0));
        bufp->chgBit(oldp+857,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_232_1));
        bufp->chgBit(oldp+858,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_233_0));
        bufp->chgBit(oldp+859,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_233_1));
        bufp->chgBit(oldp+860,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_234_0));
        bufp->chgBit(oldp+861,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_234_1));
        bufp->chgBit(oldp+862,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_235_0));
        bufp->chgBit(oldp+863,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_235_1));
        bufp->chgBit(oldp+864,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_236_0));
        bufp->chgBit(oldp+865,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_236_1));
        bufp->chgBit(oldp+866,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_237_0));
        bufp->chgBit(oldp+867,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_237_1));
        bufp->chgBit(oldp+868,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_238_0));
        bufp->chgBit(oldp+869,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_238_1));
        bufp->chgBit(oldp+870,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_239_0));
        bufp->chgBit(oldp+871,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_239_1));
        bufp->chgBit(oldp+872,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_240_0));
        bufp->chgBit(oldp+873,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_240_1));
        bufp->chgBit(oldp+874,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_241_0));
        bufp->chgBit(oldp+875,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_241_1));
        bufp->chgBit(oldp+876,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_242_0));
        bufp->chgBit(oldp+877,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_242_1));
        bufp->chgBit(oldp+878,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_243_0));
        bufp->chgBit(oldp+879,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_243_1));
        bufp->chgBit(oldp+880,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_244_0));
        bufp->chgBit(oldp+881,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_244_1));
        bufp->chgBit(oldp+882,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_245_0));
        bufp->chgBit(oldp+883,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_245_1));
        bufp->chgBit(oldp+884,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_246_0));
        bufp->chgBit(oldp+885,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_246_1));
        bufp->chgBit(oldp+886,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_247_0));
        bufp->chgBit(oldp+887,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_247_1));
        bufp->chgBit(oldp+888,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_248_0));
        bufp->chgBit(oldp+889,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_248_1));
        bufp->chgBit(oldp+890,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_249_0));
        bufp->chgBit(oldp+891,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_249_1));
        bufp->chgBit(oldp+892,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_250_0));
        bufp->chgBit(oldp+893,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_250_1));
        bufp->chgBit(oldp+894,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_251_0));
        bufp->chgBit(oldp+895,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_251_1));
        bufp->chgBit(oldp+896,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_252_0));
        bufp->chgBit(oldp+897,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_252_1));
        bufp->chgBit(oldp+898,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_253_0));
        bufp->chgBit(oldp+899,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_253_1));
        bufp->chgBit(oldp+900,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_254_0));
        bufp->chgBit(oldp+901,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_254_1));
        bufp->chgBit(oldp+902,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_255_0));
        bufp->chgBit(oldp+903,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__dirty_255_1));
        bufp->chgBit(oldp+904,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_0));
        bufp->chgBit(oldp+905,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_1));
        bufp->chgBit(oldp+906,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_2));
        bufp->chgBit(oldp+907,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_3));
        bufp->chgBit(oldp+908,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_4));
        bufp->chgBit(oldp+909,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_5));
        bufp->chgBit(oldp+910,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_6));
        bufp->chgBit(oldp+911,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_7));
        bufp->chgBit(oldp+912,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_8));
        bufp->chgBit(oldp+913,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_9));
        bufp->chgBit(oldp+914,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_10));
        bufp->chgBit(oldp+915,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_11));
        bufp->chgBit(oldp+916,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_12));
        bufp->chgBit(oldp+917,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_13));
        bufp->chgBit(oldp+918,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_14));
        bufp->chgBit(oldp+919,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_15));
        bufp->chgBit(oldp+920,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_16));
        bufp->chgBit(oldp+921,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_17));
        bufp->chgBit(oldp+922,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_18));
        bufp->chgBit(oldp+923,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_19));
        bufp->chgBit(oldp+924,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_20));
        bufp->chgBit(oldp+925,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_21));
        bufp->chgBit(oldp+926,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_22));
        bufp->chgBit(oldp+927,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_23));
        bufp->chgBit(oldp+928,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_24));
        bufp->chgBit(oldp+929,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_25));
        bufp->chgBit(oldp+930,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_26));
        bufp->chgBit(oldp+931,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_27));
        bufp->chgBit(oldp+932,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_28));
        bufp->chgBit(oldp+933,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_29));
        bufp->chgBit(oldp+934,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_30));
        bufp->chgBit(oldp+935,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_31));
        bufp->chgBit(oldp+936,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_32));
        bufp->chgBit(oldp+937,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_33));
        bufp->chgBit(oldp+938,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_34));
        bufp->chgBit(oldp+939,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_35));
        bufp->chgBit(oldp+940,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_36));
        bufp->chgBit(oldp+941,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_37));
        bufp->chgBit(oldp+942,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_38));
        bufp->chgBit(oldp+943,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_39));
        bufp->chgBit(oldp+944,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_40));
        bufp->chgBit(oldp+945,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_41));
        bufp->chgBit(oldp+946,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_42));
        bufp->chgBit(oldp+947,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_43));
        bufp->chgBit(oldp+948,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_44));
        bufp->chgBit(oldp+949,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_45));
        bufp->chgBit(oldp+950,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_46));
        bufp->chgBit(oldp+951,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_47));
        bufp->chgBit(oldp+952,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_48));
        bufp->chgBit(oldp+953,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_49));
        bufp->chgBit(oldp+954,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_50));
        bufp->chgBit(oldp+955,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_51));
        bufp->chgBit(oldp+956,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_52));
        bufp->chgBit(oldp+957,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_53));
        bufp->chgBit(oldp+958,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_54));
        bufp->chgBit(oldp+959,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_55));
        bufp->chgBit(oldp+960,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_56));
        bufp->chgBit(oldp+961,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_57));
        bufp->chgBit(oldp+962,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_58));
        bufp->chgBit(oldp+963,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_59));
        bufp->chgBit(oldp+964,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_60));
        bufp->chgBit(oldp+965,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_61));
        bufp->chgBit(oldp+966,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_62));
        bufp->chgBit(oldp+967,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_63));
        bufp->chgBit(oldp+968,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_64));
        bufp->chgBit(oldp+969,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_65));
        bufp->chgBit(oldp+970,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_66));
        bufp->chgBit(oldp+971,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_67));
        bufp->chgBit(oldp+972,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_68));
        bufp->chgBit(oldp+973,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_69));
        bufp->chgBit(oldp+974,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_70));
        bufp->chgBit(oldp+975,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_71));
        bufp->chgBit(oldp+976,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_72));
        bufp->chgBit(oldp+977,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_73));
        bufp->chgBit(oldp+978,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_74));
        bufp->chgBit(oldp+979,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_75));
        bufp->chgBit(oldp+980,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_76));
        bufp->chgBit(oldp+981,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_77));
        bufp->chgBit(oldp+982,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_78));
        bufp->chgBit(oldp+983,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_79));
        bufp->chgBit(oldp+984,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_80));
        bufp->chgBit(oldp+985,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_81));
        bufp->chgBit(oldp+986,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_82));
        bufp->chgBit(oldp+987,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_83));
        bufp->chgBit(oldp+988,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_84));
        bufp->chgBit(oldp+989,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_85));
        bufp->chgBit(oldp+990,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_86));
        bufp->chgBit(oldp+991,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_87));
        bufp->chgBit(oldp+992,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_88));
        bufp->chgBit(oldp+993,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_89));
        bufp->chgBit(oldp+994,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_90));
        bufp->chgBit(oldp+995,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_91));
        bufp->chgBit(oldp+996,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_92));
        bufp->chgBit(oldp+997,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_93));
        bufp->chgBit(oldp+998,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_94));
        bufp->chgBit(oldp+999,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_95));
        bufp->chgBit(oldp+1000,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_96));
        bufp->chgBit(oldp+1001,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_97));
        bufp->chgBit(oldp+1002,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_98));
        bufp->chgBit(oldp+1003,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_99));
        bufp->chgBit(oldp+1004,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_100));
        bufp->chgBit(oldp+1005,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_101));
        bufp->chgBit(oldp+1006,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_102));
        bufp->chgBit(oldp+1007,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_103));
        bufp->chgBit(oldp+1008,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_104));
        bufp->chgBit(oldp+1009,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_105));
        bufp->chgBit(oldp+1010,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_106));
        bufp->chgBit(oldp+1011,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_107));
        bufp->chgBit(oldp+1012,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_108));
        bufp->chgBit(oldp+1013,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_109));
        bufp->chgBit(oldp+1014,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_110));
        bufp->chgBit(oldp+1015,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_111));
        bufp->chgBit(oldp+1016,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_112));
        bufp->chgBit(oldp+1017,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_113));
        bufp->chgBit(oldp+1018,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_114));
        bufp->chgBit(oldp+1019,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_115));
        bufp->chgBit(oldp+1020,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_116));
        bufp->chgBit(oldp+1021,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_117));
        bufp->chgBit(oldp+1022,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_118));
        bufp->chgBit(oldp+1023,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_119));
        bufp->chgBit(oldp+1024,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_120));
        bufp->chgBit(oldp+1025,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_121));
        bufp->chgBit(oldp+1026,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_122));
        bufp->chgBit(oldp+1027,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_123));
        bufp->chgBit(oldp+1028,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_124));
        bufp->chgBit(oldp+1029,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_125));
        bufp->chgBit(oldp+1030,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_126));
        bufp->chgBit(oldp+1031,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_127));
        bufp->chgBit(oldp+1032,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_128));
        bufp->chgBit(oldp+1033,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_129));
        bufp->chgBit(oldp+1034,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_130));
        bufp->chgBit(oldp+1035,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_131));
        bufp->chgBit(oldp+1036,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_132));
        bufp->chgBit(oldp+1037,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_133));
        bufp->chgBit(oldp+1038,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_134));
        bufp->chgBit(oldp+1039,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_135));
        bufp->chgBit(oldp+1040,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_136));
        bufp->chgBit(oldp+1041,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_137));
        bufp->chgBit(oldp+1042,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_138));
        bufp->chgBit(oldp+1043,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_139));
        bufp->chgBit(oldp+1044,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_140));
        bufp->chgBit(oldp+1045,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_141));
        bufp->chgBit(oldp+1046,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_142));
        bufp->chgBit(oldp+1047,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_143));
        bufp->chgBit(oldp+1048,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_144));
        bufp->chgBit(oldp+1049,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_145));
        bufp->chgBit(oldp+1050,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_146));
        bufp->chgBit(oldp+1051,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_147));
        bufp->chgBit(oldp+1052,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_148));
        bufp->chgBit(oldp+1053,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_149));
        bufp->chgBit(oldp+1054,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_150));
        bufp->chgBit(oldp+1055,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_151));
        bufp->chgBit(oldp+1056,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_152));
        bufp->chgBit(oldp+1057,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_153));
        bufp->chgBit(oldp+1058,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_154));
        bufp->chgBit(oldp+1059,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_155));
        bufp->chgBit(oldp+1060,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_156));
        bufp->chgBit(oldp+1061,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_157));
        bufp->chgBit(oldp+1062,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_158));
        bufp->chgBit(oldp+1063,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_159));
        bufp->chgBit(oldp+1064,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_160));
        bufp->chgBit(oldp+1065,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_161));
        bufp->chgBit(oldp+1066,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_162));
        bufp->chgBit(oldp+1067,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_163));
        bufp->chgBit(oldp+1068,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_164));
        bufp->chgBit(oldp+1069,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_165));
        bufp->chgBit(oldp+1070,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_166));
        bufp->chgBit(oldp+1071,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_167));
        bufp->chgBit(oldp+1072,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_168));
        bufp->chgBit(oldp+1073,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_169));
        bufp->chgBit(oldp+1074,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_170));
        bufp->chgBit(oldp+1075,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_171));
        bufp->chgBit(oldp+1076,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_172));
        bufp->chgBit(oldp+1077,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_173));
        bufp->chgBit(oldp+1078,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_174));
        bufp->chgBit(oldp+1079,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_175));
        bufp->chgBit(oldp+1080,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_176));
        bufp->chgBit(oldp+1081,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_177));
        bufp->chgBit(oldp+1082,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_178));
        bufp->chgBit(oldp+1083,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_179));
        bufp->chgBit(oldp+1084,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_180));
        bufp->chgBit(oldp+1085,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_181));
        bufp->chgBit(oldp+1086,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_182));
        bufp->chgBit(oldp+1087,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_183));
        bufp->chgBit(oldp+1088,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_184));
        bufp->chgBit(oldp+1089,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_185));
        bufp->chgBit(oldp+1090,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_186));
        bufp->chgBit(oldp+1091,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_187));
        bufp->chgBit(oldp+1092,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_188));
        bufp->chgBit(oldp+1093,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_189));
        bufp->chgBit(oldp+1094,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_190));
        bufp->chgBit(oldp+1095,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_191));
        bufp->chgBit(oldp+1096,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_192));
        bufp->chgBit(oldp+1097,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_193));
        bufp->chgBit(oldp+1098,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_194));
        bufp->chgBit(oldp+1099,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_195));
        bufp->chgBit(oldp+1100,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_196));
        bufp->chgBit(oldp+1101,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_197));
        bufp->chgBit(oldp+1102,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_198));
        bufp->chgBit(oldp+1103,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_199));
        bufp->chgBit(oldp+1104,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_200));
        bufp->chgBit(oldp+1105,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_201));
        bufp->chgBit(oldp+1106,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_202));
        bufp->chgBit(oldp+1107,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_203));
        bufp->chgBit(oldp+1108,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_204));
        bufp->chgBit(oldp+1109,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_205));
        bufp->chgBit(oldp+1110,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_206));
        bufp->chgBit(oldp+1111,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_207));
        bufp->chgBit(oldp+1112,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_208));
        bufp->chgBit(oldp+1113,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_209));
        bufp->chgBit(oldp+1114,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_210));
        bufp->chgBit(oldp+1115,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_211));
        bufp->chgBit(oldp+1116,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_212));
        bufp->chgBit(oldp+1117,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_213));
        bufp->chgBit(oldp+1118,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_214));
        bufp->chgBit(oldp+1119,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_215));
        bufp->chgBit(oldp+1120,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_216));
        bufp->chgBit(oldp+1121,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_217));
        bufp->chgBit(oldp+1122,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_218));
        bufp->chgBit(oldp+1123,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_219));
        bufp->chgBit(oldp+1124,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_220));
        bufp->chgBit(oldp+1125,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_221));
        bufp->chgBit(oldp+1126,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_222));
        bufp->chgBit(oldp+1127,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_223));
        bufp->chgBit(oldp+1128,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_224));
        bufp->chgBit(oldp+1129,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_225));
        bufp->chgBit(oldp+1130,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_226));
        bufp->chgBit(oldp+1131,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_227));
        bufp->chgBit(oldp+1132,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_228));
        bufp->chgBit(oldp+1133,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_229));
        bufp->chgBit(oldp+1134,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_230));
        bufp->chgBit(oldp+1135,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_231));
        bufp->chgBit(oldp+1136,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_232));
        bufp->chgBit(oldp+1137,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_233));
        bufp->chgBit(oldp+1138,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_234));
        bufp->chgBit(oldp+1139,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_235));
        bufp->chgBit(oldp+1140,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_236));
        bufp->chgBit(oldp+1141,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_237));
        bufp->chgBit(oldp+1142,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_238));
        bufp->chgBit(oldp+1143,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_239));
        bufp->chgBit(oldp+1144,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_240));
        bufp->chgBit(oldp+1145,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_241));
        bufp->chgBit(oldp+1146,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_242));
        bufp->chgBit(oldp+1147,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_243));
        bufp->chgBit(oldp+1148,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_244));
        bufp->chgBit(oldp+1149,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_245));
        bufp->chgBit(oldp+1150,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_246));
        bufp->chgBit(oldp+1151,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_247));
        bufp->chgBit(oldp+1152,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_248));
        bufp->chgBit(oldp+1153,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_249));
        bufp->chgBit(oldp+1154,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_250));
        bufp->chgBit(oldp+1155,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_251));
        bufp->chgBit(oldp+1156,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_252));
        bufp->chgBit(oldp+1157,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_253));
        bufp->chgBit(oldp+1158,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_254));
        bufp->chgBit(oldp+1159,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__lru_255));
        bufp->chgIData(oldp+1160,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__aw_addr),32);
        bufp->chgCData(oldp+1161,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__aw_len),8);
        bufp->chgCData(oldp+1162,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ar_burst),2);
        bufp->chgBit(oldp+1163,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__awvalid));
        bufp->chgIData(oldp+1164,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__w_data),32);
        bufp->chgCData(oldp+1165,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__w_strb),4);
        bufp->chgBit(oldp+1166,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__w_last));
        bufp->chgBit(oldp+1167,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__wvalid));
        bufp->chgCData(oldp+1168,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state),3);
        bufp->chgBit(oldp+1169,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__cacheHit));
        bufp->chgWData(oldp+1170,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__hitdataline),128);
        bufp->chgIData(oldp+1174,(((0U == (3U & (vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_pa 
                                                 >> 2U)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__hitdataline[0U]
                                    : ((1U == (3U & 
                                               (vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_pa 
                                                >> 2U)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__hitdataline[1U]
                                        : ((2U == (3U 
                                                   & (vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_pa 
                                                      >> 2U)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__hitdataline[2U]
                                            : vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__hitdataline[3U])))),32);
        bufp->chgIData(oldp+1175,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__imm_cached_ans),32);
        bufp->chgBit(oldp+1176,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__ansvalid));
        bufp->chgIData(oldp+1177,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__uncachedAns),32);
        bufp->chgWData(oldp+1178,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__savedInfo_linedata_0),128);
        bufp->chgWData(oldp+1182,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__savedInfo_linedata_1),128);
        bufp->chgIData(oldp+1186,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__savedInfo_addr),32);
        bufp->chgCData(oldp+1187,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__count),4);
        bufp->chgWData(oldp+1188,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__linedata),128);
        bufp->chgCData(oldp+1192,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__wmask),4);
        bufp->chgBit(oldp+1193,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__imm_ansvalid));
        bufp->chgCData(oldp+1194,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_0),7);
        bufp->chgBit(oldp+1195,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_1));
        bufp->chgBit(oldp+1196,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_2));
        bufp->chgBit(oldp+1197,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_3));
        bufp->chgBit(oldp+1198,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__wstate));
        bufp->chgBit(oldp+1199,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_4));
        bufp->chgBit(oldp+1200,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__replaceComplete));
        bufp->chgCData(oldp+1201,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__data_1_addrb),8);
        bufp->chgCData(oldp+1202,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__tagV_1_addrb),8);
        bufp->chgBit(oldp+1203,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_8));
        bufp->chgCData(oldp+1204,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_9),8);
        bufp->chgCData(oldp+1205,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__casez_tmp_10),8);
        if ((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            if ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
                __Vtemp_h84d672ea__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[0U];
                __Vtemp_h84d672ea__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[1U];
                __Vtemp_h84d672ea__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[2U];
                __Vtemp_h84d672ea__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[3U];
            } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
                __Vtemp_h84d672ea__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[0U];
                __Vtemp_h84d672ea__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[1U];
                __Vtemp_h84d672ea__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[2U];
                __Vtemp_h84d672ea__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_34[3U];
            } else {
                __Vtemp_h84d672ea__0[0U] = 0U;
                __Vtemp_h84d672ea__0[1U] = 0U;
                __Vtemp_h84d672ea__0[2U] = 0U;
                __Vtemp_h84d672ea__0[3U] = 0U;
            }
        } else if ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            __Vtemp_h84d672ea__0[0U] = 0U;
            __Vtemp_h84d672ea__0[1U] = 0U;
            __Vtemp_h84d672ea__0[2U] = 0U;
            __Vtemp_h84d672ea__0[3U] = 0U;
        } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            __Vtemp_h84d672ea__0[0U] = 0U;
            __Vtemp_h84d672ea__0[1U] = 0U;
            __Vtemp_h84d672ea__0[2U] = 0U;
            __Vtemp_h84d672ea__0[3U] = 0U;
        } else if (vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_3) {
            __Vtemp_h84d672ea__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[0U];
            __Vtemp_h84d672ea__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[1U];
            __Vtemp_h84d672ea__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[2U];
            __Vtemp_h84d672ea__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[3U];
        } else {
            __Vtemp_h84d672ea__0[0U] = 0U;
            __Vtemp_h84d672ea__0[1U] = 0U;
            __Vtemp_h84d672ea__0[2U] = 0U;
            __Vtemp_h84d672ea__0[3U] = 0U;
        }
        bufp->chgWData(oldp+1206,(__Vtemp_h84d672ea__0),128);
        if ((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            if ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
                __Vtemp_h4ecc2d51__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[0U];
                __Vtemp_h4ecc2d51__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[1U];
                __Vtemp_h4ecc2d51__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[2U];
                __Vtemp_h4ecc2d51__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[3U];
            } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
                __Vtemp_h4ecc2d51__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[0U];
                __Vtemp_h4ecc2d51__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[1U];
                __Vtemp_h4ecc2d51__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[2U];
                __Vtemp_h4ecc2d51__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_35[3U];
            } else {
                __Vtemp_h4ecc2d51__0[0U] = 0U;
                __Vtemp_h4ecc2d51__0[1U] = 0U;
                __Vtemp_h4ecc2d51__0[2U] = 0U;
                __Vtemp_h4ecc2d51__0[3U] = 0U;
            }
        } else if ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            __Vtemp_h4ecc2d51__0[0U] = 0U;
            __Vtemp_h4ecc2d51__0[1U] = 0U;
            __Vtemp_h4ecc2d51__0[2U] = 0U;
            __Vtemp_h4ecc2d51__0[3U] = 0U;
        } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))) {
            __Vtemp_h4ecc2d51__0[0U] = 0U;
            __Vtemp_h4ecc2d51__0[1U] = 0U;
            __Vtemp_h4ecc2d51__0[2U] = 0U;
            __Vtemp_h4ecc2d51__0[3U] = 0U;
        } else if (vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_4) {
            __Vtemp_h4ecc2d51__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[0U];
            __Vtemp_h4ecc2d51__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[1U];
            __Vtemp_h4ecc2d51__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[2U];
            __Vtemp_h4ecc2d51__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_6[3U];
        } else {
            __Vtemp_h4ecc2d51__0[0U] = 0U;
            __Vtemp_h4ecc2d51__0[1U] = 0U;
            __Vtemp_h4ecc2d51__0[2U] = 0U;
            __Vtemp_h4ecc2d51__0[3U] = 0U;
        }
        bufp->chgWData(oldp+1210,(__Vtemp_h4ecc2d51__0),128);
        bufp->chgCData(oldp+1214,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT____Vcellinp__xilinx_simple_dual_port_1_clock_ram_write_first__addra),8);
        bufp->chgIData(oldp+1215,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_36)
                                    ? 0U : (1U | (0x1ffffeU 
                                                  & (vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__savedInfo_addr 
                                                     >> 0xbU))))),21);
        bufp->chgBit(oldp+1216,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_24)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_26))));
        bufp->chgIData(oldp+1217,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___xilinx_simple_dual_port_1_clock_ram_write_first_doutb),21);
        bufp->chgCData(oldp+1218,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first__DOT__addr_r),8);
        bufp->chgCData(oldp+1219,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT____Vcellinp__xilinx_simple_dual_port_1_clock_ram_write_first_1__addra),8);
        bufp->chgIData(oldp+1220,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_37)
                                    ? 0U : (1U | (0x1ffffeU 
                                                  & (vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__savedInfo_addr 
                                                     >> 0xbU))))),21);
        bufp->chgBit(oldp+1221,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_24)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_27))));
        bufp->chgIData(oldp+1222,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___xilinx_simple_dual_port_1_clock_ram_write_first_1_doutb),21);
        bufp->chgCData(oldp+1223,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_1__DOT__addr_r),8);
        bufp->chgBit(oldp+1224,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_3)
                                  : ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_23)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_26)))));
        bufp->chgWData(oldp+1225,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___xilinx_simple_dual_port_1_clock_ram_write_first_2_doutb),128);
        bufp->chgCData(oldp+1229,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_2__DOT__addr_r),8);
        bufp->chgBit(oldp+1230,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_4)
                                  : ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_23)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_27)))));
        bufp->chgWData(oldp+1231,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___xilinx_simple_dual_port_1_clock_ram_write_first_3_doutb),128);
        bufp->chgCData(oldp+1235,(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__xilinx_simple_dual_port_1_clock_ram_write_first_3__DOT__addr_r),8);
        bufp->chgBit(oldp+1236,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+1237,(vlSelf->mycpu_top__DOT__core__DOT___InstBuffer_io_to_valid));
        bufp->chgIData(oldp+1238,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_pc)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_pc))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_pc)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_pc)))),32);
        bufp->chgIData(oldp+1239,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_inst)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_inst))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_inst)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_inst)))),32);
        bufp->chgCData(oldp+1240,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_excType))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_excType)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_excType))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_excType))))),7);
        bufp->chgBit(oldp+1241,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__casez_tmp_2));
        bufp->chgIData(oldp+1242,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_predict_tar)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_predict_tar))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_predict_tar)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_predict_tar)))),32);
        bufp->chgIData(oldp+1243,(((4U & ((IData)(1U) 
                                          + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                    ? ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_pc)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_pc))
                                    : ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_pc)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_pc)))),32);
        bufp->chgIData(oldp+1244,(((4U & ((IData)(1U) 
                                          + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                    ? ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_inst)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_inst))
                                    : ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_inst)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_inst
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_inst)))),32);
        bufp->chgCData(oldp+1245,(((4U & ((IData)(1U) 
                                          + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                    ? ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_excType))
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_excType)))
                                    : ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_excType))
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_excType)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_excType))))),7);
        bufp->chgBit(oldp+1246,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__casez_tmp_7));
        bufp->chgIData(oldp+1247,(((4U & ((IData)(1U) 
                                          + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                    ? ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_predict_tar)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_predict_tar))
                                    : ((2U & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                        ? ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_predict_tar)
                                        : ((1U & ((IData)(1U) 
                                                  + (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_predict_tar
                                            : vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_predict_tar)))),32);
        bufp->chgBit(oldp+1248,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+1249,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_2));
        bufp->chgIData(oldp+1250,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_pc)),32);
        bufp->chgIData(oldp+1251,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst)),32);
        bufp->chgCData(oldp+1252,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))),4);
        bufp->chgCData(oldp+1253,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__op_type))),5);
        bufp->chgCData(oldp+1254,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush) 
                                    | (0x25U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_0_exc_type)))
                                    ? 0U : (((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                             | (6U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)))
                                             ? 1U : 
                                            (2U | (1U 
                                                   & (~ 
                                                      ((5U 
                                                        == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                                       | (4U 
                                                          == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))))))))),2);
        bufp->chgIData(oldp+1255,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT___Decoder_io_imm)),32);
        bufp->chgBit(oldp+1256,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0) 
                                    | (0xeU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+1257,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (0xaU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+1258,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0))));
        bufp->chgBit(oldp+1259,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                    | ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                       | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)))))));
        bufp->chgBit(oldp+1260,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((~ ((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                        | (((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT____VdfgTmp_h633f798e__0)) 
                                            & (3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))) 
                                           | ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                              | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))))))) 
                                    & (0U != (0x1fU 
                                              & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst))))));
        bufp->chgCData(oldp+1261,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                             >> 5U)))),5);
        bufp->chgCData(oldp+1262,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & 
                                            ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))
                                              ? vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst
                                              : (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                                 >> 0xaU))))),5);
        bufp->chgCData(oldp+1263,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst))),5);
        bufp->chgCData(oldp+1264,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_0_exc_type))),7);
        bufp->chgBit(oldp+1265,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_predict_en))));
        bufp->chgIData(oldp+1266,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_predict_tar)),32);
        bufp->chgIData(oldp+1267,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_pc)),32);
        bufp->chgIData(oldp+1268,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst)),32);
        bufp->chgCData(oldp+1269,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))),4);
        bufp->chgCData(oldp+1270,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__op_type))),5);
        bufp->chgCData(oldp+1271,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush) 
                                    | (0x25U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_1_exc_type)))
                                    ? 0U : (((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                             | (6U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)))
                                             ? 1U : 
                                            (2U | (1U 
                                                   & (~ 
                                                      ((5U 
                                                        == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                                       | (4U 
                                                          == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))))))))),2);
        bufp->chgIData(oldp+1272,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT___Decoder_1_io_imm)),32);
        bufp->chgBit(oldp+1273,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0) 
                                    | (0xeU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                                >> 0x19U))))));
        bufp->chgBit(oldp+1274,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (0xaU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+1275,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0))));
        bufp->chgBit(oldp+1276,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                    | ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                       | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)))))));
        bufp->chgBit(oldp+1277,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & ((~ ((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                        | (((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT____VdfgTmp_h633f798e__0)) 
                                            & (3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))) 
                                           | ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                              | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0)) 
                                                 & (1U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))))))) 
                                    & (0U != (0x1fU 
                                              & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst))))));
        bufp->chgCData(oldp+1278,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                             >> 5U)))),5);
        bufp->chgCData(oldp+1279,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & 
                                            ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))
                                              ? vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst
                                              : (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                                 >> 0xaU))))),5);
        bufp->chgCData(oldp+1280,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst))),5);
        bufp->chgCData(oldp+1281,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_1_exc_type))),7);
        bufp->chgBit(oldp+1282,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_predict_en))));
        bufp->chgIData(oldp+1283,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_predict_tar)),32);
        bufp->chgBit(oldp+1284,(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush));
        bufp->chgIData(oldp+1285,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_pc),32);
        bufp->chgIData(oldp+1286,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst),32);
        bufp->chgCData(oldp+1287,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_exc_type),7);
        bufp->chgBit(oldp+1288,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_predict_en));
        bufp->chgIData(oldp+1289,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_predict_tar),32);
        bufp->chgIData(oldp+1290,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_pc),32);
        bufp->chgIData(oldp+1291,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst),32);
        bufp->chgCData(oldp+1292,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_exc_type),7);
        bufp->chgBit(oldp+1293,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_predict_en));
        bufp->chgIData(oldp+1294,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_predict_tar),32);
        bufp->chgCData(oldp+1295,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_0_exc_type),7);
        bufp->chgCData(oldp+1296,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__to_info_bits_1_exc_type),7);
        bufp->chgCData(oldp+1297,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type),4);
        bufp->chgCData(oldp+1298,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__op_type),5);
        bufp->chgBit(oldp+1299,(((~ ((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                     | (((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT____VdfgTmp_h633f798e__0)) 
                                         & (3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))) 
                                        | ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                           | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0)) 
                                              & (1U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))))))) 
                                 & (0U != (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst)))));
        bufp->chgCData(oldp+1300,((0x1fU & (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                            >> 5U))),5);
        bufp->chgCData(oldp+1301,((0x1fU & ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))
                                             ? vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst
                                             : (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1302,((0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst)),5);
        bufp->chgIData(oldp+1303,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT___Decoder_io_imm),32);
        bufp->chgCData(oldp+1304,((((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                    & (0U != vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_pc))
                                    ? 0xdU : (((8U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                               & (2U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__op_type)))
                                               ? 0xcU
                                               : ((
                                                   (8U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__op_type)))
                                                   ? 0xbU
                                                   : 
                                                  (((8U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__op_type)))
                                                    ? 0x26U
                                                    : 0x25U))))),7);
        bufp->chgCData(oldp+1305,((((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                    | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)))
                                    ? 1U : (2U | (1U 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                                      | (4U 
                                                         == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)))))))),2);
        bufp->chgBit(oldp+1306,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0) 
                                 | (0xeU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+1307,((0xaU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_0_inst 
                                          >> 0x19U))));
        bufp->chgBit(oldp+1308,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__io_src2IsFour_0));
        bufp->chgBit(oldp+1309,(((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                 | ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type)) 
                                    | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))))));
        bufp->chgBit(oldp+1310,((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))));
        bufp->chgBit(oldp+1311,((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder__DOT__func_type))));
        bufp->chgCData(oldp+1312,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type),4);
        bufp->chgCData(oldp+1313,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__op_type),5);
        bufp->chgBit(oldp+1314,(((~ ((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                     | (((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT____VdfgTmp_h633f798e__0)) 
                                         & (3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))) 
                                        | ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                           | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0)) 
                                              & (1U 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))))))) 
                                 & (0U != (0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst)))));
        bufp->chgCData(oldp+1315,((0x1fU & (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                            >> 5U))),5);
        bufp->chgCData(oldp+1316,((0x1fU & ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))
                                             ? vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst
                                             : (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                                >> 0xaU)))),5);
        bufp->chgCData(oldp+1317,((0x1fU & vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst)),5);
        bufp->chgIData(oldp+1318,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT___Decoder_1_io_imm),32);
        bufp->chgCData(oldp+1319,((((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                    & (0U != vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_pc))
                                    ? 0xdU : (((8U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                               & (2U 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__op_type)))
                                               ? 0xcU
                                               : ((
                                                   (8U 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                                   & (0U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__op_type)))
                                                   ? 0xbU
                                                   : 
                                                  (((8U 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                                    & (1U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__op_type)))
                                                    ? 0x26U
                                                    : 0x25U))))),7);
        bufp->chgCData(oldp+1320,((((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                    | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)))
                                    ? 1U : (2U | (1U 
                                                  & (~ 
                                                     ((5U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                                      | (4U 
                                                         == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)))))))),2);
        bufp->chgBit(oldp+1321,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0) 
                                 | (0xeU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                             >> 0x19U)))));
        bufp->chgBit(oldp+1322,((0xaU == (vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__from_1_bits_1_inst 
                                          >> 0x19U))));
        bufp->chgBit(oldp+1323,(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__io_src2IsFour_0));
        bufp->chgBit(oldp+1324,(((3U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                 | ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type)) 
                                    | (6U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))))));
        bufp->chgBit(oldp+1325,((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))));
        bufp->chgBit(oldp+1326,((8U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__Decoder_1__DOT__func_type))));
        bufp->chgBit(oldp+1327,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+1328,(vlSelf->mycpu_top__DOT__core__DOT___RenameTop_io_to_valid));
        bufp->chgIData(oldp+1329,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_pc),32);
        bufp->chgIData(oldp+1330,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_inst),32);
        bufp->chgCData(oldp+1331,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_func_type),4);
        bufp->chgCData(oldp+1332,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_op_type),5);
        bufp->chgCData(oldp+1333,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_pipelineType),2);
        bufp->chgIData(oldp+1334,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_imm),32);
        bufp->chgBit(oldp+1335,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_src1Ispc));
        bufp->chgBit(oldp+1336,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_src1IsZero));
        bufp->chgBit(oldp+1337,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_src2IsFour));
        bufp->chgBit(oldp+1338,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_src2IsImm));
        bufp->chgBit(oldp+1339,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_iswf));
        bufp->chgCData(oldp+1340,(((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_rdInfo_areg))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_3)
                                    : 0U)),6);
        bufp->chgCData(oldp+1341,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp),6);
        bufp->chgCData(oldp+1342,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_0),6);
        bufp->chgCData(oldp+1343,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_rdInfo_areg),5);
        bufp->chgCData(oldp+1344,(((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_rdInfo_areg))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__io_rename_0_preg_0)
                                    : 0U)),6);
        bufp->chgCData(oldp+1345,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushPtr),5);
        bufp->chgCData(oldp+1346,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_exc_type),7);
        bufp->chgBit(oldp+1347,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_predict_en));
        bufp->chgIData(oldp+1348,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_predict_tar),32);
        bufp->chgIData(oldp+1349,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_pc),32);
        bufp->chgIData(oldp+1350,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_inst),32);
        bufp->chgCData(oldp+1351,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_func_type),4);
        bufp->chgCData(oldp+1352,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_op_type),5);
        bufp->chgCData(oldp+1353,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_pipelineType),2);
        bufp->chgIData(oldp+1354,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_imm),32);
        bufp->chgBit(oldp+1355,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_src1Ispc));
        bufp->chgBit(oldp+1356,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_src1IsZero));
        bufp->chgBit(oldp+1357,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_src2IsFour));
        bufp->chgBit(oldp+1358,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_src2IsImm));
        bufp->chgBit(oldp+1359,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_iswf));
        bufp->chgCData(oldp+1360,(((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_rdInfo_areg))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_4)
                                    : 0U)),6);
        bufp->chgCData(oldp+1361,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_1),6);
        bufp->chgCData(oldp+1362,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_2),6);
        bufp->chgCData(oldp+1363,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_rdInfo_areg),5);
        bufp->chgCData(oldp+1364,(((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_rdInfo_areg))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__io_rename_1_preg_0)
                                    : 0U)),6);
        bufp->chgCData(oldp+1365,((0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushPtr)))),5);
        bufp->chgCData(oldp+1366,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_exc_type),7);
        bufp->chgBit(oldp+1367,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_predict_en));
        bufp->chgIData(oldp+1368,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_predict_tar),32);
        bufp->chgBit(oldp+1369,((1U & (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__full)))));
        bufp->chgBit(oldp+1370,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_0_valid_0));
        bufp->chgIData(oldp+1371,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc
                                        : 0U))),32);
        bufp->chgIData(oldp+1372,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst
                                        : 0U))),32);
        bufp->chgCData(oldp+1373,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type)
                                        : 0U))),4);
        bufp->chgCData(oldp+1374,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type)
                                        : 0U))),5);
        bufp->chgIData(oldp+1375,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm
                                        : 0U))),32);
        bufp->chgBit(oldp+1376,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc)))));
        bufp->chgBit(oldp+1377,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero)))));
        bufp->chgBit(oldp+1378,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour)))));
        bufp->chgBit(oldp+1379,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm)))));
        bufp->chgBit(oldp+1380,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf)))));
        bufp->chgCData(oldp+1381,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1382,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1383,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1384,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg)
                                        : 0U))),5);
        bufp->chgCData(oldp+1385,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1386,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId)
                                        : 0U))),5);
        bufp->chgCData(oldp+1387,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type)
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type)
                                        : 0U))),7);
        bufp->chgBit(oldp+1388,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en)))));
        bufp->chgIData(oldp+1389,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar
                                    : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar
                                        : 0U))),32);
        bufp->chgBit(oldp+1390,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en)
                                  : ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en)))));
        bufp->chgBit(oldp+1391,((1U & (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__full)))));
        bufp->chgBit(oldp+1392,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_1_valid_0));
        bufp->chgIData(oldp+1393,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc
                                        : 0U))),32);
        bufp->chgIData(oldp+1394,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst
                                        : 0U))),32);
        bufp->chgCData(oldp+1395,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type)
                                        : 0U))),4);
        bufp->chgCData(oldp+1396,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type)
                                        : 0U))),5);
        bufp->chgIData(oldp+1397,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm
                                        : 0U))),32);
        bufp->chgBit(oldp+1398,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc)))));
        bufp->chgBit(oldp+1399,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero)))));
        bufp->chgBit(oldp+1400,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour)))));
        bufp->chgBit(oldp+1401,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm)))));
        bufp->chgBit(oldp+1402,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf)))));
        bufp->chgCData(oldp+1403,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1404,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1405,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1406,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg)
                                        : 0U))),5);
        bufp->chgCData(oldp+1407,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg)
                                        : 0U))),6);
        bufp->chgCData(oldp+1408,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId)
                                        : 0U))),5);
        bufp->chgCData(oldp+1409,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type)
                                        : 0U))),7);
        bufp->chgBit(oldp+1410,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en)))));
        bufp->chgIData(oldp+1411,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar
                                        : 0U))),32);
        bufp->chgBit(oldp+1412,(((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0)) 
                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en)))));
        bufp->chgBit(oldp+1413,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__full)))));
        bufp->chgBit(oldp+1414,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_2_valid_0));
        bufp->chgIData(oldp+1415,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_pc),32);
        bufp->chgCData(oldp+1416,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_func_type),4);
        bufp->chgCData(oldp+1417,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_op_type),5);
        bufp->chgIData(oldp+1418,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_imm),32);
        bufp->chgBit(oldp+1419,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_src1Ispc));
        bufp->chgBit(oldp+1420,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_src1IsZero));
        bufp->chgBit(oldp+1421,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_src2IsFour));
        bufp->chgBit(oldp+1422,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_src2IsImm));
        bufp->chgBit(oldp+1423,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_iswf));
        bufp->chgCData(oldp+1424,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_opreg),6);
        bufp->chgCData(oldp+1425,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_rjInfo_preg),6);
        bufp->chgCData(oldp+1426,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_rkInfo_preg),6);
        bufp->chgCData(oldp+1427,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_rdInfo_areg),5);
        bufp->chgCData(oldp+1428,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_rdInfo_preg),6);
        bufp->chgCData(oldp+1429,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_robId),5);
        bufp->chgCData(oldp+1430,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_exc_type),7);
        bufp->chgBit(oldp+1431,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_2_bits_realBr_en));
        bufp->chgBit(oldp+1432,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__full)))));
        bufp->chgBit(oldp+1433,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_3_valid_0));
        bufp->chgIData(oldp+1434,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_pc),32);
        bufp->chgCData(oldp+1435,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_func_type),4);
        bufp->chgCData(oldp+1436,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_op_type),5);
        bufp->chgIData(oldp+1437,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_imm),32);
        bufp->chgBit(oldp+1438,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_src1Ispc));
        bufp->chgBit(oldp+1439,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_src1IsZero));
        bufp->chgBit(oldp+1440,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_iswf));
        bufp->chgCData(oldp+1441,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_opreg),6);
        bufp->chgCData(oldp+1442,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_rjInfo_preg),6);
        bufp->chgCData(oldp+1443,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_rkInfo_preg),6);
        bufp->chgCData(oldp+1444,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_rdInfo_areg),5);
        bufp->chgCData(oldp+1445,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_rdInfo_preg),6);
        bufp->chgIData(oldp+1446,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_rdInfo_data),32);
        bufp->chgCData(oldp+1447,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_robId),5);
        bufp->chgCData(oldp+1448,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_exc_type),7);
        bufp->chgBit(oldp+1449,(vlSelf->mycpu_top__DOT__core__DOT___DispatchTop_io_to_3_bits_realBr_en));
        bufp->chgCData(oldp+1450,(((IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__full)
                                    ? 4U : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__topPtr))),3);
        bufp->chgCData(oldp+1451,(((IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__full)
                                    ? 4U : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__topPtr))),3);
        bufp->chgBit(oldp+1452,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__stall));
        bufp->chgIData(oldp+1453,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pc),32);
        bufp->chgIData(oldp+1454,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_inst),32);
        bufp->chgCData(oldp+1455,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_func_type),4);
        bufp->chgCData(oldp+1456,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_op_type),5);
        bufp->chgCData(oldp+1457,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_pipelineType),2);
        bufp->chgIData(oldp+1458,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_imm),32);
        bufp->chgBit(oldp+1459,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1Ispc));
        bufp->chgBit(oldp+1460,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src1IsZero));
        bufp->chgBit(oldp+1461,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsFour));
        bufp->chgBit(oldp+1462,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_src2IsImm));
        bufp->chgBit(oldp+1463,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_iswf));
        bufp->chgCData(oldp+1464,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_opreg),6);
        bufp->chgCData(oldp+1465,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rjInfo_preg),6);
        bufp->chgCData(oldp+1466,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rkInfo_preg),6);
        bufp->chgCData(oldp+1467,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_areg),5);
        bufp->chgCData(oldp+1468,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_preg),6);
        bufp->chgIData(oldp+1469,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_rdInfo_data),32);
        bufp->chgCData(oldp+1470,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_robId),5);
        bufp->chgCData(oldp+1471,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_exc_type),7);
        bufp->chgBit(oldp+1472,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_en));
        bufp->chgIData(oldp+1473,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_predict_tar),32);
        bufp->chgBit(oldp+1474,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_0_realBr_en));
        bufp->chgIData(oldp+1475,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pc),32);
        bufp->chgIData(oldp+1476,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_inst),32);
        bufp->chgCData(oldp+1477,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_func_type),4);
        bufp->chgCData(oldp+1478,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_op_type),5);
        bufp->chgCData(oldp+1479,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_pipelineType),2);
        bufp->chgIData(oldp+1480,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_imm),32);
        bufp->chgBit(oldp+1481,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1Ispc));
        bufp->chgBit(oldp+1482,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src1IsZero));
        bufp->chgBit(oldp+1483,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsFour));
        bufp->chgBit(oldp+1484,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_src2IsImm));
        bufp->chgBit(oldp+1485,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_iswf));
        bufp->chgCData(oldp+1486,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_opreg),6);
        bufp->chgCData(oldp+1487,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rjInfo_preg),6);
        bufp->chgCData(oldp+1488,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rkInfo_preg),6);
        bufp->chgCData(oldp+1489,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_areg),5);
        bufp->chgCData(oldp+1490,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_preg),6);
        bufp->chgIData(oldp+1491,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_rdInfo_data),32);
        bufp->chgCData(oldp+1492,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_robId),5);
        bufp->chgCData(oldp+1493,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_exc_type),7);
        bufp->chgBit(oldp+1494,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_en));
        bufp->chgIData(oldp+1495,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_predict_tar),32);
        bufp->chgBit(oldp+1496,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__info_bits_1_realBr_en));
        bufp->chgBit(oldp+1497,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__validReg));
        bufp->chgCData(oldp+1498,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0),2);
        bufp->chgCData(oldp+1499,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1),2);
        bufp->chgBit(oldp+1500,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__cango_0));
        bufp->chgBit(oldp+1501,(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__cango_1));
        bufp->chgBit(oldp+1502,((1U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                        ? (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__full))
                                        : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                            ? (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__full))
                                            : ((2U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                                ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__full))
                                                : (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__full))))))));
        bufp->chgBit(oldp+1503,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_0_valid_0)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_1_valid_0)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_0))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_2_valid_0)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_3_valid_0))))));
        bufp->chgBit(oldp+1504,((1U & ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                        ? (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__full))
                                        : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                            ? (~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__full))
                                            : ((2U 
                                                == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                                ? (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__full))
                                                : (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__full))))))));
        bufp->chgBit(oldp+1505,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_0_valid_0)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_1_valid_0)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__port_1))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_2_valid_0)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DispatchTop__DOT__io_to_3_valid_0))))));
        bufp->chgBit(oldp+1506,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+1507,(vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__from_2));
        bufp->chgIData(oldp+1508,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc)),32);
        bufp->chgIData(oldp+1509,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : ((IData)(4U) 
                                            + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc))),32);
        bufp->chgBit(oldp+1510,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)))));
        bufp->chgBit(oldp+1511,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                       & (((IData)(4U) 
                                           + vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc) 
                                          >> 2U)))));
        bufp->chgIData(oldp+1512,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0x1fffffffU 
                                            & vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc))),32);
        bufp->chgBit(oldp+1513,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+1514,(vlSelf->mycpu_top__DOT__core__DOT___FetchTop_io_to_valid));
        bufp->chgIData(oldp+1515,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc)),32);
        bufp->chgIData(oldp+1516,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc_add_4)),32);
        bufp->chgIData(oldp+1517,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT____VdfgTmp_ha6903d28__0)
                                             ? vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_1
                                             : vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_0))),32);
        bufp->chgIData(oldp+1518,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT____VdfgTmp_ha6903d28__0)
                                             ? vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_0
                                             : vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_1))),32);
        bufp->chgBit(oldp+1519,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_instGroupValid_0))));
        bufp->chgBit(oldp+1520,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_instGroupValid_1))));
        bufp->chgCData(oldp+1521,(vlSelf->mycpu_top__DOT__core__DOT___FetchTop_io_to_bits_bits_0_fetchExc_0),7);
        bufp->chgBit(oldp+1522,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_predict_en))));
        bufp->chgIData(oldp+1523,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_predict_tar)),32);
        bufp->chgBit(oldp+1524,(vlSelf->mycpu_top__DOT__core__DOT___ICache_io_fetch_answer_valid));
        bufp->chgIData(oldp+1525,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__i_ans_valid)
                                    ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_0)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[0U]
                                            : 0U) : 
                                       ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_9)
                                         ? 0U : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_0))
                                    : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_0)),32);
        bufp->chgIData(oldp+1526,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__i_ans_valid)
                                    ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_0)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[1U]
                                            : 0U) : 
                                       ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_9)
                                         ? 0U : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_1))
                                    : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_1)),32);
        bufp->chgIData(oldp+1527,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__i_ans_valid)
                                    ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_0)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[2U]
                                            : 0U) : 
                                       ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_9)
                                         ? 0U : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_2))
                                    : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_2)),32);
        bufp->chgIData(oldp+1528,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__i_ans_valid)
                                    ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_0)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[3U]
                                            : 0U) : 
                                       ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT___GEN_9)
                                         ? 0U : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_3))
                                    : vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_3)),32);
        bufp->chgBit(oldp+1529,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__io_iCache_request_valid_r));
        bufp->chgIData(oldp+1530,(vlSelf->mycpu_top__DOT__core__DOT___FetchTop_io_iCache_request_bits),32);
        bufp->chgIData(oldp+1531,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc),32);
        bufp->chgIData(oldp+1532,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc_add_4),32);
        bufp->chgBit(oldp+1533,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_instGroupValid_0));
        bufp->chgBit(oldp+1534,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_instGroupValid_1));
        bufp->chgBit(oldp+1535,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_predict_en));
        bufp->chgIData(oldp+1536,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_predict_tar),32);
        bufp->chgIData(oldp+1537,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pa),32);
        bufp->chgBit(oldp+1538,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_isDirect));
        bufp->chgBit(oldp+1539,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_2));
        bufp->chgCData(oldp+1540,(((IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)
                                    ? 0U : (0xfU & vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc))),4);
        bufp->chgIData(oldp+1541,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_0),32);
        bufp->chgIData(oldp+1542,(vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__instVec_1),32);
        bufp->chgCData(oldp+1543,((((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT___FlushCtrl_io_frontFlush)) 
                                    & (0U != (3U & vlSelf->mycpu_top__DOT__core__DOT__FetchTop__DOT__from_1_bits_0_pc)))
                                    ? 8U : 0x25U)),7);
        bufp->chgBit(oldp+1544,(vlSelf->mycpu_top__DOT__core__DOT__FlushCtrl__DOT__state));
        bufp->chgCData(oldp+1545,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg),6);
        bufp->chgIData(oldp+1546,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp),32);
        bufp->chgIData(oldp+1547,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rjInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp)))),32);
        bufp->chgCData(oldp+1548,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg),6);
        bufp->chgIData(oldp+1549,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_0),32);
        bufp->chgIData(oldp+1550,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rkInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_0)))),32);
        bufp->chgCData(oldp+1551,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg),6);
        bufp->chgIData(oldp+1552,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_1),32);
        bufp->chgIData(oldp+1553,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rjInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_1)))),32);
        bufp->chgCData(oldp+1554,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg),6);
        bufp->chgIData(oldp+1555,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_2),32);
        bufp->chgIData(oldp+1556,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rkInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_2)))),32);
        bufp->chgCData(oldp+1557,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg),6);
        bufp->chgIData(oldp+1558,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_3),32);
        bufp->chgIData(oldp+1559,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_3)))),32);
        bufp->chgCData(oldp+1560,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg),6);
        bufp->chgIData(oldp+1561,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_4),32);
        bufp->chgIData(oldp+1562,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_4)))),32);
        bufp->chgCData(oldp+1563,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg),6);
        bufp->chgIData(oldp+1564,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_5),32);
        bufp->chgIData(oldp+1565,((((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                    : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                        & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                           == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                        : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                            : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_5)))),32);
        bufp->chgBit(oldp+1566,(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid));
        bufp->chgCData(oldp+1567,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+1568,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data),32);
        bufp->chgBit(oldp+1569,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_0_0));
        bufp->chgBit(oldp+1570,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_0_1));
        bufp->chgBit(oldp+1571,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_1_0));
        bufp->chgBit(oldp+1572,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_1_1));
        bufp->chgBit(oldp+1573,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_2_0));
        bufp->chgBit(oldp+1574,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_2_1));
        bufp->chgBit(oldp+1575,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_3_0));
        bufp->chgBit(oldp+1576,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_3_1));
        bufp->chgBit(oldp+1577,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_4_0));
        bufp->chgBit(oldp+1578,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_4_1));
        bufp->chgBit(oldp+1579,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_5_0));
        bufp->chgBit(oldp+1580,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_5_1));
        bufp->chgBit(oldp+1581,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_6_0));
        bufp->chgBit(oldp+1582,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_6_1));
        bufp->chgBit(oldp+1583,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_7_0));
        bufp->chgBit(oldp+1584,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_7_1));
        bufp->chgBit(oldp+1585,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_8_0));
        bufp->chgBit(oldp+1586,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_8_1));
        bufp->chgBit(oldp+1587,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_9_0));
        bufp->chgBit(oldp+1588,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_9_1));
        bufp->chgBit(oldp+1589,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_10_0));
        bufp->chgBit(oldp+1590,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_10_1));
        bufp->chgBit(oldp+1591,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_11_0));
        bufp->chgBit(oldp+1592,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_11_1));
        bufp->chgBit(oldp+1593,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_12_0));
        bufp->chgBit(oldp+1594,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_12_1));
        bufp->chgBit(oldp+1595,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_13_0));
        bufp->chgBit(oldp+1596,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_13_1));
        bufp->chgBit(oldp+1597,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_14_0));
        bufp->chgBit(oldp+1598,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_14_1));
        bufp->chgBit(oldp+1599,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_15_0));
        bufp->chgBit(oldp+1600,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_15_1));
        bufp->chgBit(oldp+1601,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_16_0));
        bufp->chgBit(oldp+1602,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_16_1));
        bufp->chgBit(oldp+1603,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_17_0));
        bufp->chgBit(oldp+1604,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_17_1));
        bufp->chgBit(oldp+1605,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_18_0));
        bufp->chgBit(oldp+1606,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_18_1));
        bufp->chgBit(oldp+1607,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_19_0));
        bufp->chgBit(oldp+1608,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_19_1));
        bufp->chgBit(oldp+1609,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_20_0));
        bufp->chgBit(oldp+1610,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_20_1));
        bufp->chgBit(oldp+1611,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_21_0));
        bufp->chgBit(oldp+1612,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_21_1));
        bufp->chgBit(oldp+1613,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_22_0));
        bufp->chgBit(oldp+1614,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_22_1));
        bufp->chgBit(oldp+1615,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_23_0));
        bufp->chgBit(oldp+1616,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_23_1));
        bufp->chgBit(oldp+1617,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_24_0));
        bufp->chgBit(oldp+1618,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_24_1));
        bufp->chgBit(oldp+1619,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_25_0));
        bufp->chgBit(oldp+1620,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_25_1));
        bufp->chgBit(oldp+1621,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_26_0));
        bufp->chgBit(oldp+1622,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_26_1));
        bufp->chgBit(oldp+1623,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_27_0));
        bufp->chgBit(oldp+1624,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_27_1));
        bufp->chgBit(oldp+1625,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_28_0));
        bufp->chgBit(oldp+1626,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_28_1));
        bufp->chgBit(oldp+1627,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_29_0));
        bufp->chgBit(oldp+1628,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_29_1));
        bufp->chgBit(oldp+1629,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_30_0));
        bufp->chgBit(oldp+1630,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_30_1));
        bufp->chgBit(oldp+1631,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_31_0));
        bufp->chgBit(oldp+1632,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_31_1));
        bufp->chgBit(oldp+1633,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_32_0));
        bufp->chgBit(oldp+1634,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_32_1));
        bufp->chgBit(oldp+1635,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_33_0));
        bufp->chgBit(oldp+1636,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_33_1));
        bufp->chgBit(oldp+1637,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_34_0));
        bufp->chgBit(oldp+1638,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_34_1));
        bufp->chgBit(oldp+1639,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_35_0));
        bufp->chgBit(oldp+1640,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_35_1));
        bufp->chgBit(oldp+1641,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_36_0));
        bufp->chgBit(oldp+1642,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_36_1));
        bufp->chgBit(oldp+1643,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_37_0));
        bufp->chgBit(oldp+1644,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_37_1));
        bufp->chgBit(oldp+1645,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_38_0));
        bufp->chgBit(oldp+1646,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_38_1));
        bufp->chgBit(oldp+1647,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_39_0));
        bufp->chgBit(oldp+1648,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_39_1));
        bufp->chgBit(oldp+1649,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_40_0));
        bufp->chgBit(oldp+1650,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_40_1));
        bufp->chgBit(oldp+1651,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_41_0));
        bufp->chgBit(oldp+1652,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_41_1));
        bufp->chgBit(oldp+1653,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_42_0));
        bufp->chgBit(oldp+1654,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_42_1));
        bufp->chgBit(oldp+1655,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_43_0));
        bufp->chgBit(oldp+1656,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_43_1));
        bufp->chgBit(oldp+1657,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_44_0));
        bufp->chgBit(oldp+1658,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_44_1));
        bufp->chgBit(oldp+1659,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_45_0));
        bufp->chgBit(oldp+1660,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_45_1));
        bufp->chgBit(oldp+1661,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_46_0));
        bufp->chgBit(oldp+1662,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_46_1));
        bufp->chgBit(oldp+1663,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_47_0));
        bufp->chgBit(oldp+1664,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_47_1));
        bufp->chgBit(oldp+1665,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_48_0));
        bufp->chgBit(oldp+1666,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_48_1));
        bufp->chgBit(oldp+1667,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_49_0));
        bufp->chgBit(oldp+1668,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_49_1));
        bufp->chgBit(oldp+1669,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_50_0));
        bufp->chgBit(oldp+1670,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_50_1));
        bufp->chgBit(oldp+1671,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_51_0));
        bufp->chgBit(oldp+1672,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_51_1));
        bufp->chgBit(oldp+1673,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_52_0));
        bufp->chgBit(oldp+1674,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_52_1));
        bufp->chgBit(oldp+1675,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_53_0));
        bufp->chgBit(oldp+1676,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_53_1));
        bufp->chgBit(oldp+1677,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_54_0));
        bufp->chgBit(oldp+1678,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_54_1));
        bufp->chgBit(oldp+1679,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_55_0));
        bufp->chgBit(oldp+1680,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_55_1));
        bufp->chgBit(oldp+1681,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_56_0));
        bufp->chgBit(oldp+1682,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_56_1));
        bufp->chgBit(oldp+1683,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_57_0));
        bufp->chgBit(oldp+1684,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_57_1));
        bufp->chgBit(oldp+1685,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_58_0));
        bufp->chgBit(oldp+1686,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_58_1));
        bufp->chgBit(oldp+1687,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_59_0));
        bufp->chgBit(oldp+1688,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_59_1));
        bufp->chgBit(oldp+1689,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_60_0));
        bufp->chgBit(oldp+1690,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_60_1));
        bufp->chgBit(oldp+1691,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_61_0));
        bufp->chgBit(oldp+1692,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_61_1));
        bufp->chgBit(oldp+1693,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_62_0));
        bufp->chgBit(oldp+1694,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_62_1));
        bufp->chgBit(oldp+1695,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_63_0));
        bufp->chgBit(oldp+1696,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_63_1));
        bufp->chgBit(oldp+1697,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_64_0));
        bufp->chgBit(oldp+1698,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_64_1));
        bufp->chgBit(oldp+1699,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_65_0));
        bufp->chgBit(oldp+1700,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_65_1));
        bufp->chgBit(oldp+1701,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_66_0));
        bufp->chgBit(oldp+1702,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_66_1));
        bufp->chgBit(oldp+1703,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_67_0));
        bufp->chgBit(oldp+1704,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_67_1));
        bufp->chgBit(oldp+1705,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_68_0));
        bufp->chgBit(oldp+1706,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_68_1));
        bufp->chgBit(oldp+1707,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_69_0));
        bufp->chgBit(oldp+1708,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_69_1));
        bufp->chgBit(oldp+1709,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_70_0));
        bufp->chgBit(oldp+1710,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_70_1));
        bufp->chgBit(oldp+1711,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_71_0));
        bufp->chgBit(oldp+1712,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_71_1));
        bufp->chgBit(oldp+1713,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_72_0));
        bufp->chgBit(oldp+1714,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_72_1));
        bufp->chgBit(oldp+1715,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_73_0));
        bufp->chgBit(oldp+1716,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_73_1));
        bufp->chgBit(oldp+1717,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_74_0));
        bufp->chgBit(oldp+1718,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_74_1));
        bufp->chgBit(oldp+1719,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_75_0));
        bufp->chgBit(oldp+1720,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_75_1));
        bufp->chgBit(oldp+1721,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_76_0));
        bufp->chgBit(oldp+1722,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_76_1));
        bufp->chgBit(oldp+1723,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_77_0));
        bufp->chgBit(oldp+1724,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_77_1));
        bufp->chgBit(oldp+1725,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_78_0));
        bufp->chgBit(oldp+1726,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_78_1));
        bufp->chgBit(oldp+1727,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_79_0));
        bufp->chgBit(oldp+1728,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_79_1));
        bufp->chgBit(oldp+1729,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_80_0));
        bufp->chgBit(oldp+1730,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_80_1));
        bufp->chgBit(oldp+1731,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_81_0));
        bufp->chgBit(oldp+1732,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_81_1));
        bufp->chgBit(oldp+1733,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_82_0));
        bufp->chgBit(oldp+1734,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_82_1));
        bufp->chgBit(oldp+1735,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_83_0));
        bufp->chgBit(oldp+1736,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_83_1));
        bufp->chgBit(oldp+1737,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_84_0));
        bufp->chgBit(oldp+1738,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_84_1));
        bufp->chgBit(oldp+1739,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_85_0));
        bufp->chgBit(oldp+1740,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_85_1));
        bufp->chgBit(oldp+1741,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_86_0));
        bufp->chgBit(oldp+1742,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_86_1));
        bufp->chgBit(oldp+1743,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_87_0));
        bufp->chgBit(oldp+1744,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_87_1));
        bufp->chgBit(oldp+1745,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_88_0));
        bufp->chgBit(oldp+1746,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_88_1));
        bufp->chgBit(oldp+1747,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_89_0));
        bufp->chgBit(oldp+1748,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_89_1));
        bufp->chgBit(oldp+1749,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_90_0));
        bufp->chgBit(oldp+1750,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_90_1));
        bufp->chgBit(oldp+1751,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_91_0));
        bufp->chgBit(oldp+1752,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_91_1));
        bufp->chgBit(oldp+1753,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_92_0));
        bufp->chgBit(oldp+1754,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_92_1));
        bufp->chgBit(oldp+1755,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_93_0));
        bufp->chgBit(oldp+1756,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_93_1));
        bufp->chgBit(oldp+1757,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_94_0));
        bufp->chgBit(oldp+1758,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_94_1));
        bufp->chgBit(oldp+1759,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_95_0));
        bufp->chgBit(oldp+1760,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_95_1));
        bufp->chgBit(oldp+1761,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_96_0));
        bufp->chgBit(oldp+1762,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_96_1));
        bufp->chgBit(oldp+1763,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_97_0));
        bufp->chgBit(oldp+1764,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_97_1));
        bufp->chgBit(oldp+1765,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_98_0));
        bufp->chgBit(oldp+1766,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_98_1));
        bufp->chgBit(oldp+1767,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_99_0));
        bufp->chgBit(oldp+1768,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_99_1));
        bufp->chgBit(oldp+1769,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_100_0));
        bufp->chgBit(oldp+1770,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_100_1));
        bufp->chgBit(oldp+1771,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_101_0));
        bufp->chgBit(oldp+1772,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_101_1));
        bufp->chgBit(oldp+1773,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_102_0));
        bufp->chgBit(oldp+1774,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_102_1));
        bufp->chgBit(oldp+1775,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_103_0));
        bufp->chgBit(oldp+1776,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_103_1));
        bufp->chgBit(oldp+1777,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_104_0));
        bufp->chgBit(oldp+1778,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_104_1));
        bufp->chgBit(oldp+1779,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_105_0));
        bufp->chgBit(oldp+1780,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_105_1));
        bufp->chgBit(oldp+1781,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_106_0));
        bufp->chgBit(oldp+1782,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_106_1));
        bufp->chgBit(oldp+1783,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_107_0));
        bufp->chgBit(oldp+1784,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_107_1));
        bufp->chgBit(oldp+1785,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_108_0));
        bufp->chgBit(oldp+1786,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_108_1));
        bufp->chgBit(oldp+1787,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_109_0));
        bufp->chgBit(oldp+1788,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_109_1));
        bufp->chgBit(oldp+1789,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_110_0));
        bufp->chgBit(oldp+1790,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_110_1));
        bufp->chgBit(oldp+1791,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_111_0));
        bufp->chgBit(oldp+1792,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_111_1));
        bufp->chgBit(oldp+1793,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_112_0));
        bufp->chgBit(oldp+1794,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_112_1));
        bufp->chgBit(oldp+1795,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_113_0));
        bufp->chgBit(oldp+1796,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_113_1));
        bufp->chgBit(oldp+1797,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_114_0));
        bufp->chgBit(oldp+1798,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_114_1));
        bufp->chgBit(oldp+1799,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_115_0));
        bufp->chgBit(oldp+1800,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_115_1));
        bufp->chgBit(oldp+1801,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_116_0));
        bufp->chgBit(oldp+1802,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_116_1));
        bufp->chgBit(oldp+1803,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_117_0));
        bufp->chgBit(oldp+1804,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_117_1));
        bufp->chgBit(oldp+1805,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_118_0));
        bufp->chgBit(oldp+1806,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_118_1));
        bufp->chgBit(oldp+1807,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_119_0));
        bufp->chgBit(oldp+1808,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_119_1));
        bufp->chgBit(oldp+1809,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_120_0));
        bufp->chgBit(oldp+1810,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_120_1));
        bufp->chgBit(oldp+1811,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_121_0));
        bufp->chgBit(oldp+1812,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_121_1));
        bufp->chgBit(oldp+1813,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_122_0));
        bufp->chgBit(oldp+1814,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_122_1));
        bufp->chgBit(oldp+1815,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_123_0));
        bufp->chgBit(oldp+1816,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_123_1));
        bufp->chgBit(oldp+1817,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_124_0));
        bufp->chgBit(oldp+1818,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_124_1));
        bufp->chgBit(oldp+1819,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_125_0));
        bufp->chgBit(oldp+1820,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_125_1));
        bufp->chgBit(oldp+1821,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_126_0));
        bufp->chgBit(oldp+1822,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_126_1));
        bufp->chgBit(oldp+1823,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_127_0));
        bufp->chgBit(oldp+1824,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_127_1));
        bufp->chgBit(oldp+1825,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_128_0));
        bufp->chgBit(oldp+1826,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_128_1));
        bufp->chgBit(oldp+1827,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_129_0));
        bufp->chgBit(oldp+1828,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_129_1));
        bufp->chgBit(oldp+1829,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_130_0));
        bufp->chgBit(oldp+1830,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_130_1));
        bufp->chgBit(oldp+1831,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_131_0));
        bufp->chgBit(oldp+1832,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_131_1));
        bufp->chgBit(oldp+1833,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_132_0));
        bufp->chgBit(oldp+1834,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_132_1));
        bufp->chgBit(oldp+1835,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_133_0));
        bufp->chgBit(oldp+1836,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_133_1));
        bufp->chgBit(oldp+1837,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_134_0));
        bufp->chgBit(oldp+1838,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_134_1));
        bufp->chgBit(oldp+1839,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_135_0));
        bufp->chgBit(oldp+1840,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_135_1));
        bufp->chgBit(oldp+1841,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_136_0));
        bufp->chgBit(oldp+1842,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_136_1));
        bufp->chgBit(oldp+1843,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_137_0));
        bufp->chgBit(oldp+1844,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_137_1));
        bufp->chgBit(oldp+1845,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_138_0));
        bufp->chgBit(oldp+1846,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_138_1));
        bufp->chgBit(oldp+1847,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_139_0));
        bufp->chgBit(oldp+1848,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_139_1));
        bufp->chgBit(oldp+1849,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_140_0));
        bufp->chgBit(oldp+1850,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_140_1));
        bufp->chgBit(oldp+1851,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_141_0));
        bufp->chgBit(oldp+1852,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_141_1));
        bufp->chgBit(oldp+1853,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_142_0));
        bufp->chgBit(oldp+1854,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_142_1));
        bufp->chgBit(oldp+1855,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_143_0));
        bufp->chgBit(oldp+1856,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_143_1));
        bufp->chgBit(oldp+1857,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_144_0));
        bufp->chgBit(oldp+1858,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_144_1));
        bufp->chgBit(oldp+1859,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_145_0));
        bufp->chgBit(oldp+1860,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_145_1));
        bufp->chgBit(oldp+1861,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_146_0));
        bufp->chgBit(oldp+1862,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_146_1));
        bufp->chgBit(oldp+1863,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_147_0));
        bufp->chgBit(oldp+1864,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_147_1));
        bufp->chgBit(oldp+1865,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_148_0));
        bufp->chgBit(oldp+1866,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_148_1));
        bufp->chgBit(oldp+1867,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_149_0));
        bufp->chgBit(oldp+1868,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_149_1));
        bufp->chgBit(oldp+1869,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_150_0));
        bufp->chgBit(oldp+1870,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_150_1));
        bufp->chgBit(oldp+1871,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_151_0));
        bufp->chgBit(oldp+1872,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_151_1));
        bufp->chgBit(oldp+1873,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_152_0));
        bufp->chgBit(oldp+1874,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_152_1));
        bufp->chgBit(oldp+1875,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_153_0));
        bufp->chgBit(oldp+1876,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_153_1));
        bufp->chgBit(oldp+1877,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_154_0));
        bufp->chgBit(oldp+1878,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_154_1));
        bufp->chgBit(oldp+1879,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_155_0));
        bufp->chgBit(oldp+1880,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_155_1));
        bufp->chgBit(oldp+1881,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_156_0));
        bufp->chgBit(oldp+1882,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_156_1));
        bufp->chgBit(oldp+1883,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_157_0));
        bufp->chgBit(oldp+1884,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_157_1));
        bufp->chgBit(oldp+1885,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_158_0));
        bufp->chgBit(oldp+1886,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_158_1));
        bufp->chgBit(oldp+1887,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_159_0));
        bufp->chgBit(oldp+1888,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_159_1));
        bufp->chgBit(oldp+1889,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_160_0));
        bufp->chgBit(oldp+1890,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_160_1));
        bufp->chgBit(oldp+1891,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_161_0));
        bufp->chgBit(oldp+1892,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_161_1));
        bufp->chgBit(oldp+1893,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_162_0));
        bufp->chgBit(oldp+1894,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_162_1));
        bufp->chgBit(oldp+1895,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_163_0));
        bufp->chgBit(oldp+1896,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_163_1));
        bufp->chgBit(oldp+1897,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_164_0));
        bufp->chgBit(oldp+1898,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_164_1));
        bufp->chgBit(oldp+1899,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_165_0));
        bufp->chgBit(oldp+1900,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_165_1));
        bufp->chgBit(oldp+1901,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_166_0));
        bufp->chgBit(oldp+1902,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_166_1));
        bufp->chgBit(oldp+1903,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_167_0));
        bufp->chgBit(oldp+1904,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_167_1));
        bufp->chgBit(oldp+1905,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_168_0));
        bufp->chgBit(oldp+1906,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_168_1));
        bufp->chgBit(oldp+1907,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_169_0));
        bufp->chgBit(oldp+1908,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_169_1));
        bufp->chgBit(oldp+1909,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_170_0));
        bufp->chgBit(oldp+1910,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_170_1));
        bufp->chgBit(oldp+1911,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_171_0));
        bufp->chgBit(oldp+1912,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_171_1));
        bufp->chgBit(oldp+1913,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_172_0));
        bufp->chgBit(oldp+1914,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_172_1));
        bufp->chgBit(oldp+1915,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_173_0));
        bufp->chgBit(oldp+1916,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_173_1));
        bufp->chgBit(oldp+1917,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_174_0));
        bufp->chgBit(oldp+1918,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_174_1));
        bufp->chgBit(oldp+1919,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_175_0));
        bufp->chgBit(oldp+1920,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_175_1));
        bufp->chgBit(oldp+1921,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_176_0));
        bufp->chgBit(oldp+1922,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_176_1));
        bufp->chgBit(oldp+1923,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_177_0));
        bufp->chgBit(oldp+1924,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_177_1));
        bufp->chgBit(oldp+1925,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_178_0));
        bufp->chgBit(oldp+1926,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_178_1));
        bufp->chgBit(oldp+1927,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_179_0));
        bufp->chgBit(oldp+1928,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_179_1));
        bufp->chgBit(oldp+1929,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_180_0));
        bufp->chgBit(oldp+1930,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_180_1));
        bufp->chgBit(oldp+1931,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_181_0));
        bufp->chgBit(oldp+1932,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_181_1));
        bufp->chgBit(oldp+1933,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_182_0));
        bufp->chgBit(oldp+1934,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_182_1));
        bufp->chgBit(oldp+1935,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_183_0));
        bufp->chgBit(oldp+1936,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_183_1));
        bufp->chgBit(oldp+1937,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_184_0));
        bufp->chgBit(oldp+1938,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_184_1));
        bufp->chgBit(oldp+1939,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_185_0));
        bufp->chgBit(oldp+1940,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_185_1));
        bufp->chgBit(oldp+1941,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_186_0));
        bufp->chgBit(oldp+1942,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_186_1));
        bufp->chgBit(oldp+1943,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_187_0));
        bufp->chgBit(oldp+1944,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_187_1));
        bufp->chgBit(oldp+1945,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_188_0));
        bufp->chgBit(oldp+1946,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_188_1));
        bufp->chgBit(oldp+1947,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_189_0));
        bufp->chgBit(oldp+1948,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_189_1));
        bufp->chgBit(oldp+1949,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_190_0));
        bufp->chgBit(oldp+1950,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_190_1));
        bufp->chgBit(oldp+1951,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_191_0));
        bufp->chgBit(oldp+1952,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_191_1));
        bufp->chgBit(oldp+1953,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_192_0));
        bufp->chgBit(oldp+1954,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_192_1));
        bufp->chgBit(oldp+1955,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_193_0));
        bufp->chgBit(oldp+1956,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_193_1));
        bufp->chgBit(oldp+1957,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_194_0));
        bufp->chgBit(oldp+1958,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_194_1));
        bufp->chgBit(oldp+1959,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_195_0));
        bufp->chgBit(oldp+1960,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_195_1));
        bufp->chgBit(oldp+1961,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_196_0));
        bufp->chgBit(oldp+1962,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_196_1));
        bufp->chgBit(oldp+1963,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_197_0));
        bufp->chgBit(oldp+1964,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_197_1));
        bufp->chgBit(oldp+1965,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_198_0));
        bufp->chgBit(oldp+1966,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_198_1));
        bufp->chgBit(oldp+1967,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_199_0));
        bufp->chgBit(oldp+1968,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_199_1));
        bufp->chgBit(oldp+1969,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_200_0));
        bufp->chgBit(oldp+1970,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_200_1));
        bufp->chgBit(oldp+1971,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_201_0));
        bufp->chgBit(oldp+1972,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_201_1));
        bufp->chgBit(oldp+1973,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_202_0));
        bufp->chgBit(oldp+1974,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_202_1));
        bufp->chgBit(oldp+1975,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_203_0));
        bufp->chgBit(oldp+1976,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_203_1));
        bufp->chgBit(oldp+1977,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_204_0));
        bufp->chgBit(oldp+1978,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_204_1));
        bufp->chgBit(oldp+1979,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_205_0));
        bufp->chgBit(oldp+1980,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_205_1));
        bufp->chgBit(oldp+1981,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_206_0));
        bufp->chgBit(oldp+1982,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_206_1));
        bufp->chgBit(oldp+1983,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_207_0));
        bufp->chgBit(oldp+1984,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_207_1));
        bufp->chgBit(oldp+1985,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_208_0));
        bufp->chgBit(oldp+1986,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_208_1));
        bufp->chgBit(oldp+1987,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_209_0));
        bufp->chgBit(oldp+1988,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_209_1));
        bufp->chgBit(oldp+1989,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_210_0));
        bufp->chgBit(oldp+1990,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_210_1));
        bufp->chgBit(oldp+1991,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_211_0));
        bufp->chgBit(oldp+1992,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_211_1));
        bufp->chgBit(oldp+1993,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_212_0));
        bufp->chgBit(oldp+1994,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_212_1));
        bufp->chgBit(oldp+1995,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_213_0));
        bufp->chgBit(oldp+1996,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_213_1));
        bufp->chgBit(oldp+1997,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_214_0));
        bufp->chgBit(oldp+1998,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_214_1));
        bufp->chgBit(oldp+1999,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_215_0));
        bufp->chgBit(oldp+2000,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_215_1));
        bufp->chgBit(oldp+2001,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_216_0));
        bufp->chgBit(oldp+2002,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_216_1));
        bufp->chgBit(oldp+2003,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_217_0));
        bufp->chgBit(oldp+2004,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_217_1));
        bufp->chgBit(oldp+2005,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_218_0));
        bufp->chgBit(oldp+2006,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_218_1));
        bufp->chgBit(oldp+2007,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_219_0));
        bufp->chgBit(oldp+2008,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_219_1));
        bufp->chgBit(oldp+2009,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_220_0));
        bufp->chgBit(oldp+2010,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_220_1));
        bufp->chgBit(oldp+2011,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_221_0));
        bufp->chgBit(oldp+2012,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_221_1));
        bufp->chgBit(oldp+2013,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_222_0));
        bufp->chgBit(oldp+2014,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_222_1));
        bufp->chgBit(oldp+2015,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_223_0));
        bufp->chgBit(oldp+2016,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_223_1));
        bufp->chgBit(oldp+2017,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_224_0));
        bufp->chgBit(oldp+2018,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_224_1));
        bufp->chgBit(oldp+2019,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_225_0));
        bufp->chgBit(oldp+2020,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_225_1));
        bufp->chgBit(oldp+2021,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_226_0));
        bufp->chgBit(oldp+2022,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_226_1));
        bufp->chgBit(oldp+2023,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_227_0));
        bufp->chgBit(oldp+2024,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_227_1));
        bufp->chgBit(oldp+2025,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_228_0));
        bufp->chgBit(oldp+2026,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_228_1));
        bufp->chgBit(oldp+2027,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_229_0));
        bufp->chgBit(oldp+2028,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_229_1));
        bufp->chgBit(oldp+2029,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_230_0));
        bufp->chgBit(oldp+2030,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_230_1));
        bufp->chgBit(oldp+2031,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_231_0));
        bufp->chgBit(oldp+2032,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_231_1));
        bufp->chgBit(oldp+2033,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_232_0));
        bufp->chgBit(oldp+2034,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_232_1));
        bufp->chgBit(oldp+2035,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_233_0));
        bufp->chgBit(oldp+2036,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_233_1));
        bufp->chgBit(oldp+2037,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_234_0));
        bufp->chgBit(oldp+2038,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_234_1));
        bufp->chgBit(oldp+2039,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_235_0));
        bufp->chgBit(oldp+2040,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_235_1));
        bufp->chgBit(oldp+2041,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_236_0));
        bufp->chgBit(oldp+2042,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_236_1));
        bufp->chgBit(oldp+2043,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_237_0));
        bufp->chgBit(oldp+2044,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_237_1));
        bufp->chgBit(oldp+2045,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_238_0));
        bufp->chgBit(oldp+2046,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_238_1));
        bufp->chgBit(oldp+2047,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_239_0));
        bufp->chgBit(oldp+2048,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_239_1));
        bufp->chgBit(oldp+2049,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_240_0));
        bufp->chgBit(oldp+2050,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_240_1));
        bufp->chgBit(oldp+2051,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_241_0));
        bufp->chgBit(oldp+2052,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_241_1));
        bufp->chgBit(oldp+2053,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_242_0));
        bufp->chgBit(oldp+2054,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_242_1));
        bufp->chgBit(oldp+2055,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_243_0));
        bufp->chgBit(oldp+2056,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_243_1));
        bufp->chgBit(oldp+2057,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_244_0));
        bufp->chgBit(oldp+2058,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_244_1));
        bufp->chgBit(oldp+2059,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_245_0));
        bufp->chgBit(oldp+2060,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_245_1));
        bufp->chgBit(oldp+2061,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_246_0));
        bufp->chgBit(oldp+2062,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_246_1));
        bufp->chgBit(oldp+2063,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_247_0));
        bufp->chgBit(oldp+2064,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_247_1));
        bufp->chgBit(oldp+2065,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_248_0));
        bufp->chgBit(oldp+2066,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_248_1));
        bufp->chgBit(oldp+2067,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_249_0));
        bufp->chgBit(oldp+2068,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_249_1));
        bufp->chgBit(oldp+2069,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_250_0));
        bufp->chgBit(oldp+2070,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_250_1));
        bufp->chgBit(oldp+2071,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_251_0));
        bufp->chgBit(oldp+2072,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_251_1));
        bufp->chgBit(oldp+2073,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_252_0));
        bufp->chgBit(oldp+2074,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_252_1));
        bufp->chgBit(oldp+2075,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_253_0));
        bufp->chgBit(oldp+2076,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_253_1));
        bufp->chgBit(oldp+2077,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_254_0));
        bufp->chgBit(oldp+2078,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_254_1));
        bufp->chgBit(oldp+2079,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_255_0));
        bufp->chgBit(oldp+2080,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__validreg_255_1));
        bufp->chgBit(oldp+2081,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_0));
        bufp->chgBit(oldp+2082,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_1));
        bufp->chgBit(oldp+2083,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_2));
        bufp->chgBit(oldp+2084,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_3));
        bufp->chgBit(oldp+2085,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_4));
        bufp->chgBit(oldp+2086,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_5));
        bufp->chgBit(oldp+2087,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_6));
        bufp->chgBit(oldp+2088,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_7));
        bufp->chgBit(oldp+2089,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_8));
        bufp->chgBit(oldp+2090,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_9));
        bufp->chgBit(oldp+2091,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_10));
        bufp->chgBit(oldp+2092,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_11));
        bufp->chgBit(oldp+2093,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_12));
        bufp->chgBit(oldp+2094,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_13));
        bufp->chgBit(oldp+2095,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_14));
        bufp->chgBit(oldp+2096,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_15));
        bufp->chgBit(oldp+2097,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_16));
        bufp->chgBit(oldp+2098,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_17));
        bufp->chgBit(oldp+2099,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_18));
        bufp->chgBit(oldp+2100,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_19));
        bufp->chgBit(oldp+2101,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_20));
        bufp->chgBit(oldp+2102,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_21));
        bufp->chgBit(oldp+2103,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_22));
        bufp->chgBit(oldp+2104,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_23));
        bufp->chgBit(oldp+2105,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_24));
        bufp->chgBit(oldp+2106,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_25));
        bufp->chgBit(oldp+2107,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_26));
        bufp->chgBit(oldp+2108,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_27));
        bufp->chgBit(oldp+2109,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_28));
        bufp->chgBit(oldp+2110,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_29));
        bufp->chgBit(oldp+2111,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_30));
        bufp->chgBit(oldp+2112,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_31));
        bufp->chgBit(oldp+2113,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_32));
        bufp->chgBit(oldp+2114,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_33));
        bufp->chgBit(oldp+2115,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_34));
        bufp->chgBit(oldp+2116,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_35));
        bufp->chgBit(oldp+2117,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_36));
        bufp->chgBit(oldp+2118,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_37));
        bufp->chgBit(oldp+2119,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_38));
        bufp->chgBit(oldp+2120,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_39));
        bufp->chgBit(oldp+2121,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_40));
        bufp->chgBit(oldp+2122,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_41));
        bufp->chgBit(oldp+2123,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_42));
        bufp->chgBit(oldp+2124,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_43));
        bufp->chgBit(oldp+2125,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_44));
        bufp->chgBit(oldp+2126,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_45));
        bufp->chgBit(oldp+2127,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_46));
        bufp->chgBit(oldp+2128,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_47));
        bufp->chgBit(oldp+2129,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_48));
        bufp->chgBit(oldp+2130,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_49));
        bufp->chgBit(oldp+2131,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_50));
        bufp->chgBit(oldp+2132,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_51));
        bufp->chgBit(oldp+2133,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_52));
        bufp->chgBit(oldp+2134,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_53));
        bufp->chgBit(oldp+2135,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_54));
        bufp->chgBit(oldp+2136,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_55));
        bufp->chgBit(oldp+2137,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_56));
        bufp->chgBit(oldp+2138,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_57));
        bufp->chgBit(oldp+2139,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_58));
        bufp->chgBit(oldp+2140,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_59));
        bufp->chgBit(oldp+2141,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_60));
        bufp->chgBit(oldp+2142,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_61));
        bufp->chgBit(oldp+2143,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_62));
        bufp->chgBit(oldp+2144,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_63));
        bufp->chgBit(oldp+2145,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_64));
        bufp->chgBit(oldp+2146,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_65));
        bufp->chgBit(oldp+2147,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_66));
        bufp->chgBit(oldp+2148,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_67));
        bufp->chgBit(oldp+2149,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_68));
        bufp->chgBit(oldp+2150,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_69));
        bufp->chgBit(oldp+2151,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_70));
        bufp->chgBit(oldp+2152,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_71));
        bufp->chgBit(oldp+2153,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_72));
        bufp->chgBit(oldp+2154,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_73));
        bufp->chgBit(oldp+2155,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_74));
        bufp->chgBit(oldp+2156,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_75));
        bufp->chgBit(oldp+2157,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_76));
        bufp->chgBit(oldp+2158,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_77));
        bufp->chgBit(oldp+2159,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_78));
        bufp->chgBit(oldp+2160,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_79));
        bufp->chgBit(oldp+2161,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_80));
        bufp->chgBit(oldp+2162,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_81));
        bufp->chgBit(oldp+2163,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_82));
        bufp->chgBit(oldp+2164,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_83));
        bufp->chgBit(oldp+2165,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_84));
        bufp->chgBit(oldp+2166,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_85));
        bufp->chgBit(oldp+2167,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_86));
        bufp->chgBit(oldp+2168,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_87));
        bufp->chgBit(oldp+2169,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_88));
        bufp->chgBit(oldp+2170,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_89));
        bufp->chgBit(oldp+2171,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_90));
        bufp->chgBit(oldp+2172,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_91));
        bufp->chgBit(oldp+2173,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_92));
        bufp->chgBit(oldp+2174,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_93));
        bufp->chgBit(oldp+2175,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_94));
        bufp->chgBit(oldp+2176,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_95));
        bufp->chgBit(oldp+2177,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_96));
        bufp->chgBit(oldp+2178,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_97));
        bufp->chgBit(oldp+2179,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_98));
        bufp->chgBit(oldp+2180,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_99));
        bufp->chgBit(oldp+2181,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_100));
        bufp->chgBit(oldp+2182,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_101));
        bufp->chgBit(oldp+2183,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_102));
        bufp->chgBit(oldp+2184,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_103));
        bufp->chgBit(oldp+2185,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_104));
        bufp->chgBit(oldp+2186,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_105));
        bufp->chgBit(oldp+2187,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_106));
        bufp->chgBit(oldp+2188,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_107));
        bufp->chgBit(oldp+2189,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_108));
        bufp->chgBit(oldp+2190,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_109));
        bufp->chgBit(oldp+2191,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_110));
        bufp->chgBit(oldp+2192,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_111));
        bufp->chgBit(oldp+2193,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_112));
        bufp->chgBit(oldp+2194,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_113));
        bufp->chgBit(oldp+2195,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_114));
        bufp->chgBit(oldp+2196,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_115));
        bufp->chgBit(oldp+2197,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_116));
        bufp->chgBit(oldp+2198,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_117));
        bufp->chgBit(oldp+2199,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_118));
        bufp->chgBit(oldp+2200,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_119));
        bufp->chgBit(oldp+2201,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_120));
        bufp->chgBit(oldp+2202,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_121));
        bufp->chgBit(oldp+2203,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_122));
        bufp->chgBit(oldp+2204,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_123));
        bufp->chgBit(oldp+2205,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_124));
        bufp->chgBit(oldp+2206,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_125));
        bufp->chgBit(oldp+2207,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_126));
        bufp->chgBit(oldp+2208,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_127));
        bufp->chgBit(oldp+2209,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_128));
        bufp->chgBit(oldp+2210,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_129));
        bufp->chgBit(oldp+2211,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_130));
        bufp->chgBit(oldp+2212,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_131));
        bufp->chgBit(oldp+2213,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_132));
        bufp->chgBit(oldp+2214,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_133));
        bufp->chgBit(oldp+2215,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_134));
        bufp->chgBit(oldp+2216,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_135));
        bufp->chgBit(oldp+2217,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_136));
        bufp->chgBit(oldp+2218,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_137));
        bufp->chgBit(oldp+2219,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_138));
        bufp->chgBit(oldp+2220,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_139));
        bufp->chgBit(oldp+2221,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_140));
        bufp->chgBit(oldp+2222,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_141));
        bufp->chgBit(oldp+2223,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_142));
        bufp->chgBit(oldp+2224,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_143));
        bufp->chgBit(oldp+2225,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_144));
        bufp->chgBit(oldp+2226,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_145));
        bufp->chgBit(oldp+2227,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_146));
        bufp->chgBit(oldp+2228,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_147));
        bufp->chgBit(oldp+2229,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_148));
        bufp->chgBit(oldp+2230,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_149));
        bufp->chgBit(oldp+2231,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_150));
        bufp->chgBit(oldp+2232,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_151));
        bufp->chgBit(oldp+2233,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_152));
        bufp->chgBit(oldp+2234,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_153));
        bufp->chgBit(oldp+2235,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_154));
        bufp->chgBit(oldp+2236,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_155));
        bufp->chgBit(oldp+2237,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_156));
        bufp->chgBit(oldp+2238,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_157));
        bufp->chgBit(oldp+2239,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_158));
        bufp->chgBit(oldp+2240,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_159));
        bufp->chgBit(oldp+2241,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_160));
        bufp->chgBit(oldp+2242,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_161));
        bufp->chgBit(oldp+2243,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_162));
        bufp->chgBit(oldp+2244,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_163));
        bufp->chgBit(oldp+2245,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_164));
        bufp->chgBit(oldp+2246,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_165));
        bufp->chgBit(oldp+2247,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_166));
        bufp->chgBit(oldp+2248,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_167));
        bufp->chgBit(oldp+2249,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_168));
        bufp->chgBit(oldp+2250,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_169));
        bufp->chgBit(oldp+2251,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_170));
        bufp->chgBit(oldp+2252,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_171));
        bufp->chgBit(oldp+2253,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_172));
        bufp->chgBit(oldp+2254,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_173));
        bufp->chgBit(oldp+2255,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_174));
        bufp->chgBit(oldp+2256,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_175));
        bufp->chgBit(oldp+2257,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_176));
        bufp->chgBit(oldp+2258,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_177));
        bufp->chgBit(oldp+2259,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_178));
        bufp->chgBit(oldp+2260,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_179));
        bufp->chgBit(oldp+2261,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_180));
        bufp->chgBit(oldp+2262,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_181));
        bufp->chgBit(oldp+2263,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_182));
        bufp->chgBit(oldp+2264,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_183));
        bufp->chgBit(oldp+2265,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_184));
        bufp->chgBit(oldp+2266,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_185));
        bufp->chgBit(oldp+2267,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_186));
        bufp->chgBit(oldp+2268,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_187));
        bufp->chgBit(oldp+2269,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_188));
        bufp->chgBit(oldp+2270,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_189));
        bufp->chgBit(oldp+2271,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_190));
        bufp->chgBit(oldp+2272,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_191));
        bufp->chgBit(oldp+2273,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_192));
        bufp->chgBit(oldp+2274,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_193));
        bufp->chgBit(oldp+2275,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_194));
        bufp->chgBit(oldp+2276,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_195));
        bufp->chgBit(oldp+2277,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_196));
        bufp->chgBit(oldp+2278,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_197));
        bufp->chgBit(oldp+2279,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_198));
        bufp->chgBit(oldp+2280,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_199));
        bufp->chgBit(oldp+2281,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_200));
        bufp->chgBit(oldp+2282,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_201));
        bufp->chgBit(oldp+2283,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_202));
        bufp->chgBit(oldp+2284,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_203));
        bufp->chgBit(oldp+2285,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_204));
        bufp->chgBit(oldp+2286,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_205));
        bufp->chgBit(oldp+2287,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_206));
        bufp->chgBit(oldp+2288,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_207));
        bufp->chgBit(oldp+2289,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_208));
        bufp->chgBit(oldp+2290,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_209));
        bufp->chgBit(oldp+2291,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_210));
        bufp->chgBit(oldp+2292,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_211));
        bufp->chgBit(oldp+2293,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_212));
        bufp->chgBit(oldp+2294,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_213));
        bufp->chgBit(oldp+2295,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_214));
        bufp->chgBit(oldp+2296,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_215));
        bufp->chgBit(oldp+2297,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_216));
        bufp->chgBit(oldp+2298,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_217));
        bufp->chgBit(oldp+2299,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_218));
        bufp->chgBit(oldp+2300,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_219));
        bufp->chgBit(oldp+2301,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_220));
        bufp->chgBit(oldp+2302,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_221));
        bufp->chgBit(oldp+2303,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_222));
        bufp->chgBit(oldp+2304,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_223));
        bufp->chgBit(oldp+2305,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_224));
        bufp->chgBit(oldp+2306,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_225));
        bufp->chgBit(oldp+2307,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_226));
        bufp->chgBit(oldp+2308,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_227));
        bufp->chgBit(oldp+2309,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_228));
        bufp->chgBit(oldp+2310,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_229));
        bufp->chgBit(oldp+2311,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_230));
        bufp->chgBit(oldp+2312,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_231));
        bufp->chgBit(oldp+2313,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_232));
        bufp->chgBit(oldp+2314,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_233));
        bufp->chgBit(oldp+2315,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_234));
        bufp->chgBit(oldp+2316,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_235));
        bufp->chgBit(oldp+2317,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_236));
        bufp->chgBit(oldp+2318,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_237));
        bufp->chgBit(oldp+2319,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_238));
        bufp->chgBit(oldp+2320,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_239));
        bufp->chgBit(oldp+2321,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_240));
        bufp->chgBit(oldp+2322,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_241));
        bufp->chgBit(oldp+2323,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_242));
        bufp->chgBit(oldp+2324,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_243));
        bufp->chgBit(oldp+2325,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_244));
        bufp->chgBit(oldp+2326,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_245));
        bufp->chgBit(oldp+2327,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_246));
        bufp->chgBit(oldp+2328,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_247));
        bufp->chgBit(oldp+2329,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_248));
        bufp->chgBit(oldp+2330,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_249));
        bufp->chgBit(oldp+2331,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_250));
        bufp->chgBit(oldp+2332,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_251));
        bufp->chgBit(oldp+2333,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_252));
        bufp->chgBit(oldp+2334,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_253));
        bufp->chgBit(oldp+2335,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_254));
        bufp->chgBit(oldp+2336,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__lru_255));
        bufp->chgBit(oldp+2337,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_valid));
        bufp->chgIData(oldp+2338,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_0),32);
        bufp->chgIData(oldp+2339,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_1),32);
        bufp->chgIData(oldp+2340,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_2),32);
        bufp->chgIData(oldp+2341,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__ans_bits_3),32);
        bufp->chgIData(oldp+2342,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_0),32);
        bufp->chgIData(oldp+2343,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_1),32);
        bufp->chgIData(oldp+2344,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_2),32);
        bufp->chgIData(oldp+2345,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_ans_bits_3),32);
        bufp->chgIData(oldp+2346,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__total_requests),32);
        bufp->chgIData(oldp+2347,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitted_times),32);
        bufp->chgWData(oldp+2348,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__linedata),128);
        bufp->chgCData(oldp+2352,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__wmask),4);
        bufp->chgIData(oldp+2353,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__saved_info_addr),32);
        bufp->chgIData(oldp+2354,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__addr),32);
        bufp->chgBit(oldp+2355,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__casez_tmp));
        bufp->chgBit(oldp+2356,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hit_0));
        bufp->chgBit(oldp+2357,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__casez_tmp_0));
        bufp->chgBit(oldp+2358,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hit_1));
        bufp->chgBit(oldp+2359,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hit_0)))));
        bufp->chgBit(oldp+2360,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitted));
        bufp->chgWData(oldp+2361,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline),128);
        bufp->chgIData(oldp+2365,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[0U]),32);
        bufp->chgIData(oldp+2366,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[1U]),32);
        bufp->chgIData(oldp+2367,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[2U]),32);
        bufp->chgIData(oldp+2368,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__hitdataline[3U]),32);
        bufp->chgCData(oldp+2369,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__state),2);
        bufp->chgBit(oldp+2370,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__casez_tmp_1));
        bufp->chgBit(oldp+2371,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__i_ans_valid));
        __Vtemp_h519b399a__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r][0U];
        __Vtemp_h519b399a__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r][1U];
        __Vtemp_h519b399a__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r][2U];
        __Vtemp_h519b399a__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r][3U];
        bufp->chgWData(oldp+2372,(__Vtemp_h519b399a__0),128);
        bufp->chgCData(oldp+2376,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r),8);
        __Vtemp_h7b7dd4f9__0[0U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_1__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r][0U];
        __Vtemp_h7b7dd4f9__0[1U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_1__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r][1U];
        __Vtemp_h7b7dd4f9__0[2U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_1__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r][2U];
        __Vtemp_h7b7dd4f9__0[3U] = vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_1__DOT__BRAM
            [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r][3U];
        bufp->chgWData(oldp+2377,(__Vtemp_h7b7dd4f9__0),128);
        bufp->chgCData(oldp+2381,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r),8);
        bufp->chgIData(oldp+2382,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_2__DOT__BRAM
                                  [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first__DOT__addr_r]),20);
        bufp->chgIData(oldp+2383,(vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__BRAM
                                  [vlSelf->mycpu_top__DOT__core__DOT__ICache__DOT__xilinx_single_port_ram_read_first_3__DOT__addr_r]),20);
        bufp->chgBit(oldp+2384,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushStall)) 
                                       & (((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPush)) 
                                           | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__empty)) 
                                          & ((0U != 
                                              (6U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPush))) 
                                             | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__empty)))))));
        bufp->chgBit(oldp+2385,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_2));
        bufp->chgIData(oldp+2386,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_pc),32);
        bufp->chgIData(oldp+2387,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_pc_add_4),32);
        bufp->chgIData(oldp+2388,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_0),32);
        bufp->chgIData(oldp+2389,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_1),32);
        bufp->chgBit(oldp+2390,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroupValid_0));
        bufp->chgBit(oldp+2391,(((~ (((vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_0 
                                       >> 0x1eU) & (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_predict_en)) 
                                     | (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT___GEN))) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroupValid_1))));
        bufp->chgCData(oldp+2392,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_fetchExc_0),7);
        bufp->chgCData(oldp+2393,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_fetchExc_1),7);
        bufp->chgBit(oldp+2394,(vlSelf->mycpu_top__DOT__core__DOT___PreDecodeTop_io_to_bits_bits_0_predict_en));
        bufp->chgIData(oldp+2395,(vlSelf->mycpu_top__DOT__core__DOT___PreDecodeTop_io_to_bits_bits_0_predict_tar),32);
        bufp->chgBit(oldp+2396,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushStall)) 
                                 & ((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPush)) 
                                    | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__empty)))));
        bufp->chgBit(oldp+2397,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT____Vcellinp__MultiPortFifo__io_push_0_valid));
        bufp->chgBit(oldp+2398,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushStall)) 
                                 & (IData)(((0U != 
                                             (6U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPush))) 
                                            | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__empty))))));
        bufp->chgBit(oldp+2399,((((~ (((vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_0 
                                        >> 0x1eU) & (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_predict_en)) 
                                      | (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT___GEN))) 
                                  & (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroupValid_1)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_2))));
        bufp->chgBit(oldp+2400,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popStall)) 
                                 & ((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPop)) 
                                    | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__full)))));
        bufp->chgBit(oldp+2401,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popStall)) 
                                 & (IData)(((0U != 
                                             (6U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPop))) 
                                            | (IData)(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__full))))));
        bufp->chgIData(oldp+2402,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_pc),32);
        bufp->chgIData(oldp+2403,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_inst),32);
        bufp->chgCData(oldp+2404,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_excType),7);
        bufp->chgBit(oldp+2405,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_predict_en));
        bufp->chgIData(oldp+2406,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_0_predict_tar),32);
        bufp->chgIData(oldp+2407,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_pc),32);
        bufp->chgIData(oldp+2408,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_inst),32);
        bufp->chgCData(oldp+2409,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_excType),7);
        bufp->chgBit(oldp+2410,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_predict_en));
        bufp->chgIData(oldp+2411,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_1_predict_tar),32);
        bufp->chgIData(oldp+2412,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_pc),32);
        bufp->chgIData(oldp+2413,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_inst),32);
        bufp->chgCData(oldp+2414,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_excType),7);
        bufp->chgBit(oldp+2415,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_predict_en));
        bufp->chgIData(oldp+2416,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_2_predict_tar),32);
        bufp->chgIData(oldp+2417,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_pc),32);
        bufp->chgIData(oldp+2418,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_inst),32);
        bufp->chgCData(oldp+2419,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_excType),7);
        bufp->chgBit(oldp+2420,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_predict_en));
        bufp->chgIData(oldp+2421,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_3_predict_tar),32);
        bufp->chgIData(oldp+2422,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_pc),32);
        bufp->chgIData(oldp+2423,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_inst),32);
        bufp->chgCData(oldp+2424,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_excType),7);
        bufp->chgBit(oldp+2425,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_predict_en));
        bufp->chgIData(oldp+2426,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_4_predict_tar),32);
        bufp->chgIData(oldp+2427,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_pc),32);
        bufp->chgIData(oldp+2428,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_inst),32);
        bufp->chgCData(oldp+2429,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_excType),7);
        bufp->chgBit(oldp+2430,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_predict_en));
        bufp->chgIData(oldp+2431,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_5_predict_tar),32);
        bufp->chgIData(oldp+2432,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_pc),32);
        bufp->chgIData(oldp+2433,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_inst),32);
        bufp->chgCData(oldp+2434,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_excType),7);
        bufp->chgBit(oldp+2435,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_predict_en));
        bufp->chgIData(oldp+2436,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_6_predict_tar),32);
        bufp->chgIData(oldp+2437,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_pc),32);
        bufp->chgIData(oldp+2438,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_inst),32);
        bufp->chgCData(oldp+2439,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_excType),7);
        bufp->chgBit(oldp+2440,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_predict_en));
        bufp->chgIData(oldp+2441,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__mem_7_predict_tar),32);
        bufp->chgCData(oldp+2442,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushPtr),3);
        bufp->chgCData(oldp+2443,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popPtr),3);
        bufp->chgBit(oldp+2444,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maybeFull));
        bufp->chgBit(oldp+2445,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__full));
        bufp->chgBit(oldp+2446,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__empty));
        bufp->chgCData(oldp+2447,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPush),3);
        bufp->chgCData(oldp+2448,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__maxPop),3);
        bufp->chgCData(oldp+2449,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushOffset),2);
        bufp->chgCData(oldp+2450,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__DecodeTop__DOT__io_from_ready_0) 
                                   << 1U)),2);
        bufp->chgBit(oldp+2451,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__pushStall));
        bufp->chgBit(oldp+2452,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__popStall));
        bufp->chgCData(oldp+2453,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__realPushOffset),2);
        bufp->chgCData(oldp+2454,(vlSelf->mycpu_top__DOT__core__DOT__InstBuffer__DOT__MultiPortFifo__DOT__realPopOffset),2);
        bufp->chgBit(oldp+2455,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.io_to_valid));
        bufp->chgIData(oldp+2456,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_pc
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_pc
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_pc
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_pc)))),32);
        bufp->chgIData(oldp+2457,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_inst
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_inst
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_inst
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_inst)))),32);
        bufp->chgCData(oldp+2458,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_func_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_func_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_func_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_func_type))))),4);
        bufp->chgCData(oldp+2459,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_op_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_op_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_op_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_op_type))))),5);
        bufp->chgIData(oldp+2460,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_imm
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_imm
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_imm
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_imm)))),32);
        bufp->chgBit(oldp+2461,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src1Ispc)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src1Ispc)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src1Ispc)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src1Ispc))))));
        bufp->chgBit(oldp+2462,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src1IsZero)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src1IsZero)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src1IsZero)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src1IsZero))))));
        bufp->chgBit(oldp+2463,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src2IsFour)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src2IsFour)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src2IsFour)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src2IsFour))))));
        bufp->chgBit(oldp+2464,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src2IsImm)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src2IsImm)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src2IsImm)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src2IsImm))))));
        bufp->chgBit(oldp+2465,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_iswf)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_iswf)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_iswf)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_iswf))))));
        bufp->chgCData(oldp+2466,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_opreg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_opreg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_opreg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_opreg))))),6);
        bufp->chgCData(oldp+2467,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rjInfo_preg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rjInfo_preg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rjInfo_preg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg))))),6);
        bufp->chgCData(oldp+2468,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rkInfo_preg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rkInfo_preg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rkInfo_preg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg))))),6);
        bufp->chgCData(oldp+2469,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rdInfo_areg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rdInfo_areg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rdInfo_areg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rdInfo_areg))))),5);
        bufp->chgCData(oldp+2470,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_21),6);
        bufp->chgCData(oldp+2471,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_robId)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_robId)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_robId)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_robId))))),5);
        bufp->chgCData(oldp+2472,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_exc_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_exc_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_exc_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_exc_type))))),7);
        bufp->chgBit(oldp+2473,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_predict_en)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_predict_en)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_predict_en)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_predict_en))))));
        bufp->chgIData(oldp+2474,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_predict_tar
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_predict_tar
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_predict_tar
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_predict_tar)))),32);
        bufp->chgBit(oldp+2475,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_realBr_en)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_realBr_en)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_realBr_en)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_realBr_en))))));
        bufp->chgBit(oldp+2476,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.io_to_valid));
        bufp->chgIData(oldp+2477,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_pc
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_pc
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_pc
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_pc)))),32);
        bufp->chgIData(oldp+2478,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_inst
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_inst
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_inst
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_inst)))),32);
        bufp->chgCData(oldp+2479,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_func_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_func_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_func_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_func_type))))),4);
        bufp->chgCData(oldp+2480,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_op_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_op_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_op_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_op_type))))),5);
        bufp->chgIData(oldp+2481,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_imm
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_imm
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_imm
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_imm)))),32);
        bufp->chgBit(oldp+2482,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src1Ispc)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src1Ispc)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src1Ispc)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src1Ispc))))));
        bufp->chgBit(oldp+2483,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src1IsZero)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src1IsZero)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src1IsZero)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src1IsZero))))));
        bufp->chgBit(oldp+2484,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src2IsFour)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src2IsFour)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src2IsFour)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src2IsFour))))));
        bufp->chgBit(oldp+2485,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src2IsImm)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src2IsImm)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src2IsImm)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src2IsImm))))));
        bufp->chgBit(oldp+2486,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_iswf)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_iswf)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_iswf)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_iswf))))));
        bufp->chgCData(oldp+2487,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_opreg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_opreg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_opreg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_opreg))))),6);
        bufp->chgCData(oldp+2488,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rjInfo_preg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rjInfo_preg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rjInfo_preg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg))))),6);
        bufp->chgCData(oldp+2489,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rkInfo_preg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rkInfo_preg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rkInfo_preg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg))))),6);
        bufp->chgCData(oldp+2490,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rdInfo_areg)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rdInfo_areg)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rdInfo_areg)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rdInfo_areg))))),5);
        bufp->chgCData(oldp+2491,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_21),6);
        bufp->chgCData(oldp+2492,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_robId)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_robId)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_robId)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_robId))))),5);
        bufp->chgCData(oldp+2493,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_exc_type)
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_exc_type)
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_exc_type)
                                            : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_exc_type))))),7);
        bufp->chgBit(oldp+2494,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_predict_en)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_predict_en)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_predict_en)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_predict_en))))));
        bufp->chgIData(oldp+2495,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                    ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_predict_tar
                                    : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                        ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_predict_tar
                                        : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                            ? vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_predict_tar
                                            : vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_predict_tar)))),32);
        bufp->chgBit(oldp+2496,(((0U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                  ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_realBr_en)
                                  : ((1U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                      ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_realBr_en)
                                      : ((2U == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index))
                                          ? (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_realBr_en)
                                          : (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_realBr_en))))));
        bufp->chgBit(oldp+2497,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2498,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__io_to_valid_0));
        bufp->chgIData(oldp+2499,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_pc
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_pc
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_pc)))),32);
        bufp->chgCData(oldp+2500,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_func_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_func_type)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_func_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_func_type))))),4);
        bufp->chgCData(oldp+2501,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_op_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_op_type)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_op_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_op_type))))),5);
        bufp->chgIData(oldp+2502,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_imm
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_imm
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_imm
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_imm)))),32);
        bufp->chgBit(oldp+2503,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src1Ispc)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src1Ispc)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src1Ispc)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src1Ispc))))));
        bufp->chgBit(oldp+2504,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src1IsZero)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src1IsZero)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src1IsZero)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src1IsZero))))));
        bufp->chgBit(oldp+2505,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src2IsFour)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src2IsFour)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src2IsFour)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src2IsFour))))));
        bufp->chgBit(oldp+2506,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src2IsImm)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src2IsImm)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src2IsImm)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src2IsImm))))));
        bufp->chgBit(oldp+2507,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_iswf)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_iswf)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_iswf)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_iswf))))));
        bufp->chgCData(oldp+2508,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_opreg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_opreg)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_opreg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_opreg))))),6);
        bufp->chgCData(oldp+2509,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rjInfo_preg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rjInfo_preg)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rjInfo_preg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg))))),6);
        bufp->chgCData(oldp+2510,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rkInfo_preg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rkInfo_preg)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rkInfo_preg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg))))),6);
        bufp->chgCData(oldp+2511,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rdInfo_areg)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rdInfo_areg)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rdInfo_areg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rdInfo_areg))))),5);
        bufp->chgCData(oldp+2512,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_20),6);
        bufp->chgCData(oldp+2513,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_robId)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_robId)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_robId)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_robId))))),5);
        bufp->chgCData(oldp+2514,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_exc_type)
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_exc_type)
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_exc_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_exc_type))))),7);
        bufp->chgBit(oldp+2515,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                  ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_realBr_en)
                                  : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                      ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_realBr_en)
                                      : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index))
                                          ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_realBr_en)
                                          : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_realBr_en))))));
        bufp->chgBit(oldp+2516,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2517,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__io_to_valid_0));
        bufp->chgIData(oldp+2518,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_pc)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_pc))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_pc)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_pc
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_pc)))),32);
        bufp->chgCData(oldp+2519,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_func_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_func_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_func_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_func_type)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_func_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_func_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_func_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_func_type))))),4);
        bufp->chgCData(oldp+2520,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_op_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_op_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_op_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_op_type)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_op_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_op_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_op_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_op_type))))),5);
        bufp->chgIData(oldp+2521,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_imm
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_imm)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_imm
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_imm))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_imm
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_imm)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_imm
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_imm)))),32);
        bufp->chgBit(oldp+2522,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_7));
        bufp->chgBit(oldp+2523,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_8));
        bufp->chgBit(oldp+2524,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_9));
        bufp->chgCData(oldp+2525,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_opreg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_opreg))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_opreg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_opreg)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_opreg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_opreg))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_opreg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_opreg))))),6);
        bufp->chgCData(oldp+2526,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_0),6);
        bufp->chgCData(oldp+2527,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rdInfo_areg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rdInfo_areg))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rdInfo_areg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rdInfo_areg)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rdInfo_areg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rdInfo_areg))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rdInfo_areg)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rdInfo_areg))))),5);
        bufp->chgCData(oldp+2528,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_12),6);
        bufp->chgIData(oldp+2529,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rdInfo_data
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rdInfo_data)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rdInfo_data
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rdInfo_data))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rdInfo_data
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rdInfo_data)
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rdInfo_data
                                            : vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rdInfo_data)))),32);
        bufp->chgCData(oldp+2530,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_robId)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_robId))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_robId)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_robId)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_robId)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_robId))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_robId)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_robId))))),5);
        bufp->chgCData(oldp+2531,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                    ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_exc_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_exc_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_exc_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_exc_type)))
                                    : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_exc_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_exc_type))
                                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value))
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_exc_type)
                                            : (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_exc_type))))),7);
        bufp->chgBit(oldp+2532,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_16));
        bufp->chgBit(oldp+2533,(vlSelf->mycpu_top__DOT__core__DOT___ReadRegTop_io_awake_valid));
        bufp->chgBit(oldp+2534,(vlSelf->mycpu_top__DOT__core__DOT___ReadRegTop_1_io_awake_valid));
        bufp->chgBit(oldp+2535,(vlSelf->mycpu_top__DOT__core__DOT___MuldivTop_io_awake_valid));
        bufp->chgCData(oldp+2536,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg),6);
        bufp->chgBit(oldp+2537,(vlSelf->mycpu_top__DOT__core__DOT___Memory1Top_io_awake_valid));
        bufp->chgCData(oldp+2538,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg),6);
        bufp->chgBit(oldp+2539,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid));
        bufp->chgBit(oldp+2540,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid));
        bufp->chgBit(oldp+2541,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid));
        bufp->chgBit(oldp+2542,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid));
        bufp->chgBit(oldp+2543,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_0));
        bufp->chgBit(oldp+2544,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_1));
        bufp->chgBit(oldp+2545,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_2));
        bufp->chgBit(oldp+2546,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_3));
        bufp->chgBit(oldp+2547,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_4));
        bufp->chgBit(oldp+2548,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_5));
        bufp->chgBit(oldp+2549,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_6));
        bufp->chgBit(oldp+2550,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_7));
        bufp->chgBit(oldp+2551,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_8));
        bufp->chgBit(oldp+2552,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_9));
        bufp->chgBit(oldp+2553,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_10));
        bufp->chgBit(oldp+2554,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_11));
        bufp->chgBit(oldp+2555,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_12));
        bufp->chgBit(oldp+2556,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_13));
        bufp->chgBit(oldp+2557,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_14));
        bufp->chgBit(oldp+2558,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_15));
        bufp->chgBit(oldp+2559,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_16));
        bufp->chgBit(oldp+2560,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_17));
        bufp->chgBit(oldp+2561,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_18));
        bufp->chgBit(oldp+2562,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_19));
        bufp->chgBit(oldp+2563,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_20));
        bufp->chgBit(oldp+2564,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_21));
        bufp->chgBit(oldp+2565,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_22));
        bufp->chgBit(oldp+2566,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_23));
        bufp->chgBit(oldp+2567,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_24));
        bufp->chgBit(oldp+2568,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_25));
        bufp->chgBit(oldp+2569,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_26));
        bufp->chgBit(oldp+2570,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_27));
        bufp->chgBit(oldp+2571,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_28));
        bufp->chgBit(oldp+2572,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_29));
        bufp->chgBit(oldp+2573,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_30));
        bufp->chgBit(oldp+2574,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_31));
        bufp->chgBit(oldp+2575,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_32));
        bufp->chgBit(oldp+2576,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_33));
        bufp->chgBit(oldp+2577,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_34));
        bufp->chgBit(oldp+2578,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_35));
        bufp->chgBit(oldp+2579,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_36));
        bufp->chgBit(oldp+2580,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_37));
        bufp->chgBit(oldp+2581,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_38));
        bufp->chgBit(oldp+2582,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_39));
        bufp->chgBit(oldp+2583,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_40));
        bufp->chgBit(oldp+2584,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_41));
        bufp->chgBit(oldp+2585,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_42));
        bufp->chgBit(oldp+2586,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_43));
        bufp->chgBit(oldp+2587,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_44));
        bufp->chgBit(oldp+2588,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_45));
        bufp->chgBit(oldp+2589,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_46));
        bufp->chgBit(oldp+2590,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_47));
        bufp->chgBit(oldp+2591,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_48));
        bufp->chgBit(oldp+2592,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_49));
        bufp->chgBit(oldp+2593,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_50));
        bufp->chgBit(oldp+2594,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_51));
        bufp->chgBit(oldp+2595,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_52));
        bufp->chgBit(oldp+2596,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_53));
        bufp->chgBit(oldp+2597,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_54));
        bufp->chgBit(oldp+2598,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_55));
        bufp->chgBit(oldp+2599,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_56));
        bufp->chgBit(oldp+2600,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_57));
        bufp->chgBit(oldp+2601,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_58));
        bufp->chgBit(oldp+2602,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_59));
        bufp->chgBit(oldp+2603,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_60));
        bufp->chgBit(oldp+2604,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_61));
        bufp->chgBit(oldp+2605,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_62));
        bufp->chgBit(oldp+2606,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__busyReg_63));
        bufp->chgCData(oldp+2607,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp),6);
        bufp->chgIData(oldp+2608,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_pc),32);
        bufp->chgCData(oldp+2609,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_func_type),4);
        bufp->chgCData(oldp+2610,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_op_type),5);
        bufp->chgIData(oldp+2611,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_imm),32);
        bufp->chgBit(oldp+2612,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_src1Ispc));
        bufp->chgBit(oldp+2613,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_src1IsZero));
        bufp->chgBit(oldp+2614,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_iswf));
        bufp->chgCData(oldp+2615,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_opreg),6);
        bufp->chgCData(oldp+2616,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rjInfo_preg),6);
        bufp->chgCData(oldp+2617,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rkInfo_preg),6);
        bufp->chgCData(oldp+2618,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rdInfo_areg),5);
        bufp->chgCData(oldp+2619,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rdInfo_preg),6);
        bufp->chgIData(oldp+2620,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_rdInfo_data),32);
        bufp->chgCData(oldp+2621,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_robId),5);
        bufp->chgCData(oldp+2622,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_exc_type),7);
        bufp->chgBit(oldp+2623,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_0_realBr_en));
        bufp->chgIData(oldp+2624,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_pc),32);
        bufp->chgCData(oldp+2625,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_func_type),4);
        bufp->chgCData(oldp+2626,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_op_type),5);
        bufp->chgIData(oldp+2627,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_imm),32);
        bufp->chgBit(oldp+2628,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_src1Ispc));
        bufp->chgBit(oldp+2629,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_src1IsZero));
        bufp->chgBit(oldp+2630,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_iswf));
        bufp->chgCData(oldp+2631,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_opreg),6);
        bufp->chgCData(oldp+2632,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rjInfo_preg),6);
        bufp->chgCData(oldp+2633,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rkInfo_preg),6);
        bufp->chgCData(oldp+2634,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2635,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2636,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_rdInfo_data),32);
        bufp->chgCData(oldp+2637,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_robId),5);
        bufp->chgCData(oldp+2638,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_exc_type),7);
        bufp->chgBit(oldp+2639,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_1_realBr_en));
        bufp->chgIData(oldp+2640,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_pc),32);
        bufp->chgCData(oldp+2641,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_func_type),4);
        bufp->chgCData(oldp+2642,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_op_type),5);
        bufp->chgIData(oldp+2643,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_imm),32);
        bufp->chgBit(oldp+2644,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_src1Ispc));
        bufp->chgBit(oldp+2645,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_src1IsZero));
        bufp->chgBit(oldp+2646,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_iswf));
        bufp->chgCData(oldp+2647,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_opreg),6);
        bufp->chgCData(oldp+2648,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rjInfo_preg),6);
        bufp->chgCData(oldp+2649,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rkInfo_preg),6);
        bufp->chgCData(oldp+2650,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rdInfo_areg),5);
        bufp->chgCData(oldp+2651,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rdInfo_preg),6);
        bufp->chgIData(oldp+2652,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_rdInfo_data),32);
        bufp->chgCData(oldp+2653,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_robId),5);
        bufp->chgCData(oldp+2654,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_exc_type),7);
        bufp->chgBit(oldp+2655,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_2_realBr_en));
        bufp->chgIData(oldp+2656,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_pc),32);
        bufp->chgCData(oldp+2657,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_func_type),4);
        bufp->chgCData(oldp+2658,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_op_type),5);
        bufp->chgIData(oldp+2659,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_imm),32);
        bufp->chgBit(oldp+2660,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_src1Ispc));
        bufp->chgBit(oldp+2661,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_src1IsZero));
        bufp->chgBit(oldp+2662,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_iswf));
        bufp->chgCData(oldp+2663,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_opreg),6);
        bufp->chgCData(oldp+2664,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rjInfo_preg),6);
        bufp->chgCData(oldp+2665,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rkInfo_preg),6);
        bufp->chgCData(oldp+2666,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rdInfo_areg),5);
        bufp->chgCData(oldp+2667,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rdInfo_preg),6);
        bufp->chgIData(oldp+2668,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_rdInfo_data),32);
        bufp->chgCData(oldp+2669,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_robId),5);
        bufp->chgCData(oldp+2670,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_exc_type),7);
        bufp->chgBit(oldp+2671,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_3_realBr_en));
        bufp->chgIData(oldp+2672,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_pc),32);
        bufp->chgCData(oldp+2673,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_func_type),4);
        bufp->chgCData(oldp+2674,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_op_type),5);
        bufp->chgIData(oldp+2675,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_imm),32);
        bufp->chgBit(oldp+2676,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_src1Ispc));
        bufp->chgBit(oldp+2677,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_src1IsZero));
        bufp->chgBit(oldp+2678,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_iswf));
        bufp->chgCData(oldp+2679,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_opreg),6);
        bufp->chgCData(oldp+2680,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rjInfo_preg),6);
        bufp->chgCData(oldp+2681,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rkInfo_preg),6);
        bufp->chgCData(oldp+2682,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rdInfo_areg),5);
        bufp->chgCData(oldp+2683,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rdInfo_preg),6);
        bufp->chgIData(oldp+2684,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_rdInfo_data),32);
        bufp->chgCData(oldp+2685,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_robId),5);
        bufp->chgCData(oldp+2686,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_exc_type),7);
        bufp->chgBit(oldp+2687,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_4_realBr_en));
        bufp->chgIData(oldp+2688,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_pc),32);
        bufp->chgCData(oldp+2689,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_func_type),4);
        bufp->chgCData(oldp+2690,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_op_type),5);
        bufp->chgIData(oldp+2691,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_imm),32);
        bufp->chgBit(oldp+2692,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_src1Ispc));
        bufp->chgBit(oldp+2693,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_src1IsZero));
        bufp->chgBit(oldp+2694,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_iswf));
        bufp->chgCData(oldp+2695,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_opreg),6);
        bufp->chgCData(oldp+2696,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rjInfo_preg),6);
        bufp->chgCData(oldp+2697,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rkInfo_preg),6);
        bufp->chgCData(oldp+2698,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rdInfo_areg),5);
        bufp->chgCData(oldp+2699,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rdInfo_preg),6);
        bufp->chgIData(oldp+2700,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_rdInfo_data),32);
        bufp->chgCData(oldp+2701,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_robId),5);
        bufp->chgCData(oldp+2702,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_exc_type),7);
        bufp->chgBit(oldp+2703,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_5_realBr_en));
        bufp->chgIData(oldp+2704,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_pc),32);
        bufp->chgCData(oldp+2705,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_func_type),4);
        bufp->chgCData(oldp+2706,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_op_type),5);
        bufp->chgIData(oldp+2707,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_imm),32);
        bufp->chgBit(oldp+2708,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_src1Ispc));
        bufp->chgBit(oldp+2709,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_src1IsZero));
        bufp->chgBit(oldp+2710,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_iswf));
        bufp->chgCData(oldp+2711,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_opreg),6);
        bufp->chgCData(oldp+2712,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rjInfo_preg),6);
        bufp->chgCData(oldp+2713,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rkInfo_preg),6);
        bufp->chgCData(oldp+2714,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rdInfo_areg),5);
        bufp->chgCData(oldp+2715,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rdInfo_preg),6);
        bufp->chgIData(oldp+2716,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_rdInfo_data),32);
        bufp->chgCData(oldp+2717,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_robId),5);
        bufp->chgCData(oldp+2718,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_exc_type),7);
        bufp->chgBit(oldp+2719,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_6_realBr_en));
        bufp->chgIData(oldp+2720,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_pc),32);
        bufp->chgCData(oldp+2721,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_func_type),4);
        bufp->chgCData(oldp+2722,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_op_type),5);
        bufp->chgIData(oldp+2723,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_imm),32);
        bufp->chgBit(oldp+2724,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_src1Ispc));
        bufp->chgBit(oldp+2725,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_src1IsZero));
        bufp->chgBit(oldp+2726,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_iswf));
        bufp->chgCData(oldp+2727,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_opreg),6);
        bufp->chgCData(oldp+2728,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rjInfo_preg),6);
        bufp->chgCData(oldp+2729,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rkInfo_preg),6);
        bufp->chgCData(oldp+2730,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rdInfo_areg),5);
        bufp->chgCData(oldp+2731,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rdInfo_preg),6);
        bufp->chgIData(oldp+2732,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_rdInfo_data),32);
        bufp->chgCData(oldp+2733,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_robId),5);
        bufp->chgCData(oldp+2734,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_exc_type),7);
        bufp->chgBit(oldp+2735,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__mem_7_realBr_en));
        bufp->chgCData(oldp+2736,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__headPtr_value),3);
        bufp->chgCData(oldp+2737,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__tailPtr_value),3);
        bufp->chgBit(oldp+2738,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__ptrMatch));
        bufp->chgBit(oldp+2739,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__maybeFull));
        bufp->chgBit(oldp+2740,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__full));
        bufp->chgBit(oldp+2741,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_1));
        bufp->chgBit(oldp+2742,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__casez_tmp_2));
        bufp->chgBit(oldp+2743,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__doPush));
        bufp->chgBit(oldp+2744,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__OrderedIssue__DOT__doPop));
        bufp->chgIData(oldp+2745,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_pc),32);
        bufp->chgCData(oldp+2746,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_func_type),4);
        bufp->chgCData(oldp+2747,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_op_type),5);
        bufp->chgIData(oldp+2748,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_imm),32);
        bufp->chgBit(oldp+2749,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src1Ispc));
        bufp->chgBit(oldp+2750,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src1IsZero));
        bufp->chgBit(oldp+2751,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src2IsFour));
        bufp->chgBit(oldp+2752,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_src2IsImm));
        bufp->chgBit(oldp+2753,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_iswf));
        bufp->chgCData(oldp+2754,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_opreg),6);
        bufp->chgCData(oldp+2755,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rjInfo_preg),6);
        bufp->chgCData(oldp+2756,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rkInfo_preg),6);
        bufp->chgCData(oldp+2757,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rdInfo_areg),5);
        bufp->chgCData(oldp+2758,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_rdInfo_preg),6);
        bufp->chgCData(oldp+2759,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_robId),5);
        bufp->chgCData(oldp+2760,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_exc_type),7);
        bufp->chgBit(oldp+2761,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_0_realBr_en));
        bufp->chgIData(oldp+2762,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_pc),32);
        bufp->chgCData(oldp+2763,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_func_type),4);
        bufp->chgCData(oldp+2764,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_op_type),5);
        bufp->chgIData(oldp+2765,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_imm),32);
        bufp->chgBit(oldp+2766,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src1Ispc));
        bufp->chgBit(oldp+2767,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src1IsZero));
        bufp->chgBit(oldp+2768,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src2IsFour));
        bufp->chgBit(oldp+2769,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_src2IsImm));
        bufp->chgBit(oldp+2770,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_iswf));
        bufp->chgCData(oldp+2771,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_opreg),6);
        bufp->chgCData(oldp+2772,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rjInfo_preg),6);
        bufp->chgCData(oldp+2773,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rkInfo_preg),6);
        bufp->chgCData(oldp+2774,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2775,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_rdInfo_preg),6);
        bufp->chgCData(oldp+2776,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_robId),5);
        bufp->chgCData(oldp+2777,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_exc_type),7);
        bufp->chgBit(oldp+2778,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_1_realBr_en));
        bufp->chgIData(oldp+2779,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_pc),32);
        bufp->chgCData(oldp+2780,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_func_type),4);
        bufp->chgCData(oldp+2781,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_op_type),5);
        bufp->chgIData(oldp+2782,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_imm),32);
        bufp->chgBit(oldp+2783,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src1Ispc));
        bufp->chgBit(oldp+2784,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src1IsZero));
        bufp->chgBit(oldp+2785,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src2IsFour));
        bufp->chgBit(oldp+2786,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_src2IsImm));
        bufp->chgBit(oldp+2787,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_iswf));
        bufp->chgCData(oldp+2788,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_opreg),6);
        bufp->chgCData(oldp+2789,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rjInfo_preg),6);
        bufp->chgCData(oldp+2790,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rkInfo_preg),6);
        bufp->chgCData(oldp+2791,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rdInfo_areg),5);
        bufp->chgCData(oldp+2792,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_rdInfo_preg),6);
        bufp->chgCData(oldp+2793,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_robId),5);
        bufp->chgCData(oldp+2794,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_exc_type),7);
        bufp->chgBit(oldp+2795,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_2_realBr_en));
        bufp->chgIData(oldp+2796,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_pc),32);
        bufp->chgCData(oldp+2797,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_func_type),4);
        bufp->chgCData(oldp+2798,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_op_type),5);
        bufp->chgIData(oldp+2799,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_imm),32);
        bufp->chgBit(oldp+2800,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src1Ispc));
        bufp->chgBit(oldp+2801,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src1IsZero));
        bufp->chgBit(oldp+2802,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src2IsFour));
        bufp->chgBit(oldp+2803,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_src2IsImm));
        bufp->chgBit(oldp+2804,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_iswf));
        bufp->chgCData(oldp+2805,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_opreg),6);
        bufp->chgCData(oldp+2806,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg),6);
        bufp->chgCData(oldp+2807,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg),6);
        bufp->chgCData(oldp+2808,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rdInfo_areg),5);
        bufp->chgCData(oldp+2809,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rdInfo_preg),6);
        bufp->chgCData(oldp+2810,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_robId),5);
        bufp->chgCData(oldp+2811,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_exc_type),7);
        bufp->chgBit(oldp+2812,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_realBr_en));
        bufp->chgCData(oldp+2813,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__topPtr),2);
        bufp->chgBit(oldp+2814,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__maybeFull));
        bufp->chgBit(oldp+2815,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__full));
        bufp->chgBit(oldp+2816,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp));
        bufp->chgBit(oldp+2817,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_0));
        bufp->chgBit(oldp+2818,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__hitVec_0));
        bufp->chgBit(oldp+2819,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_1));
        bufp->chgBit(oldp+2820,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_2));
        bufp->chgBit(oldp+2821,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__hitVec_1));
        bufp->chgBit(oldp+2822,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_3));
        bufp->chgBit(oldp+2823,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_4));
        bufp->chgBit(oldp+2824,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__hitVec_2));
        bufp->chgBit(oldp+2825,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_5));
        bufp->chgBit(oldp+2826,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_6));
        bufp->chgBit(oldp+2827,((1U & ((((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg) 
                                            == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg))) 
                                        | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg) 
                                               == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg))) 
                                           | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg))) 
                                              | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_5)) 
                                                 | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rjInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg))))))) 
                                       & (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                           & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg) 
                                              == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg))) 
                                          | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                              & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg) 
                                                 == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg))) 
                                             | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg) 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg))) 
                                                | ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__casez_tmp_6)) 
                                                   | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__mem_3_rkInfo_preg) 
                                                         == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg)))))))))));
        bufp->chgCData(oldp+2828,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__index),2);
        bufp->chgBit(oldp+2829,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__shiftVec_1));
        bufp->chgBit(oldp+2830,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__shiftVec_2));
        bufp->chgBit(oldp+2831,(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_2__DOT__shiftVec_3));
        bufp->chgBit(oldp+2832,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2833,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_2));
        bufp->chgIData(oldp+2834,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2835,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2836,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2837,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_iswf));
        bufp->chgCData(oldp+2838,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+2839,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2840,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2841,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rdInfo_data),32);
        bufp->chgCData(oldp+2842,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2843,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+2844,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_realBr_en));
        bufp->chgIData(oldp+2845,((((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_src1Ispc)
                                     ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_pc
                                     : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_src1IsZero)
                                         ? 0U : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                                  & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                                  ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                   : 
                                                  (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_rjInfo_preg)))
                                                    ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                    : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_5))))) 
                                   + vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_imm)),32);
        bufp->chgBit(oldp+2846,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2847,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_2));
        bufp->chgIData(oldp+2848,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2849,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2850,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2851,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_iswf));
        bufp->chgCData(oldp+2852,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+2853,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2854,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2855,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_rdInfo_data),32);
        bufp->chgCData(oldp+2856,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2857,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+2858,(vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_realBr_en));
        bufp->chgIData(oldp+2859,((0x1fffffffU & vlSelf->mycpu_top__DOT__core__DOT__Memory0Top__DOT__raw_1_va)),32);
        bufp->chgBit(oldp+2860,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2861,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_2));
        bufp->chgIData(oldp+2862,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2863,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2864,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2865,(((9U != ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)
                                          ? 9U : 0x25U)) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_iswf))));
        bufp->chgCData(oldp+2866,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+2867,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2868,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2869,(((0x25U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_exc_type))
                                    ? ((9U == ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)
                                                ? 9U
                                                : 0x25U))
                                        ? 9U : 0x25U)
                                    : (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_exc_type))),7);
        bufp->chgBit(oldp+2870,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+2871,(vlSelf->mycpu_top__DOT__core__DOT__TLB_1__DOT__io_stage1_cached_r));
        bufp->chgIData(oldp+2872,(((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data
                                    : ((1U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                        ? ((vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data))
                                        : ((2U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                            ? ((vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data 
                                                << 0x18U) 
                                               | ((0xff0000U 
                                                   & (vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data))))
                                            : 0U)))),32);
        bufp->chgCData(oldp+2873,((((~ ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type) 
                                        >> 3U)) & (5U 
                                                   == 
                                                   ((4U 
                                                     & ((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)) 
                                                        << 2U)) 
                                                    | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)
                                                        ? 2U
                                                        : 1U))))
                                    ? ((0U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                        ? 0xfU : (0xfU 
                                                  & ((1U 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                                      ? 
                                                     ((IData)(3U) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_va))
                                                      : 
                                                     ((2U 
                                                       == (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_op_type))
                                                       ? 
                                                      ((IData)(1U) 
                                                       << 
                                                       (3U 
                                                        & vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_va))
                                                       : 0U))))
                                    : 0U)),4);
        bufp->chgBit(oldp+2874,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_2) 
                                 | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_1) 
                                    | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_0) 
                                       | (IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN))))));
        bufp->chgIData(oldp+2875,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_2)
                                    ? vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_3_requestInfo_wdata
                                    : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_1)
                                        ? vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_2_requestInfo_wdata
                                        : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN_0)
                                            ? vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_1_requestInfo_wdata
                                            : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT___GEN)
                                                ? vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_0_requestInfo_wdata
                                                : 0U))))),32);
        bufp->chgBit(oldp+2876,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_iswf));
        bufp->chgIData(oldp+2877,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_data),32);
        bufp->chgCData(oldp+2878,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_exc_type),7);
        bufp->chgIData(oldp+2879,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_va),32);
        bufp->chgIData(oldp+2880,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_pa),32);
        bufp->chgBit(oldp+2881,(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_isDirect));
        bufp->chgBit(oldp+2882,((9U == ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)
                                         ? 9U : 0x25U))));
        bufp->chgCData(oldp+2883,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__Memory1Access__DOT____VdfgTmp_h11340954__0)
                                    ? 9U : 0x25U)),7);
        bufp->chgBit(oldp+2884,(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_to_valid));
        bufp->chgIData(oldp+2885,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2886,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2887,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2888,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_iswf));
        bufp->chgCData(oldp+2889,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+2890,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2891,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2892,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+2893,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+2894,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__busy));
        bufp->chgBit(oldp+2895,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_storeBufferHit));
        bufp->chgIData(oldp+2896,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_storeBufferHitData),32);
        bufp->chgBit(oldp+2897,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__storeBufferHit));
        bufp->chgIData(oldp+2898,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT____Vcellinp__Memory2Access__io_rdata),32);
        bufp->chgCData(oldp+2899,(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__Memory2Access__DOT__casez_tmp),8);
        bufp->chgBit(oldp+2900,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__io_from_ready_0));
        bufp->chgBit(oldp+2901,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_2));
        bufp->chgIData(oldp+2902,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2903,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2904,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2905,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_iswf));
        bufp->chgCData(oldp+2906,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_opreg),6);
        bufp->chgIData(oldp+2907,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src1Ispc)
                                    ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_pc
                                    : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src1IsZero)
                                        ? 0U : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                                 ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                                 : 
                                                (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                  & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                                  ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rjInfo_preg)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                   : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_3)))))),32);
        bufp->chgIData(oldp+2908,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src2IsFour)
                                    ? 4U : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src2IsImm)
                                             ? vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_imm
                                             : (((IData)(vlSelf->mycpu_top__DOT__core__DOT___Memory2Top_io_forward_valid) 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                                 ? vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT___Memory2Access_io_data
                                                 : 
                                                (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_1_io_forward_valid) 
                                                  & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT__raw_1_rdInfo_preg) 
                                                     == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                                  ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop_1__DOT___ALU_io_result
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__core__DOT___ArithmeticTop_io_forward_valid) 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT__raw_1_rdInfo_preg) 
                                                      == (IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rkInfo_preg)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__ArithmeticTop__DOT___ALU_io_result
                                                   : vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__casez_tmp_4)))))),32);
        bufp->chgCData(oldp+2909,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+2910,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_rdInfo_preg),6);
        bufp->chgCData(oldp+2911,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2912,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+2913,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+2914,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__io_to_valid_0));
        bufp->chgIData(oldp+2915,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_pc),32);
        bufp->chgCData(oldp+2916,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+2917,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type),5);
        bufp->chgBit(oldp+2918,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_iswf));
        bufp->chgCData(oldp+2919,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_opreg),6);
        bufp->chgCData(oldp+2920,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_areg),5);
        bufp->chgIData(oldp+2921,(((5U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_func_type))
                                    ? (IData)((0x1ffffffffULL 
                                               & ((0U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                                   ? vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2
                                                   : 
                                                  ((1U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                                    ? (QData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result))
                                                    : 
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                                     ? (QData)((IData)(
                                                                       (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2 
                                                                        >> 0x20U)))
                                                     : (QData)((IData)(
                                                                       (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result 
                                                                        >> 0x20U))))))))
                                    : ((4U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_func_type))
                                        ? (((0U == 
                                             (3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type))) 
                                            | (1U == 
                                               (3U 
                                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type))))
                                            ? vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__remainder
                                            : vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__quotient)
                                        : 0U))),32);
        bufp->chgCData(oldp+2922,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_robId),5);
        bufp->chgCData(oldp+2923,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+2924,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+2925,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__busy));
        bufp->chgBit(oldp+2926,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div_io_running));
        bufp->chgBit(oldp+2927,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul_io_running));
        bufp->chgIData(oldp+2928,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rjInfo_data),32);
        bufp->chgIData(oldp+2929,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rkInfo_data),32);
        bufp->chgBit(oldp+2930,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_2));
        bufp->chgBit(oldp+2931,((5U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_func_type))));
        bufp->chgBit(oldp+2932,((4U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_func_type))));
        bufp->chgBit(oldp+2933,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__mul_complete));
        bufp->chgBit(oldp+2934,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__div_complete));
        bufp->chgCData(oldp+2935,((3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type))),2);
        bufp->chgIData(oldp+2936,((((0U == (3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type))) 
                                    | (1U == (3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type))))
                                    ? vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__remainder
                                    : vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__quotient)),32);
        bufp->chgBit(oldp+2937,((1U & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__cnt) 
                                       >> 3U))));
        bufp->chgCData(oldp+2938,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__cnt),4);
        bufp->chgIData(oldp+2939,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__quotient),32);
        bufp->chgIData(oldp+2940,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__remainder),32);
        bufp->chgIData(oldp+2941,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__dividend_abs),32);
        bufp->chgIData(oldp+2942,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__divisor_abs),32);
        bufp->chgIData(oldp+2943,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Div__DOT__quotient_abs),32);
        bufp->chgIData(oldp+2944,((IData)((0x1ffffffffULL 
                                           & ((0U == 
                                               (3U 
                                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                               ? vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2
                                               : ((1U 
                                                   == 
                                                   (3U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                                   ? (QData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result))
                                                   : 
                                                  ((2U 
                                                    == 
                                                    (3U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                                    ? (QData)((IData)(
                                                                      (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2 
                                                                       >> 0x20U)))
                                                    : (QData)((IData)(
                                                                      (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result 
                                                                       >> 0x20U))))))))),32);
        bufp->chgBit(oldp+2945,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__running)))));
        bufp->chgQData(oldp+2946,((0x1ffffffffULL & 
                                   ((0U == (3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                     ? vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2
                                     : ((1U == (3U 
                                                & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                         ? (QData)((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result))
                                         : ((2U == 
                                             (3U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_op_type)))
                                             ? (QData)((IData)(
                                                               (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT___signed_result_T_2 
                                                                >> 0x20U)))
                                             : (QData)((IData)(
                                                               (vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result 
                                                                >> 0x20U)))))))),33);
        bufp->chgQData(oldp+2948,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__unsigned_result),64);
        bufp->chgBit(oldp+2950,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__running_lock));
        bufp->chgBit(oldp+2951,(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__Mul__DOT__running));
        bufp->chgBit(oldp+2952,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_iswf) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_2))));
        bufp->chgCData(oldp+2953,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2954,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_rdInfo_data),32);
        bufp->chgBit(oldp+2955,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_iswf) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_2))));
        bufp->chgCData(oldp+2956,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2957,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_rdInfo_data),32);
        bufp->chgBit(oldp+2958,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_iswf) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_2))));
        bufp->chgCData(oldp+2959,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2960,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_rdInfo_data),32);
        bufp->chgBit(oldp+2961,(((IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_iswf) 
                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_2))));
        bufp->chgCData(oldp+2962,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_rdInfo_preg),6);
        bufp->chgIData(oldp+2963,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_rdInfo_data),32);
        bufp->chgIData(oldp+2964,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_0),32);
        bufp->chgIData(oldp+2965,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_1),32);
        bufp->chgIData(oldp+2966,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_2),32);
        bufp->chgIData(oldp+2967,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_3),32);
        bufp->chgIData(oldp+2968,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_4),32);
        bufp->chgIData(oldp+2969,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_5),32);
        bufp->chgIData(oldp+2970,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_6),32);
        bufp->chgIData(oldp+2971,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_7),32);
        bufp->chgIData(oldp+2972,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_8),32);
        bufp->chgIData(oldp+2973,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_9),32);
        bufp->chgIData(oldp+2974,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_10),32);
        bufp->chgIData(oldp+2975,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_11),32);
        bufp->chgIData(oldp+2976,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_12),32);
        bufp->chgIData(oldp+2977,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_13),32);
        bufp->chgIData(oldp+2978,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_14),32);
        bufp->chgIData(oldp+2979,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_15),32);
        bufp->chgIData(oldp+2980,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_16),32);
        bufp->chgIData(oldp+2981,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_17),32);
        bufp->chgIData(oldp+2982,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_18),32);
        bufp->chgIData(oldp+2983,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_19),32);
        bufp->chgIData(oldp+2984,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_20),32);
        bufp->chgIData(oldp+2985,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_21),32);
        bufp->chgIData(oldp+2986,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_22),32);
        bufp->chgIData(oldp+2987,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_23),32);
        bufp->chgIData(oldp+2988,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_24),32);
        bufp->chgIData(oldp+2989,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_25),32);
        bufp->chgIData(oldp+2990,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_26),32);
        bufp->chgIData(oldp+2991,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_27),32);
        bufp->chgIData(oldp+2992,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_28),32);
        bufp->chgIData(oldp+2993,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_29),32);
        bufp->chgIData(oldp+2994,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_30),32);
        bufp->chgIData(oldp+2995,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_31),32);
        bufp->chgIData(oldp+2996,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_32),32);
        bufp->chgIData(oldp+2997,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_33),32);
        bufp->chgIData(oldp+2998,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_34),32);
        bufp->chgIData(oldp+2999,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_35),32);
        bufp->chgIData(oldp+3000,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_36),32);
        bufp->chgIData(oldp+3001,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_37),32);
        bufp->chgIData(oldp+3002,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_38),32);
        bufp->chgIData(oldp+3003,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_39),32);
        bufp->chgIData(oldp+3004,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_40),32);
        bufp->chgIData(oldp+3005,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_41),32);
        bufp->chgIData(oldp+3006,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_42),32);
        bufp->chgIData(oldp+3007,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_43),32);
        bufp->chgIData(oldp+3008,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_44),32);
        bufp->chgIData(oldp+3009,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_45),32);
        bufp->chgIData(oldp+3010,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_46),32);
        bufp->chgIData(oldp+3011,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_47),32);
        bufp->chgIData(oldp+3012,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_48),32);
        bufp->chgIData(oldp+3013,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_49),32);
        bufp->chgIData(oldp+3014,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_50),32);
        bufp->chgIData(oldp+3015,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_51),32);
        bufp->chgIData(oldp+3016,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_52),32);
        bufp->chgIData(oldp+3017,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_53),32);
        bufp->chgIData(oldp+3018,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_54),32);
        bufp->chgIData(oldp+3019,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_55),32);
        bufp->chgIData(oldp+3020,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_56),32);
        bufp->chgIData(oldp+3021,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_57),32);
        bufp->chgIData(oldp+3022,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_58),32);
        bufp->chgIData(oldp+3023,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_59),32);
        bufp->chgIData(oldp+3024,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_60),32);
        bufp->chgIData(oldp+3025,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_61),32);
        bufp->chgIData(oldp+3026,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_62),32);
        bufp->chgIData(oldp+3027,(vlSelf->mycpu_top__DOT__core__DOT__PReg__DOT__preg_63),32);
        bufp->chgBit(oldp+3028,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroupValid_1));
        bufp->chgBit(oldp+3029,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_predict_en));
        bufp->chgIData(oldp+3030,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_predict_tar),32);
        bufp->chgBit(oldp+3031,((1U & (vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_0 
                                       >> 0x1eU))));
        bufp->chgBit(oldp+3032,((1U & (vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__from_1_bits_0_instGroup_1 
                                       >> 0x1eU))));
        bufp->chgIData(oldp+3033,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__tar_0),32);
        bufp->chgIData(oldp+3034,(vlSelf->mycpu_top__DOT__core__DOT__PreDecodeTop__DOT__tar_1),32);
        bufp->chgIData(oldp+3035,((0x1fffffffU & vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__pc)),32);
        bufp->chgBit(oldp+3036,(vlSelf->mycpu_top__DOT__core__DOT__PrefetchTop__DOT__io_from_ready));
        bufp->chgBit(oldp+3037,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__popStall));
        bufp->chgBit(oldp+3038,(vlSelf->mycpu_top__DOT__core__DOT___RenameTop_io_ratRename_0_valid));
        bufp->chgCData(oldp+3039,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__io_rename_0_preg_0),6);
        bufp->chgCData(oldp+3040,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_3),6);
        bufp->chgBit(oldp+3041,(vlSelf->mycpu_top__DOT__core__DOT___RenameTop_io_ratRename_1_valid));
        bufp->chgCData(oldp+3042,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__io_rename_1_preg_0),6);
        bufp->chgCData(oldp+3043,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_4),6);
        bufp->chgCData(oldp+3044,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_rjInfo_areg),5);
        bufp->chgCData(oldp+3045,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_0_rkInfo_areg),5);
        bufp->chgCData(oldp+3046,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_rjInfo_areg),5);
        bufp->chgCData(oldp+3047,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_1_bits_1_rkInfo_areg),5);
        bufp->chgCData(oldp+3048,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_0),6);
        bufp->chgCData(oldp+3049,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_1),6);
        bufp->chgCData(oldp+3050,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_2),6);
        bufp->chgCData(oldp+3051,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_3),6);
        bufp->chgCData(oldp+3052,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_4),6);
        bufp->chgCData(oldp+3053,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_5),6);
        bufp->chgCData(oldp+3054,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_6),6);
        bufp->chgCData(oldp+3055,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_7),6);
        bufp->chgCData(oldp+3056,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_8),6);
        bufp->chgCData(oldp+3057,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_9),6);
        bufp->chgCData(oldp+3058,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_10),6);
        bufp->chgCData(oldp+3059,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_11),6);
        bufp->chgCData(oldp+3060,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_12),6);
        bufp->chgCData(oldp+3061,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_13),6);
        bufp->chgCData(oldp+3062,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_14),6);
        bufp->chgCData(oldp+3063,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_15),6);
        bufp->chgCData(oldp+3064,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_16),6);
        bufp->chgCData(oldp+3065,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_17),6);
        bufp->chgCData(oldp+3066,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_18),6);
        bufp->chgCData(oldp+3067,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_19),6);
        bufp->chgCData(oldp+3068,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_20),6);
        bufp->chgCData(oldp+3069,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_21),6);
        bufp->chgCData(oldp+3070,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_22),6);
        bufp->chgCData(oldp+3071,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_23),6);
        bufp->chgCData(oldp+3072,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_24),6);
        bufp->chgCData(oldp+3073,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_25),6);
        bufp->chgCData(oldp+3074,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_26),6);
        bufp->chgCData(oldp+3075,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_27),6);
        bufp->chgCData(oldp+3076,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_28),6);
        bufp->chgCData(oldp+3077,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_29),6);
        bufp->chgCData(oldp+3078,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_30),6);
        bufp->chgCData(oldp+3079,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__sRat_31),6);
        bufp->chgCData(oldp+3080,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_0),6);
        bufp->chgCData(oldp+3081,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_1),6);
        bufp->chgCData(oldp+3082,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_2),6);
        bufp->chgCData(oldp+3083,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_3),6);
        bufp->chgCData(oldp+3084,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_4),6);
        bufp->chgCData(oldp+3085,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_5),6);
        bufp->chgCData(oldp+3086,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_6),6);
        bufp->chgCData(oldp+3087,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_7),6);
        bufp->chgCData(oldp+3088,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_8),6);
        bufp->chgCData(oldp+3089,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_9),6);
        bufp->chgCData(oldp+3090,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_10),6);
        bufp->chgCData(oldp+3091,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_11),6);
        bufp->chgCData(oldp+3092,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_12),6);
        bufp->chgCData(oldp+3093,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_13),6);
        bufp->chgCData(oldp+3094,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_14),6);
        bufp->chgCData(oldp+3095,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_15),6);
        bufp->chgCData(oldp+3096,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_16),6);
        bufp->chgCData(oldp+3097,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_17),6);
        bufp->chgCData(oldp+3098,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_18),6);
        bufp->chgCData(oldp+3099,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_19),6);
        bufp->chgCData(oldp+3100,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_20),6);
        bufp->chgCData(oldp+3101,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_21),6);
        bufp->chgCData(oldp+3102,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_22),6);
        bufp->chgCData(oldp+3103,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_23),6);
        bufp->chgCData(oldp+3104,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_24),6);
        bufp->chgCData(oldp+3105,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_25),6);
        bufp->chgCData(oldp+3106,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_26),6);
        bufp->chgCData(oldp+3107,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_27),6);
        bufp->chgCData(oldp+3108,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_28),6);
        bufp->chgCData(oldp+3109,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_29),6);
        bufp->chgCData(oldp+3110,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_30),6);
        bufp->chgCData(oldp+3111,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__aRat_31),6);
        bufp->chgCData(oldp+3112,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_0),6);
        bufp->chgCData(oldp+3113,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_1),6);
        bufp->chgCData(oldp+3114,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_2),6);
        bufp->chgCData(oldp+3115,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_3),6);
        bufp->chgCData(oldp+3116,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_4),6);
        bufp->chgCData(oldp+3117,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_5),6);
        bufp->chgCData(oldp+3118,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_6),6);
        bufp->chgCData(oldp+3119,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_7),6);
        bufp->chgCData(oldp+3120,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_8),6);
        bufp->chgCData(oldp+3121,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_9),6);
        bufp->chgCData(oldp+3122,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_10),6);
        bufp->chgCData(oldp+3123,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_11),6);
        bufp->chgCData(oldp+3124,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_12),6);
        bufp->chgCData(oldp+3125,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_13),6);
        bufp->chgCData(oldp+3126,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_14),6);
        bufp->chgCData(oldp+3127,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_15),6);
        bufp->chgCData(oldp+3128,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_16),6);
        bufp->chgCData(oldp+3129,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_17),6);
        bufp->chgCData(oldp+3130,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_18),6);
        bufp->chgCData(oldp+3131,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_19),6);
        bufp->chgCData(oldp+3132,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_20),6);
        bufp->chgCData(oldp+3133,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_21),6);
        bufp->chgCData(oldp+3134,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_22),6);
        bufp->chgCData(oldp+3135,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_23),6);
        bufp->chgCData(oldp+3136,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_24),6);
        bufp->chgCData(oldp+3137,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_25),6);
        bufp->chgCData(oldp+3138,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_26),6);
        bufp->chgCData(oldp+3139,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_27),6);
        bufp->chgCData(oldp+3140,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_28),6);
        bufp->chgCData(oldp+3141,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_29),6);
        bufp->chgCData(oldp+3142,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_30),6);
        bufp->chgCData(oldp+3143,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__freelist_31),6);
        bufp->chgCData(oldp+3144,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__pushPtr),5);
        bufp->chgCData(oldp+3145,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__popPtr),5);
        bufp->chgBit(oldp+3146,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__maybeFull));
        bufp->chgCData(oldp+3147,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__popOffset),2);
        bufp->chgCData(oldp+3148,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_5),6);
        bufp->chgCData(oldp+3149,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__casez_tmp_6),6);
        bufp->chgCData(oldp+3150,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__pushOffset),2);
        bufp->chgBit(oldp+3151,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__pushStall));
        bufp->chgCData(oldp+3152,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__realPushOffset),2);
        bufp->chgCData(oldp+3153,(vlSelf->mycpu_top__DOT__core__DOT__Rat__DOT__realPopOffset),2);
        bufp->chgBit(oldp+3154,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_realBr_en));
        bufp->chgBit(oldp+3155,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src1Ispc));
        bufp->chgBit(oldp+3156,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src1IsZero));
        bufp->chgBit(oldp+3157,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src2IsFour));
        bufp->chgBit(oldp+3158,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_src2IsImm));
        bufp->chgIData(oldp+3159,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_inst),32);
        bufp->chgIData(oldp+3160,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_imm),32);
        bufp->chgBit(oldp+3161,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_predict_en));
        bufp->chgIData(oldp+3162,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_predict_tar),32);
        bufp->chgBit(oldp+3163,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src1Ispc));
        bufp->chgBit(oldp+3164,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src1IsZero));
        bufp->chgBit(oldp+3165,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src2IsFour));
        bufp->chgBit(oldp+3166,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_src2IsImm));
        bufp->chgIData(oldp+3167,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_imm),32);
        bufp->chgBit(oldp+3168,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src1Ispc));
        bufp->chgBit(oldp+3169,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src1IsZero));
        bufp->chgBit(oldp+3170,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src2IsFour));
        bufp->chgBit(oldp+3171,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_2__DOT__raw_1_src2IsImm));
        bufp->chgIData(oldp+3172,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_imm),32);
        bufp->chgBit(oldp+3173,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_src1Ispc));
        bufp->chgBit(oldp+3174,(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_3__DOT__raw_1_src1IsZero));
        bufp->chgBit(oldp+3175,(vlSelf->mycpu_top__DOT__core__DOT___RenameTop_io_rob_0_valid));
        bufp->chgBit(oldp+3176,(vlSelf->mycpu_top__DOT__core__DOT___RenameTop_io_rob_1_valid));
        bufp->chgBit(oldp+3177,(vlSelf->mycpu_top__DOT__core__DOT___Rob_io_renameStall));
        bufp->chgBit(oldp+3178,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_stall));
        bufp->chgBit(oldp+3179,(vlSelf->mycpu_top__DOT__core__DOT__RenameTop__DOT__raw_2));
        bufp->chgBit(oldp+3180,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_2));
        bufp->chgCData(oldp+3181,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_robId),5);
        bufp->chgBit(oldp+3182,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_iswf));
        bufp->chgCData(oldp+3183,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3184,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_opreg),6);
        bufp->chgBit(oldp+3185,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_realBr_en));
        bufp->chgCData(oldp+3186,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+3187,(vlSelf->mycpu_top__DOT__core__DOT___WritebackTop_io_rob_bits_isWrite));
        bufp->chgBit(oldp+3188,((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_func_type))));
        bufp->chgIData(oldp+3189,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_pc),32);
        bufp->chgBit(oldp+3190,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_2));
        bufp->chgCData(oldp+3191,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_robId),5);
        bufp->chgBit(oldp+3192,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_iswf));
        bufp->chgCData(oldp+3193,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3194,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_opreg),6);
        bufp->chgBit(oldp+3195,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_realBr_en));
        bufp->chgCData(oldp+3196,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+3197,(vlSelf->mycpu_top__DOT__core__DOT___WritebackTop_1_io_rob_bits_isWrite));
        bufp->chgBit(oldp+3198,((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_func_type))));
        bufp->chgIData(oldp+3199,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_pc),32);
        bufp->chgBit(oldp+3200,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_2));
        bufp->chgCData(oldp+3201,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_robId),5);
        bufp->chgBit(oldp+3202,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_iswf));
        bufp->chgCData(oldp+3203,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3204,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_opreg),6);
        bufp->chgBit(oldp+3205,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_realBr_en));
        bufp->chgCData(oldp+3206,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+3207,(vlSelf->mycpu_top__DOT__core__DOT___WritebackTop_2_io_rob_bits_isWrite));
        bufp->chgBit(oldp+3208,((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_func_type))));
        bufp->chgIData(oldp+3209,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_pc),32);
        bufp->chgBit(oldp+3210,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_2));
        bufp->chgCData(oldp+3211,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_robId),5);
        bufp->chgBit(oldp+3212,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_iswf));
        bufp->chgCData(oldp+3213,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3214,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_opreg),6);
        bufp->chgBit(oldp+3215,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_realBr_en));
        bufp->chgCData(oldp+3216,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_exc_type),7);
        bufp->chgBit(oldp+3217,(vlSelf->mycpu_top__DOT__core__DOT___WritebackTop_3_io_rob_bits_isWrite));
        bufp->chgBit(oldp+3218,((7U == (IData)(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_func_type))));
        bufp->chgIData(oldp+3219,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_pc),32);
        bufp->chgBit(oldp+3220,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushStall)) 
                                 & ((0U != (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__maxPush)) 
                                    | (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__empty)))));
        bufp->chgBit(oldp+3221,(((~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushStall)) 
                                 & (IData)(((0U != 
                                             (0x1eU 
                                              & (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__maxPush))) 
                                            | (IData)(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__empty))))));
        bufp->chgBit(oldp+3222,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_done));
        bufp->chgBit(oldp+3223,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_wen));
        bufp->chgCData(oldp+3224,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_areg),5);
        bufp->chgCData(oldp+3225,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_preg),6);
        bufp->chgCData(oldp+3226,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_opreg),6);
        bufp->chgIData(oldp+3227,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_wdata),32);
        bufp->chgBit(oldp+3228,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_br_en));
        bufp->chgCData(oldp+3229,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_exc_type),7);
        bufp->chgBit(oldp+3230,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_isWrite));
        bufp->chgBit(oldp+3231,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_isPrivilege));
        bufp->chgIData(oldp+3232,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_0_debug_pc),32);
        bufp->chgBit(oldp+3233,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_done));
        bufp->chgBit(oldp+3234,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_wen));
        bufp->chgCData(oldp+3235,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_areg),5);
        bufp->chgCData(oldp+3236,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_preg),6);
        bufp->chgCData(oldp+3237,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_opreg),6);
        bufp->chgIData(oldp+3238,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_wdata),32);
        bufp->chgBit(oldp+3239,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_br_en));
        bufp->chgCData(oldp+3240,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_exc_type),7);
        bufp->chgBit(oldp+3241,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_isWrite));
        bufp->chgBit(oldp+3242,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_isPrivilege));
        bufp->chgIData(oldp+3243,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_1_debug_pc),32);
        bufp->chgBit(oldp+3244,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_done));
        bufp->chgBit(oldp+3245,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_wen));
        bufp->chgCData(oldp+3246,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_areg),5);
        bufp->chgCData(oldp+3247,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_preg),6);
        bufp->chgCData(oldp+3248,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_opreg),6);
        bufp->chgIData(oldp+3249,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_wdata),32);
        bufp->chgBit(oldp+3250,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_br_en));
        bufp->chgCData(oldp+3251,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_exc_type),7);
        bufp->chgBit(oldp+3252,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_isWrite));
        bufp->chgBit(oldp+3253,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_isPrivilege));
        bufp->chgIData(oldp+3254,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_2_debug_pc),32);
        bufp->chgBit(oldp+3255,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_done));
        bufp->chgBit(oldp+3256,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_wen));
        bufp->chgCData(oldp+3257,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_areg),5);
        bufp->chgCData(oldp+3258,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_preg),6);
        bufp->chgCData(oldp+3259,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_opreg),6);
        bufp->chgIData(oldp+3260,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_wdata),32);
        bufp->chgBit(oldp+3261,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_br_en));
        bufp->chgCData(oldp+3262,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_exc_type),7);
        bufp->chgBit(oldp+3263,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_isWrite));
        bufp->chgBit(oldp+3264,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_isPrivilege));
        bufp->chgIData(oldp+3265,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_3_debug_pc),32);
        bufp->chgBit(oldp+3266,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_done));
        bufp->chgBit(oldp+3267,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_wen));
        bufp->chgCData(oldp+3268,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_areg),5);
        bufp->chgCData(oldp+3269,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_preg),6);
        bufp->chgCData(oldp+3270,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_opreg),6);
        bufp->chgIData(oldp+3271,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_wdata),32);
        bufp->chgBit(oldp+3272,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_br_en));
        bufp->chgCData(oldp+3273,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_exc_type),7);
        bufp->chgBit(oldp+3274,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_isWrite));
        bufp->chgBit(oldp+3275,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_isPrivilege));
        bufp->chgIData(oldp+3276,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_4_debug_pc),32);
        bufp->chgBit(oldp+3277,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_done));
        bufp->chgBit(oldp+3278,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_wen));
        bufp->chgCData(oldp+3279,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_areg),5);
        bufp->chgCData(oldp+3280,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_preg),6);
        bufp->chgCData(oldp+3281,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_opreg),6);
        bufp->chgIData(oldp+3282,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_wdata),32);
        bufp->chgBit(oldp+3283,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_br_en));
        bufp->chgCData(oldp+3284,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_exc_type),7);
        bufp->chgBit(oldp+3285,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_isWrite));
        bufp->chgBit(oldp+3286,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_isPrivilege));
        bufp->chgIData(oldp+3287,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_5_debug_pc),32);
        bufp->chgBit(oldp+3288,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_done));
        bufp->chgBit(oldp+3289,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_wen));
        bufp->chgCData(oldp+3290,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_areg),5);
        bufp->chgCData(oldp+3291,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_preg),6);
        bufp->chgCData(oldp+3292,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_opreg),6);
        bufp->chgIData(oldp+3293,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_wdata),32);
        bufp->chgBit(oldp+3294,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_br_en));
        bufp->chgCData(oldp+3295,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_exc_type),7);
        bufp->chgBit(oldp+3296,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_isWrite));
        bufp->chgBit(oldp+3297,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_isPrivilege));
        bufp->chgIData(oldp+3298,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_6_debug_pc),32);
        bufp->chgBit(oldp+3299,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_done));
        bufp->chgBit(oldp+3300,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_wen));
        bufp->chgCData(oldp+3301,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_areg),5);
        bufp->chgCData(oldp+3302,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_preg),6);
        bufp->chgCData(oldp+3303,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_opreg),6);
        bufp->chgIData(oldp+3304,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_wdata),32);
        bufp->chgBit(oldp+3305,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_br_en));
        bufp->chgCData(oldp+3306,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_exc_type),7);
        bufp->chgBit(oldp+3307,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_isWrite));
        bufp->chgBit(oldp+3308,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_isPrivilege));
        bufp->chgIData(oldp+3309,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_7_debug_pc),32);
        bufp->chgBit(oldp+3310,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_done));
        bufp->chgBit(oldp+3311,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_wen));
        bufp->chgCData(oldp+3312,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_areg),5);
        bufp->chgCData(oldp+3313,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_preg),6);
        bufp->chgCData(oldp+3314,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_opreg),6);
        bufp->chgIData(oldp+3315,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_wdata),32);
        bufp->chgBit(oldp+3316,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_br_en));
        bufp->chgCData(oldp+3317,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_exc_type),7);
        bufp->chgBit(oldp+3318,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_isWrite));
        bufp->chgBit(oldp+3319,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_isPrivilege));
        bufp->chgIData(oldp+3320,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_8_debug_pc),32);
        bufp->chgBit(oldp+3321,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_done));
        bufp->chgBit(oldp+3322,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_wen));
        bufp->chgCData(oldp+3323,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_areg),5);
        bufp->chgCData(oldp+3324,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_preg),6);
        bufp->chgCData(oldp+3325,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_opreg),6);
        bufp->chgIData(oldp+3326,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_wdata),32);
        bufp->chgBit(oldp+3327,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_br_en));
        bufp->chgCData(oldp+3328,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_exc_type),7);
        bufp->chgBit(oldp+3329,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_isWrite));
        bufp->chgBit(oldp+3330,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_isPrivilege));
        bufp->chgIData(oldp+3331,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_9_debug_pc),32);
        bufp->chgBit(oldp+3332,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_done));
        bufp->chgBit(oldp+3333,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_wen));
        bufp->chgCData(oldp+3334,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_areg),5);
        bufp->chgCData(oldp+3335,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_preg),6);
        bufp->chgCData(oldp+3336,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_opreg),6);
        bufp->chgIData(oldp+3337,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_wdata),32);
        bufp->chgBit(oldp+3338,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_br_en));
        bufp->chgCData(oldp+3339,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_exc_type),7);
        bufp->chgBit(oldp+3340,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_isWrite));
        bufp->chgBit(oldp+3341,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_isPrivilege));
        bufp->chgIData(oldp+3342,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_10_debug_pc),32);
        bufp->chgBit(oldp+3343,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_done));
        bufp->chgBit(oldp+3344,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_wen));
        bufp->chgCData(oldp+3345,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_areg),5);
        bufp->chgCData(oldp+3346,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_preg),6);
        bufp->chgCData(oldp+3347,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_opreg),6);
        bufp->chgIData(oldp+3348,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_wdata),32);
        bufp->chgBit(oldp+3349,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_br_en));
        bufp->chgCData(oldp+3350,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_exc_type),7);
        bufp->chgBit(oldp+3351,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_isWrite));
        bufp->chgBit(oldp+3352,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_isPrivilege));
        bufp->chgIData(oldp+3353,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_11_debug_pc),32);
        bufp->chgBit(oldp+3354,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_done));
        bufp->chgBit(oldp+3355,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_wen));
        bufp->chgCData(oldp+3356,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_areg),5);
        bufp->chgCData(oldp+3357,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_preg),6);
        bufp->chgCData(oldp+3358,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_opreg),6);
        bufp->chgIData(oldp+3359,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_wdata),32);
        bufp->chgBit(oldp+3360,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_br_en));
        bufp->chgCData(oldp+3361,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_exc_type),7);
        bufp->chgBit(oldp+3362,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_isWrite));
        bufp->chgBit(oldp+3363,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_isPrivilege));
        bufp->chgIData(oldp+3364,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_12_debug_pc),32);
        bufp->chgBit(oldp+3365,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_done));
        bufp->chgBit(oldp+3366,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_wen));
        bufp->chgCData(oldp+3367,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_areg),5);
        bufp->chgCData(oldp+3368,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_preg),6);
        bufp->chgCData(oldp+3369,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_opreg),6);
        bufp->chgIData(oldp+3370,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_wdata),32);
        bufp->chgBit(oldp+3371,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_br_en));
        bufp->chgCData(oldp+3372,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_exc_type),7);
        bufp->chgBit(oldp+3373,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_isWrite));
        bufp->chgBit(oldp+3374,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_isPrivilege));
        bufp->chgIData(oldp+3375,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_13_debug_pc),32);
        bufp->chgBit(oldp+3376,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_done));
        bufp->chgBit(oldp+3377,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_wen));
        bufp->chgCData(oldp+3378,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_areg),5);
        bufp->chgCData(oldp+3379,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_preg),6);
        bufp->chgCData(oldp+3380,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_opreg),6);
        bufp->chgIData(oldp+3381,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_wdata),32);
        bufp->chgBit(oldp+3382,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_br_en));
        bufp->chgCData(oldp+3383,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_exc_type),7);
        bufp->chgBit(oldp+3384,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_isWrite));
        bufp->chgBit(oldp+3385,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_isPrivilege));
        bufp->chgIData(oldp+3386,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_14_debug_pc),32);
        bufp->chgBit(oldp+3387,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_done));
        bufp->chgBit(oldp+3388,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_wen));
        bufp->chgCData(oldp+3389,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_areg),5);
        bufp->chgCData(oldp+3390,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_preg),6);
        bufp->chgCData(oldp+3391,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_opreg),6);
        bufp->chgIData(oldp+3392,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_wdata),32);
        bufp->chgBit(oldp+3393,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_br_en));
        bufp->chgCData(oldp+3394,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_exc_type),7);
        bufp->chgBit(oldp+3395,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_isWrite));
        bufp->chgBit(oldp+3396,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_isPrivilege));
        bufp->chgIData(oldp+3397,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_15_debug_pc),32);
        bufp->chgBit(oldp+3398,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_done));
        bufp->chgBit(oldp+3399,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_wen));
        bufp->chgCData(oldp+3400,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_areg),5);
        bufp->chgCData(oldp+3401,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_preg),6);
        bufp->chgCData(oldp+3402,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_opreg),6);
        bufp->chgIData(oldp+3403,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_wdata),32);
        bufp->chgBit(oldp+3404,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_br_en));
        bufp->chgCData(oldp+3405,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_exc_type),7);
        bufp->chgBit(oldp+3406,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_isWrite));
        bufp->chgBit(oldp+3407,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_isPrivilege));
        bufp->chgIData(oldp+3408,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_16_debug_pc),32);
        bufp->chgBit(oldp+3409,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_done));
        bufp->chgBit(oldp+3410,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_wen));
        bufp->chgCData(oldp+3411,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_areg),5);
        bufp->chgCData(oldp+3412,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_preg),6);
        bufp->chgCData(oldp+3413,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_opreg),6);
        bufp->chgIData(oldp+3414,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_wdata),32);
        bufp->chgBit(oldp+3415,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_br_en));
        bufp->chgCData(oldp+3416,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_exc_type),7);
        bufp->chgBit(oldp+3417,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_isWrite));
        bufp->chgBit(oldp+3418,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_isPrivilege));
        bufp->chgIData(oldp+3419,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_17_debug_pc),32);
        bufp->chgBit(oldp+3420,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_done));
        bufp->chgBit(oldp+3421,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_wen));
        bufp->chgCData(oldp+3422,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_areg),5);
        bufp->chgCData(oldp+3423,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_preg),6);
        bufp->chgCData(oldp+3424,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_opreg),6);
        bufp->chgIData(oldp+3425,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_wdata),32);
        bufp->chgBit(oldp+3426,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_br_en));
        bufp->chgCData(oldp+3427,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_exc_type),7);
        bufp->chgBit(oldp+3428,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_isWrite));
        bufp->chgBit(oldp+3429,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_isPrivilege));
        bufp->chgIData(oldp+3430,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_18_debug_pc),32);
        bufp->chgBit(oldp+3431,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_done));
        bufp->chgBit(oldp+3432,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_wen));
        bufp->chgCData(oldp+3433,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_areg),5);
        bufp->chgCData(oldp+3434,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_preg),6);
        bufp->chgCData(oldp+3435,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_opreg),6);
        bufp->chgIData(oldp+3436,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_wdata),32);
        bufp->chgBit(oldp+3437,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_br_en));
        bufp->chgCData(oldp+3438,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_exc_type),7);
        bufp->chgBit(oldp+3439,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_isWrite));
        bufp->chgBit(oldp+3440,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_isPrivilege));
        bufp->chgIData(oldp+3441,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_19_debug_pc),32);
        bufp->chgBit(oldp+3442,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_done));
        bufp->chgBit(oldp+3443,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_wen));
        bufp->chgCData(oldp+3444,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_areg),5);
        bufp->chgCData(oldp+3445,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_preg),6);
        bufp->chgCData(oldp+3446,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_opreg),6);
        bufp->chgIData(oldp+3447,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_wdata),32);
        bufp->chgBit(oldp+3448,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_br_en));
        bufp->chgCData(oldp+3449,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_exc_type),7);
        bufp->chgBit(oldp+3450,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_isWrite));
        bufp->chgBit(oldp+3451,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_isPrivilege));
        bufp->chgIData(oldp+3452,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_20_debug_pc),32);
        bufp->chgBit(oldp+3453,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_done));
        bufp->chgBit(oldp+3454,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_wen));
        bufp->chgCData(oldp+3455,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_areg),5);
        bufp->chgCData(oldp+3456,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_preg),6);
        bufp->chgCData(oldp+3457,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_opreg),6);
        bufp->chgIData(oldp+3458,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_wdata),32);
        bufp->chgBit(oldp+3459,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_br_en));
        bufp->chgCData(oldp+3460,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_exc_type),7);
        bufp->chgBit(oldp+3461,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_isWrite));
        bufp->chgBit(oldp+3462,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_isPrivilege));
        bufp->chgIData(oldp+3463,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_21_debug_pc),32);
        bufp->chgBit(oldp+3464,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_done));
        bufp->chgBit(oldp+3465,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_wen));
        bufp->chgCData(oldp+3466,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_areg),5);
        bufp->chgCData(oldp+3467,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_preg),6);
        bufp->chgCData(oldp+3468,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_opreg),6);
        bufp->chgIData(oldp+3469,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_wdata),32);
        bufp->chgBit(oldp+3470,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_br_en));
        bufp->chgCData(oldp+3471,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_exc_type),7);
        bufp->chgBit(oldp+3472,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_isWrite));
        bufp->chgBit(oldp+3473,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_isPrivilege));
        bufp->chgIData(oldp+3474,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_22_debug_pc),32);
        bufp->chgBit(oldp+3475,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_done));
        bufp->chgBit(oldp+3476,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_wen));
        bufp->chgCData(oldp+3477,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_areg),5);
        bufp->chgCData(oldp+3478,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_preg),6);
        bufp->chgCData(oldp+3479,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_opreg),6);
        bufp->chgIData(oldp+3480,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_wdata),32);
        bufp->chgBit(oldp+3481,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_br_en));
        bufp->chgCData(oldp+3482,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_exc_type),7);
        bufp->chgBit(oldp+3483,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_isWrite));
        bufp->chgBit(oldp+3484,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_isPrivilege));
        bufp->chgIData(oldp+3485,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_23_debug_pc),32);
        bufp->chgBit(oldp+3486,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_done));
        bufp->chgBit(oldp+3487,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_wen));
        bufp->chgCData(oldp+3488,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_areg),5);
        bufp->chgCData(oldp+3489,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_preg),6);
        bufp->chgCData(oldp+3490,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_opreg),6);
        bufp->chgIData(oldp+3491,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_wdata),32);
        bufp->chgBit(oldp+3492,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_br_en));
        bufp->chgCData(oldp+3493,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_exc_type),7);
        bufp->chgBit(oldp+3494,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_isWrite));
        bufp->chgBit(oldp+3495,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_isPrivilege));
        bufp->chgIData(oldp+3496,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_24_debug_pc),32);
        bufp->chgBit(oldp+3497,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_done));
        bufp->chgBit(oldp+3498,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_wen));
        bufp->chgCData(oldp+3499,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_areg),5);
        bufp->chgCData(oldp+3500,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_preg),6);
        bufp->chgCData(oldp+3501,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_opreg),6);
        bufp->chgIData(oldp+3502,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_wdata),32);
        bufp->chgBit(oldp+3503,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_br_en));
        bufp->chgCData(oldp+3504,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_exc_type),7);
        bufp->chgBit(oldp+3505,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_isWrite));
        bufp->chgBit(oldp+3506,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_isPrivilege));
        bufp->chgIData(oldp+3507,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_25_debug_pc),32);
        bufp->chgBit(oldp+3508,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_done));
        bufp->chgBit(oldp+3509,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_wen));
        bufp->chgCData(oldp+3510,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_areg),5);
        bufp->chgCData(oldp+3511,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_preg),6);
        bufp->chgCData(oldp+3512,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_opreg),6);
        bufp->chgIData(oldp+3513,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_wdata),32);
        bufp->chgBit(oldp+3514,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_br_en));
        bufp->chgCData(oldp+3515,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_exc_type),7);
        bufp->chgBit(oldp+3516,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_isWrite));
        bufp->chgBit(oldp+3517,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_isPrivilege));
        bufp->chgIData(oldp+3518,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_26_debug_pc),32);
        bufp->chgBit(oldp+3519,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_done));
        bufp->chgBit(oldp+3520,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_wen));
        bufp->chgCData(oldp+3521,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_areg),5);
        bufp->chgCData(oldp+3522,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_preg),6);
        bufp->chgCData(oldp+3523,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_opreg),6);
        bufp->chgIData(oldp+3524,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_wdata),32);
        bufp->chgBit(oldp+3525,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_br_en));
        bufp->chgCData(oldp+3526,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_exc_type),7);
        bufp->chgBit(oldp+3527,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_isWrite));
        bufp->chgBit(oldp+3528,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_isPrivilege));
        bufp->chgIData(oldp+3529,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_27_debug_pc),32);
        bufp->chgBit(oldp+3530,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_done));
        bufp->chgBit(oldp+3531,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_wen));
        bufp->chgCData(oldp+3532,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_areg),5);
        bufp->chgCData(oldp+3533,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_preg),6);
        bufp->chgCData(oldp+3534,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_opreg),6);
        bufp->chgIData(oldp+3535,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_wdata),32);
        bufp->chgBit(oldp+3536,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_br_en));
        bufp->chgCData(oldp+3537,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_exc_type),7);
        bufp->chgBit(oldp+3538,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_isWrite));
        bufp->chgBit(oldp+3539,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_isPrivilege));
        bufp->chgIData(oldp+3540,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_28_debug_pc),32);
        bufp->chgBit(oldp+3541,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_done));
        bufp->chgBit(oldp+3542,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_wen));
        bufp->chgCData(oldp+3543,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_areg),5);
        bufp->chgCData(oldp+3544,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_preg),6);
        bufp->chgCData(oldp+3545,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_opreg),6);
        bufp->chgIData(oldp+3546,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_wdata),32);
        bufp->chgBit(oldp+3547,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_br_en));
        bufp->chgCData(oldp+3548,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_exc_type),7);
        bufp->chgBit(oldp+3549,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_isWrite));
        bufp->chgBit(oldp+3550,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_isPrivilege));
        bufp->chgIData(oldp+3551,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_29_debug_pc),32);
        bufp->chgBit(oldp+3552,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_done));
        bufp->chgBit(oldp+3553,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_wen));
        bufp->chgCData(oldp+3554,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_areg),5);
        bufp->chgCData(oldp+3555,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_preg),6);
        bufp->chgCData(oldp+3556,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_opreg),6);
        bufp->chgIData(oldp+3557,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_wdata),32);
        bufp->chgBit(oldp+3558,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_br_en));
        bufp->chgCData(oldp+3559,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_exc_type),7);
        bufp->chgBit(oldp+3560,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_isWrite));
        bufp->chgBit(oldp+3561,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_isPrivilege));
        bufp->chgIData(oldp+3562,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_30_debug_pc),32);
        bufp->chgBit(oldp+3563,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_done));
        bufp->chgBit(oldp+3564,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_wen));
        bufp->chgCData(oldp+3565,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_areg),5);
        bufp->chgCData(oldp+3566,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_preg),6);
        bufp->chgCData(oldp+3567,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_opreg),6);
        bufp->chgIData(oldp+3568,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_wdata),32);
        bufp->chgBit(oldp+3569,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_br_en));
        bufp->chgCData(oldp+3570,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_exc_type),7);
        bufp->chgBit(oldp+3571,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_isWrite));
        bufp->chgBit(oldp+3572,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_isPrivilege));
        bufp->chgIData(oldp+3573,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__mem_31_debug_pc),32);
        bufp->chgCData(oldp+3574,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__popPtr),5);
        bufp->chgBit(oldp+3575,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__maybeFull));
        bufp->chgBit(oldp+3576,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__full));
        bufp->chgBit(oldp+3577,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__empty));
        bufp->chgCData(oldp+3578,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__maxPush),5);
        bufp->chgCData(oldp+3579,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__maxPop),5);
        bufp->chgCData(oldp+3580,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushOffset),2);
        bufp->chgCData(oldp+3581,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__popOffset),2);
        bufp->chgBit(oldp+3582,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__pushStall));
        bufp->chgBit(oldp+3583,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__popStall));
        bufp->chgCData(oldp+3584,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__realPushOffset),2);
        bufp->chgCData(oldp+3585,(vlSelf->mycpu_top__DOT__core__DOT__Rob__DOT__MultiPortFifo__DOT__realPopOffset),2);
        bufp->chgBit(oldp+3586,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_1_valid));
        bufp->chgIData(oldp+3587,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_1_requestInfo_addr),32);
        bufp->chgIData(oldp+3588,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_1_requestInfo_wdata),32);
        bufp->chgBit(oldp+3589,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_2_valid));
        bufp->chgIData(oldp+3590,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_2_requestInfo_addr),32);
        bufp->chgIData(oldp+3591,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_2_requestInfo_wdata),32);
        bufp->chgBit(oldp+3592,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_3_valid));
        bufp->chgIData(oldp+3593,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_3_requestInfo_addr),32);
        bufp->chgIData(oldp+3594,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__mem_3_requestInfo_wdata),32);
        bufp->chgCData(oldp+3595,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__topPtr),2);
        bufp->chgBit(oldp+3596,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__maybeFull));
        bufp->chgBit(oldp+3597,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__full));
        bufp->chgBit(oldp+3598,(vlSelf->mycpu_top__DOT__core__DOT__StoreBuffer__DOT__empty));
        bufp->chgBit(oldp+3599,(vlSelf->mycpu_top__DOT__core__DOT__TLB_1__DOT__io_stage1_cached_r_1));
        bufp->chgCData(oldp+3600,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+3601,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop__DOT__raw_1_op_type),5);
        bufp->chgCData(oldp+3602,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+3603,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_1__DOT__raw_1_op_type),5);
        bufp->chgCData(oldp+3604,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+3605,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_2__DOT__raw_1_op_type),5);
        bufp->chgCData(oldp+3606,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_func_type),4);
        bufp->chgCData(oldp+3607,(vlSelf->mycpu_top__DOT__core__DOT__WritebackTop_3__DOT__raw_1_op_type),5);
        bufp->chgIData(oldp+3608,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_pc),32);
        bufp->chgIData(oldp+3609,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_inst),32);
        bufp->chgCData(oldp+3610,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_func_type),4);
        bufp->chgCData(oldp+3611,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_op_type),5);
        bufp->chgIData(oldp+3612,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_imm),32);
        bufp->chgBit(oldp+3613,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src1Ispc));
        bufp->chgBit(oldp+3614,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src1IsZero));
        bufp->chgBit(oldp+3615,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src2IsFour));
        bufp->chgBit(oldp+3616,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_src2IsImm));
        bufp->chgBit(oldp+3617,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_iswf));
        bufp->chgCData(oldp+3618,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_opreg),6);
        bufp->chgCData(oldp+3619,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rjInfo_preg),6);
        bufp->chgCData(oldp+3620,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rkInfo_preg),6);
        bufp->chgCData(oldp+3621,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rdInfo_areg),5);
        bufp->chgCData(oldp+3622,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_rdInfo_preg),6);
        bufp->chgCData(oldp+3623,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_robId),5);
        bufp->chgCData(oldp+3624,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_exc_type),7);
        bufp->chgBit(oldp+3625,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_predict_en));
        bufp->chgIData(oldp+3626,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_predict_tar),32);
        bufp->chgBit(oldp+3627,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_0_realBr_en));
        bufp->chgIData(oldp+3628,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_pc),32);
        bufp->chgIData(oldp+3629,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_inst),32);
        bufp->chgCData(oldp+3630,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_func_type),4);
        bufp->chgCData(oldp+3631,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_op_type),5);
        bufp->chgIData(oldp+3632,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_imm),32);
        bufp->chgBit(oldp+3633,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src1Ispc));
        bufp->chgBit(oldp+3634,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src1IsZero));
        bufp->chgBit(oldp+3635,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src2IsFour));
        bufp->chgBit(oldp+3636,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_src2IsImm));
        bufp->chgBit(oldp+3637,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_iswf));
        bufp->chgCData(oldp+3638,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_opreg),6);
        bufp->chgCData(oldp+3639,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rjInfo_preg),6);
        bufp->chgCData(oldp+3640,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rkInfo_preg),6);
        bufp->chgCData(oldp+3641,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3642,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_rdInfo_preg),6);
        bufp->chgCData(oldp+3643,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_robId),5);
        bufp->chgCData(oldp+3644,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_exc_type),7);
        bufp->chgBit(oldp+3645,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_predict_en));
        bufp->chgIData(oldp+3646,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_predict_tar),32);
        bufp->chgBit(oldp+3647,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_1_realBr_en));
        bufp->chgIData(oldp+3648,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_pc),32);
        bufp->chgIData(oldp+3649,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_inst),32);
        bufp->chgCData(oldp+3650,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_func_type),4);
        bufp->chgCData(oldp+3651,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_op_type),5);
        bufp->chgIData(oldp+3652,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_imm),32);
        bufp->chgBit(oldp+3653,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src1Ispc));
        bufp->chgBit(oldp+3654,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src1IsZero));
        bufp->chgBit(oldp+3655,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src2IsFour));
        bufp->chgBit(oldp+3656,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_src2IsImm));
        bufp->chgBit(oldp+3657,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_iswf));
        bufp->chgCData(oldp+3658,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_opreg),6);
        bufp->chgCData(oldp+3659,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rjInfo_preg),6);
        bufp->chgCData(oldp+3660,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rkInfo_preg),6);
        bufp->chgCData(oldp+3661,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rdInfo_areg),5);
        bufp->chgCData(oldp+3662,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_rdInfo_preg),6);
        bufp->chgCData(oldp+3663,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_robId),5);
        bufp->chgCData(oldp+3664,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_exc_type),7);
        bufp->chgBit(oldp+3665,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_predict_en));
        bufp->chgIData(oldp+3666,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_predict_tar),32);
        bufp->chgBit(oldp+3667,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_2_realBr_en));
        bufp->chgIData(oldp+3668,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_pc),32);
        bufp->chgIData(oldp+3669,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_inst),32);
        bufp->chgCData(oldp+3670,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_func_type),4);
        bufp->chgCData(oldp+3671,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_op_type),5);
        bufp->chgIData(oldp+3672,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_imm),32);
        bufp->chgBit(oldp+3673,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src1Ispc));
        bufp->chgBit(oldp+3674,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src1IsZero));
        bufp->chgBit(oldp+3675,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src2IsFour));
        bufp->chgBit(oldp+3676,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_src2IsImm));
        bufp->chgBit(oldp+3677,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_iswf));
        bufp->chgCData(oldp+3678,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_opreg),6);
        bufp->chgCData(oldp+3679,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg),6);
        bufp->chgCData(oldp+3680,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg),6);
        bufp->chgCData(oldp+3681,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rdInfo_areg),5);
        bufp->chgCData(oldp+3682,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rdInfo_preg),6);
        bufp->chgCData(oldp+3683,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_robId),5);
        bufp->chgCData(oldp+3684,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_exc_type),7);
        bufp->chgBit(oldp+3685,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_predict_en));
        bufp->chgIData(oldp+3686,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_predict_tar),32);
        bufp->chgBit(oldp+3687,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_realBr_en));
        bufp->chgCData(oldp+3688,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__topPtr),2);
        bufp->chgBit(oldp+3689,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__maybeFull));
        bufp->chgBit(oldp+3690,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__full));
        bufp->chgBit(oldp+3691,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp));
        bufp->chgBit(oldp+3692,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_0));
        bufp->chgBit(oldp+3693,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__hitVec_0));
        bufp->chgBit(oldp+3694,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_1));
        bufp->chgBit(oldp+3695,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_2));
        bufp->chgBit(oldp+3696,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__hitVec_1));
        bufp->chgBit(oldp+3697,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_3));
        bufp->chgBit(oldp+3698,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_4));
        bufp->chgBit(oldp+3699,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__hitVec_2));
        bufp->chgBit(oldp+3700,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_5));
        bufp->chgBit(oldp+3701,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_6));
        bufp->chgBit(oldp+3702,((1U & ((((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg))) 
                                        | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg))) 
                                           | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg))) 
                                              | ((~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_5)) 
                                                 | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rjInfo_preg))))))) 
                                       & (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                           & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                              == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg))) 
                                          | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                              & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                 == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg))) 
                                             | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg))) 
                                                | ((~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__casez_tmp_6)) 
                                                   | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                         == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__mem_3_rkInfo_preg)))))))))));
        bufp->chgCData(oldp+3703,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__index),2);
        bufp->chgBit(oldp+3704,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__shiftVec_1));
        bufp->chgBit(oldp+3705,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__shiftVec_2));
        bufp->chgBit(oldp+3706,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue.__PVT__shiftVec_3));
        bufp->chgIData(oldp+3707,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_pc),32);
        bufp->chgIData(oldp+3708,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_inst),32);
        bufp->chgCData(oldp+3709,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_func_type),4);
        bufp->chgCData(oldp+3710,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_op_type),5);
        bufp->chgIData(oldp+3711,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_imm),32);
        bufp->chgBit(oldp+3712,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src1Ispc));
        bufp->chgBit(oldp+3713,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src1IsZero));
        bufp->chgBit(oldp+3714,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src2IsFour));
        bufp->chgBit(oldp+3715,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_src2IsImm));
        bufp->chgBit(oldp+3716,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_iswf));
        bufp->chgCData(oldp+3717,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_opreg),6);
        bufp->chgCData(oldp+3718,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rjInfo_preg),6);
        bufp->chgCData(oldp+3719,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rkInfo_preg),6);
        bufp->chgCData(oldp+3720,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rdInfo_areg),5);
        bufp->chgCData(oldp+3721,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_rdInfo_preg),6);
        bufp->chgCData(oldp+3722,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_robId),5);
        bufp->chgCData(oldp+3723,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_exc_type),7);
        bufp->chgBit(oldp+3724,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_predict_en));
        bufp->chgIData(oldp+3725,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_predict_tar),32);
        bufp->chgBit(oldp+3726,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_0_realBr_en));
        bufp->chgIData(oldp+3727,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_pc),32);
        bufp->chgIData(oldp+3728,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_inst),32);
        bufp->chgCData(oldp+3729,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_func_type),4);
        bufp->chgCData(oldp+3730,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_op_type),5);
        bufp->chgIData(oldp+3731,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_imm),32);
        bufp->chgBit(oldp+3732,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src1Ispc));
        bufp->chgBit(oldp+3733,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src1IsZero));
        bufp->chgBit(oldp+3734,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src2IsFour));
        bufp->chgBit(oldp+3735,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_src2IsImm));
        bufp->chgBit(oldp+3736,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_iswf));
        bufp->chgCData(oldp+3737,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_opreg),6);
        bufp->chgCData(oldp+3738,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rjInfo_preg),6);
        bufp->chgCData(oldp+3739,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rkInfo_preg),6);
        bufp->chgCData(oldp+3740,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rdInfo_areg),5);
        bufp->chgCData(oldp+3741,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_rdInfo_preg),6);
        bufp->chgCData(oldp+3742,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_robId),5);
        bufp->chgCData(oldp+3743,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_exc_type),7);
        bufp->chgBit(oldp+3744,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_predict_en));
        bufp->chgIData(oldp+3745,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_predict_tar),32);
        bufp->chgBit(oldp+3746,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_1_realBr_en));
        bufp->chgIData(oldp+3747,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_pc),32);
        bufp->chgIData(oldp+3748,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_inst),32);
        bufp->chgCData(oldp+3749,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_func_type),4);
        bufp->chgCData(oldp+3750,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_op_type),5);
        bufp->chgIData(oldp+3751,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_imm),32);
        bufp->chgBit(oldp+3752,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src1Ispc));
        bufp->chgBit(oldp+3753,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src1IsZero));
        bufp->chgBit(oldp+3754,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src2IsFour));
        bufp->chgBit(oldp+3755,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_src2IsImm));
        bufp->chgBit(oldp+3756,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_iswf));
        bufp->chgCData(oldp+3757,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_opreg),6);
        bufp->chgCData(oldp+3758,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rjInfo_preg),6);
        bufp->chgCData(oldp+3759,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rkInfo_preg),6);
        bufp->chgCData(oldp+3760,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rdInfo_areg),5);
        bufp->chgCData(oldp+3761,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_rdInfo_preg),6);
        bufp->chgCData(oldp+3762,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_robId),5);
        bufp->chgCData(oldp+3763,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_exc_type),7);
        bufp->chgBit(oldp+3764,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_predict_en));
        bufp->chgIData(oldp+3765,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_predict_tar),32);
        bufp->chgBit(oldp+3766,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_2_realBr_en));
        bufp->chgIData(oldp+3767,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_pc),32);
        bufp->chgIData(oldp+3768,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_inst),32);
        bufp->chgCData(oldp+3769,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_func_type),4);
        bufp->chgCData(oldp+3770,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_op_type),5);
        bufp->chgIData(oldp+3771,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_imm),32);
        bufp->chgBit(oldp+3772,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src1Ispc));
        bufp->chgBit(oldp+3773,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src1IsZero));
        bufp->chgBit(oldp+3774,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src2IsFour));
        bufp->chgBit(oldp+3775,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_src2IsImm));
        bufp->chgBit(oldp+3776,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_iswf));
        bufp->chgCData(oldp+3777,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_opreg),6);
        bufp->chgCData(oldp+3778,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg),6);
        bufp->chgCData(oldp+3779,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg),6);
        bufp->chgCData(oldp+3780,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rdInfo_areg),5);
        bufp->chgCData(oldp+3781,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rdInfo_preg),6);
        bufp->chgCData(oldp+3782,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_robId),5);
        bufp->chgCData(oldp+3783,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_exc_type),7);
        bufp->chgBit(oldp+3784,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_predict_en));
        bufp->chgIData(oldp+3785,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_predict_tar),32);
        bufp->chgBit(oldp+3786,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_realBr_en));
        bufp->chgCData(oldp+3787,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__topPtr),2);
        bufp->chgBit(oldp+3788,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__maybeFull));
        bufp->chgBit(oldp+3789,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__full));
        bufp->chgBit(oldp+3790,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp));
        bufp->chgBit(oldp+3791,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_0));
        bufp->chgBit(oldp+3792,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__hitVec_0));
        bufp->chgBit(oldp+3793,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_1));
        bufp->chgBit(oldp+3794,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_2));
        bufp->chgBit(oldp+3795,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__hitVec_1));
        bufp->chgBit(oldp+3796,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_3));
        bufp->chgBit(oldp+3797,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_4));
        bufp->chgBit(oldp+3798,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__hitVec_2));
        bufp->chgBit(oldp+3799,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_5));
        bufp->chgBit(oldp+3800,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_6));
        bufp->chgBit(oldp+3801,((1U & ((((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                         & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                            == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg))) 
                                        | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                            & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                               == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg))) 
                                           | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                               & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                  == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg))) 
                                              | ((~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_5)) 
                                                 | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                       == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rjInfo_preg))))))) 
                                       & (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_3_valid) 
                                           & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory1Top__DOT__raw_1_rdInfo_preg) 
                                              == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg))) 
                                          | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_2_valid) 
                                              & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__MuldivTop__DOT__raw_1_rdInfo_preg) 
                                                 == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg))) 
                                             | (((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_1_valid) 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop_1__DOT__raw_1_rdInfo_preg) 
                                                    == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg))) 
                                                | ((~ (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__casez_tmp_6)) 
                                                   | ((IData)(vlSelf->mycpu_top__DOT__core__DOT__IssueTop__DOT__awakeInfo_0_valid) 
                                                      & ((IData)(vlSelf->mycpu_top__DOT__core__DOT__ReadRegTop__DOT__raw_1_rdInfo_preg) 
                                                         == (IData)(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__mem_3_rkInfo_preg)))))))))));
        bufp->chgCData(oldp+3802,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__index),2);
        bufp->chgBit(oldp+3803,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__shiftVec_1));
        bufp->chgBit(oldp+3804,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__shiftVec_2));
        bufp->chgBit(oldp+3805,(vlSymsp->TOP__mycpu_top__DOT__core__DOT__IssueTop__DOT__UnorderedIssue_1.__PVT__shiftVec_3));
    }
    bufp->chgBit(oldp+3806,(vlSelf->aclk));
    bufp->chgBit(oldp+3807,(vlSelf->aresetn));
    bufp->chgCData(oldp+3808,(vlSelf->arid),4);
    bufp->chgIData(oldp+3809,(vlSelf->araddr),32);
    bufp->chgCData(oldp+3810,(vlSelf->arlen),8);
    bufp->chgCData(oldp+3811,(vlSelf->arsize),3);
    bufp->chgCData(oldp+3812,(vlSelf->arburst),2);
    bufp->chgCData(oldp+3813,(vlSelf->arlock),2);
    bufp->chgCData(oldp+3814,(vlSelf->arcache),4);
    bufp->chgCData(oldp+3815,(vlSelf->arprot),3);
    bufp->chgBit(oldp+3816,(vlSelf->arvalid));
    bufp->chgBit(oldp+3817,(vlSelf->arready));
    bufp->chgCData(oldp+3818,(vlSelf->rid),4);
    bufp->chgIData(oldp+3819,(vlSelf->rdata),32);
    bufp->chgCData(oldp+3820,(vlSelf->rresp),2);
    bufp->chgBit(oldp+3821,(vlSelf->rlast));
    bufp->chgBit(oldp+3822,(vlSelf->rvalid));
    bufp->chgBit(oldp+3823,(vlSelf->rready));
    bufp->chgCData(oldp+3824,(vlSelf->awid),4);
    bufp->chgIData(oldp+3825,(vlSelf->awaddr),32);
    bufp->chgCData(oldp+3826,(vlSelf->awlen),8);
    bufp->chgCData(oldp+3827,(vlSelf->awsize),3);
    bufp->chgCData(oldp+3828,(vlSelf->awburst),2);
    bufp->chgCData(oldp+3829,(vlSelf->awlock),2);
    bufp->chgCData(oldp+3830,(vlSelf->awcache),4);
    bufp->chgCData(oldp+3831,(vlSelf->awprot),3);
    bufp->chgBit(oldp+3832,(vlSelf->awvalid));
    bufp->chgBit(oldp+3833,(vlSelf->awready));
    bufp->chgCData(oldp+3834,(vlSelf->wid),4);
    bufp->chgIData(oldp+3835,(vlSelf->wdata),32);
    bufp->chgCData(oldp+3836,(vlSelf->wstrb),4);
    bufp->chgBit(oldp+3837,(vlSelf->wlast));
    bufp->chgBit(oldp+3838,(vlSelf->wvalid));
    bufp->chgBit(oldp+3839,(vlSelf->wready));
    bufp->chgCData(oldp+3840,(vlSelf->bid),4);
    bufp->chgCData(oldp+3841,(vlSelf->bresp),2);
    bufp->chgBit(oldp+3842,(vlSelf->bvalid));
    bufp->chgBit(oldp+3843,(vlSelf->bready));
    bufp->chgIData(oldp+3844,(vlSelf->debug_wb_pc),32);
    bufp->chgCData(oldp+3845,(vlSelf->debug_wb_rf_we),4);
    bufp->chgCData(oldp+3846,(vlSelf->debug_wb_rf_wnum),5);
    bufp->chgIData(oldp+3847,(vlSelf->debug_wb_rf_wdata),32);
    bufp->chgBit(oldp+3848,((1U & (~ (IData)(vlSelf->aresetn)))));
    bufp->chgBit(oldp+3849,(((~ (IData)(vlSelf->rid)) 
                             & (IData)(vlSelf->rvalid))));
    bufp->chgBit(oldp+3850,(((IData)(vlSelf->rvalid) 
                             & (IData)(vlSelf->rid))));
    bufp->chgCData(oldp+3851,(((4U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                ? ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                    ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_22)
                                    : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_22)
                                        : ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_17)
                                            ? 5U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))))
                                : ((2U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                    ? ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? (4U | (1U 
                                                 & (~ (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_14))))
                                        : ((IData)(vlSelf->bvalid)
                                            ? 0U : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state)))
                                    : ((1U & (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state))
                                        ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_11)
                                            ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state)
                                            : 0U) : 
                                       ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT___GEN_0)
                                         ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_cached)
                                             ? ((IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__cacheHit)
                                                 ? (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state)
                                                 : 3U)
                                             : ((8U 
                                                 & (IData)(vlSelf->mycpu_top__DOT__core__DOT__Memory2Top__DOT__raw_1_op_type))
                                                 ? 1U
                                                 : 2U))
                                         : (IData)(vlSelf->mycpu_top__DOT__core__DOT__DCache__DOT__state)))))),3);
}

void Vmycpu_top___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root__trace_cleanup\n"); );
    // Init
    Vmycpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
