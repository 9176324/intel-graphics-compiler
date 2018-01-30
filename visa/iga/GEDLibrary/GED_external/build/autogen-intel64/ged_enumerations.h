/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */


#ifndef GED_ENUMERATIONS_H
#define GED_ENUMERATIONS_H

typedef enum 
{
    GED_ACCESS_MODE_Align1,  ///< all
    GED_ACCESS_MODE_Align16, ///< all
    GED_ACCESS_MODE_INVALID
} GED_ACCESS_MODE;
typedef enum 
{
    GED_ACC_WR_CTRL_Normal,  ///< all
    GED_ACC_WR_CTRL_AccWrEn, ///< all
    GED_ACC_WR_CTRL_INVALID
} GED_ACC_WR_CTRL;
typedef enum 
{
    GED_ADDR_MODE_Direct,   ///< all
    GED_ADDR_MODE_Indirect, ///< all
    GED_ADDR_MODE_INVALID
} GED_ADDR_MODE;
typedef enum 
{
    GED_ARCH_REG_null,    ///< all
    GED_ARCH_REG_a0,      ///< all
    GED_ARCH_REG_acc,     ///< all
    GED_ARCH_REG_f,       ///< all
    GED_ARCH_REG_ce,      ///< all
    GED_ARCH_REG_msg,     ///< GEN10, GEN8, GEN8.1, GEN9
    GED_ARCH_REG_sp,      ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_ARCH_REG_sr0,     ///< all
    GED_ARCH_REG_cr0,     ///< all
    GED_ARCH_REG_n0,      ///< all
    GED_ARCH_REG_ip,      ///< all
    GED_ARCH_REG_tdr,     ///< all
    GED_ARCH_REG_tm0,     ///< all
    GED_ARCH_REG_fc,      ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_ARCH_REG_dbg0,    ///< all
    GED_ARCH_REG_INVALID
} GED_ARCH_REG;
typedef enum 
{
    GED_ATOMIC_OPERATION_TYPE_AOP_AND,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_OR,     ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_XOR,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_MOV,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_INC,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_DEC,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_ADD,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_SUB,    ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_REVSUB, ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_IMAX,   ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_IMIN,   ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_UMAX,   ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_UMIN,   ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_CMPWR,  ///< all
    GED_ATOMIC_OPERATION_TYPE_AOP_PREDEC, ///< all
    GED_ATOMIC_OPERATION_TYPE_INVALID
} GED_ATOMIC_OPERATION_TYPE;
typedef enum 
{
    GED_BLOCK_SIZE_OW1L,    ///< all
    GED_BLOCK_SIZE_OW1H,    ///< all
    GED_BLOCK_SIZE_OW2,     ///< all
    GED_BLOCK_SIZE_OW4,     ///< all
    GED_BLOCK_SIZE_OW8,     ///< all
    GED_BLOCK_SIZE_INVALID
} GED_BLOCK_SIZE;
typedef enum 
{
    GED_BRANCH_CTRL_Normal,  ///< GEN10, GEN8, GEN8.1, GEN9
    GED_BRANCH_CTRL_Branch,  ///< GEN10, GEN8, GEN8.1, GEN9
    GED_BRANCH_CTRL_INVALID
} GED_BRANCH_CTRL;
typedef enum 
{
    GED_CHANNEL_MASK_R,           ///< all
    GED_CHANNEL_MASK_NotIncluded, ///< all
    GED_CHANNEL_MASK_B,           ///< all
    GED_CHANNEL_MASK_G,           ///< all
    GED_CHANNEL_MASK_A,           ///< all
    GED_CHANNEL_MASK_INVALID
} GED_CHANNEL_MASK;
typedef enum 
{
    GED_CHANNEL_OFFSET_M0,      ///< all
    GED_CHANNEL_OFFSET_M4,      ///< all
    GED_CHANNEL_OFFSET_M8,      ///< all
    GED_CHANNEL_OFFSET_M12,     ///< all
    GED_CHANNEL_OFFSET_M16,     ///< all
    GED_CHANNEL_OFFSET_M20,     ///< all
    GED_CHANNEL_OFFSET_M24,     ///< all
    GED_CHANNEL_OFFSET_M28,     ///< all
    GED_CHANNEL_OFFSET_INVALID
} GED_CHANNEL_OFFSET;
typedef enum 
{
    GED_COND_MODIFIER_Normal,  ///< all
    GED_COND_MODIFIER_z,       ///< all
    GED_COND_MODIFIER_nz,      ///< all
    GED_COND_MODIFIER_g,       ///< all
    GED_COND_MODIFIER_ge,      ///< all
    GED_COND_MODIFIER_l,       ///< all
    GED_COND_MODIFIER_le,      ///< all
    GED_COND_MODIFIER_o,       ///< all
    GED_COND_MODIFIER_u,       ///< all
    GED_COND_MODIFIER_INVALID
} GED_COND_MODIFIER;
typedef enum 
{
    GED_DATA_TYPE_ud,      ///< all
    GED_DATA_TYPE_d,       ///< all
    GED_DATA_TYPE_uw,      ///< all
    GED_DATA_TYPE_w,       ///< all
    GED_DATA_TYPE_ub,      ///< all
    GED_DATA_TYPE_b,       ///< all
    GED_DATA_TYPE_df,      ///< all
    GED_DATA_TYPE_f,       ///< all
    GED_DATA_TYPE_uq,      ///< GEN10, GEN8, GEN8.1, GEN9
    GED_DATA_TYPE_q,       ///< GEN10, GEN8, GEN8.1, GEN9
    GED_DATA_TYPE_hf,      ///< GEN10, GEN8, GEN8.1, GEN9
    GED_DATA_TYPE_uv,      ///< all
    GED_DATA_TYPE_vf,      ///< all
    GED_DATA_TYPE_v,       ///< all
    GED_DATA_TYPE_INVALID
} GED_DATA_TYPE;
typedef enum 
{
    GED_DEBUG_CTRL_Normal,     ///< all
    GED_DEBUG_CTRL_Breakpoint, ///< all
    GED_DEBUG_CTRL_INVALID
} GED_DEBUG_CTRL;
typedef enum 
{
    GED_DEP_CTRL_Normal,          ///< all
    GED_DEP_CTRL_NoDDClr,         ///< all
    GED_DEP_CTRL_NoDDChk,         ///< all
    GED_DEP_CTRL_NoDDClr_NoDDChk, ///< all
    GED_DEP_CTRL_INVALID
} GED_DEP_CTRL;
typedef enum 
{
    GED_DST_CHAN_EN_None,    ///< all
    GED_DST_CHAN_EN_x,       ///< all
    GED_DST_CHAN_EN_y,       ///< all
    GED_DST_CHAN_EN_xy,      ///< all
    GED_DST_CHAN_EN_z,       ///< all
    GED_DST_CHAN_EN_xz,      ///< all
    GED_DST_CHAN_EN_yz,      ///< all
    GED_DST_CHAN_EN_xyz,     ///< all
    GED_DST_CHAN_EN_w,       ///< all
    GED_DST_CHAN_EN_xw,      ///< all
    GED_DST_CHAN_EN_yw,      ///< all
    GED_DST_CHAN_EN_xyw,     ///< all
    GED_DST_CHAN_EN_zw,      ///< all
    GED_DST_CHAN_EN_xzw,     ///< all
    GED_DST_CHAN_EN_yzw,     ///< all
    GED_DST_CHAN_EN_xyzw,    ///< all
    GED_DST_CHAN_EN_INVALID
} GED_DST_CHAN_EN;
typedef enum 
{
    GED_EOT_None,    ///< all
    GED_EOT_EOT,     ///< all
    GED_EOT_INVALID
} GED_EOT;
typedef enum 
{
    GED_EXEC_MASK_OFFSET_CTRL_N1,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N2,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N3,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N4,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N5,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N6,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N7,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_N8,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_Q1,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_Q2,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_Q3,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_Q4,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_H1,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_H2,      ///< all
    GED_EXEC_MASK_OFFSET_CTRL_INVALID
} GED_EXEC_MASK_OFFSET_CTRL;
typedef enum 
{
    GED_EXECUTION_DATA_TYPE_Integer, ///< GEN10
    GED_EXECUTION_DATA_TYPE_Float,   ///< GEN10
    GED_EXECUTION_DATA_TYPE_INVALID
} GED_EXECUTION_DATA_TYPE;
typedef enum 
{
    GED_HEADER_PRESENT_no,      ///< all
    GED_HEADER_PRESENT_yes,     ///< all
    GED_HEADER_PRESENT_INVALID
} GED_HEADER_PRESENT;
typedef enum 
{
    GED_MASK_CTRL_Normal,  ///< all
    GED_MASK_CTRL_NoMask,  ///< all
    GED_MASK_CTRL_INVALID
} GED_MASK_CTRL;
typedef enum 
{
    GED_MATH_FC_INV,               ///< all
    GED_MATH_FC_LOG,               ///< all
    GED_MATH_FC_EXP,               ///< all
    GED_MATH_FC_SQRT,              ///< all
    GED_MATH_FC_RSQ,               ///< all
    GED_MATH_FC_SIN,               ///< all
    GED_MATH_FC_COS,               ///< all
    GED_MATH_FC_FDIV,              ///< all
    GED_MATH_FC_POW,               ///< all
    GED_MATH_FC_INT_DIV_BOTH,      ///< all
    GED_MATH_FC_INT_DIV_QUOTIENT,  ///< all
    GED_MATH_FC_INT_DIV_REMAINDER, ///< all
    GED_MATH_FC_INVM,              ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MATH_FC_RSQRTM,            ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MATH_FC_INVALID
} GED_MATH_FC;
typedef enum 
{
    GED_MESSAGE_TYPE_MSD0R_HWB,      ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MSD0W_HWB,      ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT0R_OWB,       ///< all
    GED_MESSAGE_TYPE_MT0R_OWUB,      ///< all
    GED_MESSAGE_TYPE_MT0R_OWDB,      ///< all
    GED_MESSAGE_TYPE_MT0R_DWS,       ///< all
    GED_MESSAGE_TYPE_MT0R_BS,        ///< all
    GED_MESSAGE_TYPE_MT0_MEMFENCE,   ///< all
    GED_MESSAGE_TYPE_MT0W_OWB,       ///< all
    GED_MESSAGE_TYPE_MT0W_OWDB,      ///< all
    GED_MESSAGE_TYPE_MT0W_DWS,       ///< all
    GED_MESSAGE_TYPE_MT0W_BS,        ///< all
    GED_MESSAGE_TYPE_MT1R_T,         ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_US,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_UI,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_UI4x2,     ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_MB,        ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_TS,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_TA,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_TA4x2,     ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_US,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_MB,        ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_TC,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_TC4x2,     ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_TS,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_A64_SB,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_A64_US,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_A64_UI,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_A64_UI4x2, ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1R_A64_B,     ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_A64_B,     ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_A64_US,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1W_A64_SB,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT2R_US,        ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2R_A64_SB,    ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2R_A64_US,    ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2R_BS,        ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2W_US,        ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2W_A64_US,    ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2W_A64_SB,    ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT2W_BS,        ///< GEN10, GEN9
    GED_MESSAGE_TYPE_MT_CC_OWB,      ///< all
    GED_MESSAGE_TYPE_MT_CC_OWUB,     ///< all
    GED_MESSAGE_TYPE_MT_CC_OWDB,     ///< all
    GED_MESSAGE_TYPE_MT_CC_DWS,      ///< all
    GED_MESSAGE_TYPE_MT_SC_OWUB,     ///< all
    GED_MESSAGE_TYPE_MT_SC_MB,       ///< all
    GED_MESSAGE_TYPE_MT_RSI,         ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT_RTW,         ///< all
    GED_MESSAGE_TYPE_MT_RTR,         ///< GEN10, GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MTR_MB,         ///< GEN7, GEN7.5
    GED_MESSAGE_TYPE_MTRR_TS,        ///< GEN7
    GED_MESSAGE_TYPE_MTRA_TA,        ///< GEN7
    GED_MESSAGE_TYPE_MT_MEMFENCE,    ///< GEN7, GEN7.5
    GED_MESSAGE_TYPE_MTW_MB,         ///< GEN7, GEN7.5
    GED_MESSAGE_TYPE_MTRW_TS,        ///< GEN7
    GED_MESSAGE_TYPE_MT0R_US,        ///< GEN7
    GED_MESSAGE_TYPE_MT0A_UI,        ///< GEN7
    GED_MESSAGE_TYPE_MT0W_US,        ///< GEN7
    GED_MESSAGE_TYPE_MT1A_UF4x2,     ///< GEN8, GEN8.1, GEN9
    GED_MESSAGE_TYPE_MT1A_UF,        ///< GEN9
    GED_MESSAGE_TYPE_MT1A_A64_UF,    ///< GEN9
    GED_MESSAGE_TYPE_MT1A_A64_UF4x2, ///< GEN9
    GED_MESSAGE_TYPE_INVALID
} GED_MESSAGE_TYPE;
typedef enum 
{
    GED_NO_SRC_DEP_SET_Normal,      ///< GEN10, GEN9
    GED_NO_SRC_DEP_SET_NoSrcDepSet, ///< GEN10, GEN9
    GED_NO_SRC_DEP_SET_INVALID
} GED_NO_SRC_DEP_SET;
typedef enum 
{
    GED_OPCODE_illegal, ///< all
    GED_OPCODE_mov,     ///< all
    GED_OPCODE_sel,     ///< all
    GED_OPCODE_movi,    ///< all
    GED_OPCODE_not,     ///< all
    GED_OPCODE_and,     ///< all
    GED_OPCODE_or,      ///< all
    GED_OPCODE_xor,     ///< all
    GED_OPCODE_shr,     ///< all
    GED_OPCODE_shl,     ///< all
    GED_OPCODE_smov,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_OPCODE_asr,     ///< all
    GED_OPCODE_cmp,     ///< all
    GED_OPCODE_cmpn,    ///< all
    GED_OPCODE_csel,    ///< all
    GED_OPCODE_bfrev,   ///< all
    GED_OPCODE_bfe,     ///< all
    GED_OPCODE_bfi1,    ///< all
    GED_OPCODE_bfi2,    ///< all
    GED_OPCODE_jmpi,    ///< all
    GED_OPCODE_brd,     ///< all
    GED_OPCODE_if,      ///< all
    GED_OPCODE_brc,     ///< all
    GED_OPCODE_else,    ///< all
    GED_OPCODE_endif,   ///< all
    GED_OPCODE_while,   ///< all
    GED_OPCODE_break,   ///< all
    GED_OPCODE_cont,    ///< all
    GED_OPCODE_halt,    ///< all
    GED_OPCODE_calla,   ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_OPCODE_call,    ///< all
    GED_OPCODE_ret,     ///< all
    GED_OPCODE_goto,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_OPCODE_join,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_OPCODE_wait,    ///< all
    GED_OPCODE_send,    ///< all
    GED_OPCODE_sendc,   ///< all
    GED_OPCODE_sends,   ///< GEN10, GEN9
    GED_OPCODE_sendsc,  ///< GEN10, GEN9
    GED_OPCODE_math,    ///< all
    GED_OPCODE_add,     ///< all
    GED_OPCODE_mul,     ///< all
    GED_OPCODE_avg,     ///< all
    GED_OPCODE_frc,     ///< all
    GED_OPCODE_rndu,    ///< all
    GED_OPCODE_rndd,    ///< all
    GED_OPCODE_rnde,    ///< all
    GED_OPCODE_rndz,    ///< all
    GED_OPCODE_mac,     ///< all
    GED_OPCODE_mach,    ///< all
    GED_OPCODE_lzd,     ///< all
    GED_OPCODE_fbh,     ///< all
    GED_OPCODE_fbl,     ///< all
    GED_OPCODE_cbit,    ///< all
    GED_OPCODE_addc,    ///< all
    GED_OPCODE_subb,    ///< all
    GED_OPCODE_sad2,    ///< all
    GED_OPCODE_sada2,   ///< all
    GED_OPCODE_dp4,     ///< all
    GED_OPCODE_dph,     ///< all
    GED_OPCODE_dp3,     ///< all
    GED_OPCODE_dp2,     ///< all
    GED_OPCODE_line,    ///< all
    GED_OPCODE_pln,     ///< all
    GED_OPCODE_mad,     ///< all
    GED_OPCODE_lrp,     ///< all
    GED_OPCODE_madm,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_OPCODE_nop,     ///< all
    GED_OPCODE_f32to16, ///< GEN7, GEN7.5
    GED_OPCODE_f16to32, ///< GEN7, GEN7.5
    GED_OPCODE_dim,     ///< GEN7.5
    GED_OPCODE_INVALID
} GED_OPCODE;
typedef enum 
{
    GED_PRED_CTRL_Normal,     ///< all
    GED_PRED_CTRL_Sequential, ///< all
    GED_PRED_CTRL_anyv,       ///< all
    GED_PRED_CTRL_allv,       ///< all
    GED_PRED_CTRL_any2h,      ///< all
    GED_PRED_CTRL_all2h,      ///< all
    GED_PRED_CTRL_any4h,      ///< all
    GED_PRED_CTRL_all4h,      ///< all
    GED_PRED_CTRL_any8h,      ///< all
    GED_PRED_CTRL_all8h,      ///< all
    GED_PRED_CTRL_any16h,     ///< all
    GED_PRED_CTRL_all16h,     ///< all
    GED_PRED_CTRL_any32h,     ///< all
    GED_PRED_CTRL_all32h,     ///< all
    GED_PRED_CTRL_x,          ///< all
    GED_PRED_CTRL_y,          ///< all
    GED_PRED_CTRL_z,          ///< all
    GED_PRED_CTRL_w,          ///< all
    GED_PRED_CTRL_INVALID
} GED_PRED_CTRL;
typedef enum 
{
    GED_PRED_INV_Normal,  ///< all
    GED_PRED_INV_Invert,  ///< all
    GED_PRED_INV_INVALID
} GED_PRED_INV;
typedef enum 
{
    GED_REG_FILE_ARF,     ///< all
    GED_REG_FILE_GRF,     ///< all
    GED_REG_FILE_IMM,     ///< all
    GED_REG_FILE_INVALID
} GED_REG_FILE;
typedef enum 
{
    GED_REP_CTRL_NoRep,   ///< all
    GED_REP_CTRL_Rep,     ///< all
    GED_REP_CTRL_INVALID
} GED_REP_CTRL;
typedef enum 
{
    GED_RETURN_DATA_CONTROL_Disabled, ///< all
    GED_RETURN_DATA_CONTROL_Enabled,  ///< all
    GED_RETURN_DATA_CONTROL_INVALID
} GED_RETURN_DATA_CONTROL;
typedef enum 
{
    GED_SATURATE_Normal,  ///< all
    GED_SATURATE_sat,     ///< all
    GED_SATURATE_INVALID
} GED_SATURATE;
typedef enum 
{
    GED_SFID_NULL,       ///< all
    GED_SFID_SAMPLER,    ///< all
    GED_SFID_GATEWAY,    ///< all
    GED_SFID_DP_DC2,     ///< GEN10, GEN9
    GED_SFID_DP_RC,      ///< all
    GED_SFID_URB,        ///< all
    GED_SFID_SPAWNER,    ///< all
    GED_SFID_VME,        ///< all
    GED_SFID_DP_DCRO,    ///< GEN10, GEN9
    GED_SFID_DP_DC0,     ///< all
    GED_SFID_PI,         ///< all
    GED_SFID_DP_DC1,     ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_SFID_CRE,        ///< GEN10, GEN7.5, GEN8, GEN8.1, GEN9
    GED_SFID_DP_SAMPLER, ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SFID_DP_CC,      ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SFID_INVALID
} GED_SFID;
typedef enum 
{
    GED_SIMDMODE_SIMD4x2, ///< all
    GED_SIMDMODE_SIMD16,  ///< all
    GED_SIMDMODE_SIMD8,   ///< all
    GED_SIMDMODE_INVALID
} GED_SIMDMODE;
typedef enum 
{
    GED_SLOT_GROUP_SIMD4x2, ///< all
    GED_SLOT_GROUP_low_8,   ///< all
    GED_SLOT_GROUP_high_8,  ///< all
    GED_SLOT_GROUP_INVALID
} GED_SLOT_GROUP;
typedef enum 
{
    GED_SPECIAL_ACC_acc2,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc3,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc4,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc5,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc6,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc7,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc8,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_acc9,    ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_noacc,   ///< GEN10, GEN8, GEN8.1, GEN9
    GED_SPECIAL_ACC_INVALID
} GED_SPECIAL_ACC;
typedef enum 
{
    GED_SRC_MOD_Normal,            ///< all
    GED_SRC_MOD_Absolute,          ///< all
    GED_SRC_MOD_Negative,          ///< all
    GED_SRC_MOD_Negative_Absolute, ///< all
    GED_SRC_MOD_INVALID
} GED_SRC_MOD;
typedef enum 
{
    GED_SUB_FUNC_ID_GetTimeStamp,    ///< all
    GED_SUB_FUNC_ID_BarrierMsg,      ///< all
    GED_SUB_FUNC_ID_OpenGateway,     ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SUB_FUNC_ID_CloseGateway,    ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SUB_FUNC_ID_ForwardMsg,      ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SUB_FUNC_ID_UpdateGateState, ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SUB_FUNC_ID_MMIOReadWrite,   ///< GEN7, GEN7.5, GEN8, GEN8.1
    GED_SUB_FUNC_ID_INVALID
} GED_SUB_FUNC_ID;
typedef enum 
{
    GED_SWIZZLE_x,       ///< all
    GED_SWIZZLE_y,       ///< all
    GED_SWIZZLE_z,       ///< all
    GED_SWIZZLE_w,       ///< all
    GED_SWIZZLE_INVALID
} GED_SWIZZLE;
typedef enum 
{
    GED_THREAD_CTRL_Normal,    ///< all
    GED_THREAD_CTRL_Atomic,    ///< all
    GED_THREAD_CTRL_NoPreempt, ///< GEN10
    GED_THREAD_CTRL_Switch,    ///< all
    GED_THREAD_CTRL_INVALID
} GED_THREAD_CTRL;
#endif // GED_ENUMERATIONS_H