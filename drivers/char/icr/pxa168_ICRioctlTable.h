/*
 *  linux/drivers/icr/pxa168_ICRioctlTable.h
 *
 *  Copyright:	(C) Copyright 2009 Marvell International Ltd.
 *
 *  Author: Alan Guenther <>
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  publishhed by the Free Software Foundation.
 *
 */

#ifndef __PXA168_ICRIOCTLTABLE_H
#define __PXA168_ICRIOCTLTABLE_H

/* table to convert userspace transform register request to
    actual ICR registers address */

static u16  ICRtagTable[] = {
	ICR_ICSC_M_C0_L,
	ICR_ICSC_M_C0_H,
	ICR_ICSC_M_C1_L,
	ICR_ICSC_M_C1_H,
	ICR_ICSC_M_C2_L,
	ICR_ICSC_M_C2_H,
	ICR_ICSC_M_C3_L,
	ICR_ICSC_M_C3_H,
	ICR_ICSC_M_C4_L,
	ICR_ICSC_M_C4_H,
	ICR_ICSC_M_C5_L,
	ICR_ICSC_M_C5_H,
	ICR_ICSC_M_C6_L,
	ICR_ICSC_M_C6_H,
	ICR_ICSC_M_C7_L,
	ICR_ICSC_M_C7_H,
	ICR_ICSC_M_C8_L,
	ICR_ICSC_M_C8_H,
	ICR_ICSC_M_O1_0,
	ICR_ICSC_M_O1_1,
	ICR_ICSC_M_O1_2,
	ICR_ICSC_M_O2_0,
	ICR_ICSC_M_O2_1,
	ICR_ICSC_M_O2_2,
	ICR_ICSC_M_O3_0,
	ICR_ICSC_M_O3_1,
	ICR_ICSC_M_O3_2,
	ICR_ICSC_P_C0_L,
	ICR_ICSC_P_C0_H,
	ICR_ICSC_P_C1_L,
	ICR_ICSC_P_C1_H,
	ICR_ICSC_P_C2_L,
	ICR_ICSC_P_C2_H,
	ICR_ICSC_P_C3_L,
	ICR_ICSC_P_C3_H,
	ICR_ICSC_P_C4_L,
	ICR_ICSC_P_C4_H,
	ICR_ICSC_P_C5_L,
	ICR_ICSC_P_C5_H,
	ICR_ICSC_P_C6_L,
	ICR_ICSC_P_C6_H,
	ICR_ICSC_P_C7_L,
	ICR_ICSC_P_C7_H,
	ICR_ICSC_P_C8_L,
	ICR_ICSC_P_C8_H,
	ICR_ICSC_P_O1_0,
	ICR_ICSC_P_O1_1,
	ICR_ICSC_P_O1_2,
	ICR_ICSC_P_O2_0,
	ICR_ICSC_P_O2_1,
	ICR_ICSC_P_O2_2,
	ICR_ICSC_P_O3_0,
	ICR_ICSC_P_O3_1,
	ICR_ICSC_P_O3_2,
	ICR_FTDC_M_EN,
	ICR_FTDC_P_EN,
	ICR_FTDC_INLOW_L,
	ICR_FTDC_INLOW_H,
	ICR_FTDC_INHIGH_L,
	ICR_FTDC_INHIGH_H,
	ICR_FTDC_OUTLOW_L,
	ICR_FTDC_OUTLOW_H,
	ICR_FTDC_OUTHIGH_L,
	ICR_FTDC_OUTHIGH_H,
	ICR_FTDC_YLOW,
	ICR_FTDC_YHIGH,
	ICR_FTDC_CH1,
	ICR_FTDC_CH2_L,
	ICR_FTDC_CH2_H,
	ICR_FTDC_CH3_L,
	ICR_FTDC_CH3_H,
	ICR_FTDC_1_C00,
	ICR_FTDC_2_C00,
	ICR_FTDC_3_C00,
	ICR_FTDC_4_C00,
	ICR_FTDC_5_C00,
	ICR_FTDC_6_C00,
	ICR_FTDC_1_C01,
	ICR_FTDC_2_C01,
	ICR_FTDC_3_C01,
	ICR_FTDC_4_C01,
	ICR_FTDC_5_C01,
	ICR_FTDC_6_C01,
	ICR_FTDC_1_C11,
	ICR_FTDC_2_C11,
	ICR_FTDC_3_C11,
	ICR_FTDC_4_C11,
	ICR_FTDC_5_C11,
	ICR_FTDC_6_C11,
	ICR_FTDC_1_C10,
	ICR_FTDC_2_C10,
	ICR_FTDC_3_C10,
	ICR_FTDC_4_C10,
	ICR_FTDC_5_C10,
	ICR_FTDC_6_C10,
	ICR_FTDC_1_OFF00,
	ICR_FTDC_2_OFF00,
	ICR_FTDC_3_OFF00,
	ICR_FTDC_4_OFF00,
	ICR_FTDC_5_OFF00,
	ICR_FTDC_6_OFF00,
	ICR_FTDC_1_OFF10,
	ICR_FTDC_2_OFF10,
	ICR_FTDC_3_OFF10,
	ICR_FTDC_4_OFF10,
	ICR_FTDC_5_OFF10,
	ICR_FTDC_6_OFF10,
	ICR_HS_M_EN,
	ICR_HS_M_AX1_L,
	ICR_HS_M_AX1_H,
	ICR_HS_M_AX2_L,
	ICR_HS_M_AX2_H,
	ICR_HS_M_AX3_L,
	ICR_HS_M_AX3_H,
	ICR_HS_M_AX4_L,
	ICR_HS_M_AX4_H,
	ICR_HS_M_AX5_L,
	ICR_HS_M_AX5_H,
	ICR_HS_M_AX6_L,
	ICR_HS_M_AX6_H,
	ICR_HS_M_AX7_L,
	ICR_HS_M_AX7_H,
	ICR_HS_M_AX8_L,
	ICR_HS_M_AX8_H,
	ICR_HS_M_AX9_L,
	ICR_HS_M_AX9_H,
	ICR_HS_M_AX10_L,
	ICR_HS_M_AX10_H,
	ICR_HS_M_AX11_L,
	ICR_HS_M_AX11_H,
	ICR_HS_M_AX12_L,
	ICR_HS_M_AX12_H,
	ICR_HS_M_AX13_L,
	ICR_HS_M_AX13_H,
	ICR_HS_M_AX14_L,
	ICR_HS_M_AX14_H,
	ICR_HS_M_H1,
	ICR_HS_M_H2,
	ICR_HS_M_H3,
	ICR_HS_M_H4,
	ICR_HS_M_H5,
	ICR_HS_M_H6,
	ICR_HS_M_H7,
	ICR_HS_M_H8,
	ICR_HS_M_H9,
	ICR_HS_M_H10,
	ICR_HS_M_H11,
	ICR_HS_M_H12,
	ICR_HS_M_H13,
	ICR_HS_M_H14,
	ICR_HS_M_S1,
	ICR_HS_M_S2,
	ICR_HS_M_S3,
	ICR_HS_M_S4,
	ICR_HS_M_S5,
	ICR_HS_M_S6,
	ICR_HS_M_S7,
	ICR_HS_M_S8,
	ICR_HS_M_S9,
	ICR_HS_M_S10,
	ICR_HS_M_S11,
	ICR_HS_M_S12,
	ICR_HS_M_S13,
	ICR_HS_M_S14,
	ICR_HS_M_GL,
	ICR_HS_M_MAXSAT_RGB_Y_L,
	ICR_HS_M_MAXSAT_RGB_Y_H,
	ICR_HS_M_MAXSAT_RCR_L,
	ICR_HS_M_MAXSAT_RCR_H,
	ICR_HS_M_MAXSAT_RCB_L,
	ICR_HS_M_MAXSAT_RCB_H,
	ICR_HS_M_MAXSAT_GCR_L,
	ICR_HS_M_MAXSAT_GCR_H,
	ICR_HS_M_MAXSAT_GCB_L,
	ICR_HS_M_MAXSAT_GCB_H,
	ICR_HS_M_MAXSAT_BCR_L,
	ICR_HS_M_MAXSAT_BCR_H,
	ICR_HS_M_MAXSAT_BCB_L,
	ICR_HS_M_MAXSAT_BCB_H,
	ICR_HS_M_ROFF_L,
	ICR_HS_M_ROFF_H,
	ICR_HS_M_GOFF_L,
	ICR_HS_M_GOFF_H,
	ICR_HS_M_BOFF_L,
	ICR_HS_M_BOFF_H,
	ICR_HS_P_EN,
	ICR_HS_P_AX1_L,
	ICR_HS_P_AX1_H,
	ICR_HS_P_AX2_L,
	ICR_HS_P_AX2_H,
	ICR_HS_P_AX3_L,
	ICR_HS_P_AX3_H,
	ICR_HS_P_AX4_L,
	ICR_HS_P_AX4_H,
	ICR_HS_P_AX5_L,
	ICR_HS_P_AX5_H,
	ICR_HS_P_AX6_L,
	ICR_HS_P_AX6_H,
	ICR_HS_P_AX7_L,
	ICR_HS_P_AX7_H,
	ICR_HS_P_AX8_L,
	ICR_HS_P_AX8_H,
	ICR_HS_P_AX9_L,
	ICR_HS_P_AX9_H,
	ICR_HS_P_AX10_L,
	ICR_HS_P_AX10_H,
	ICR_HS_P_AX11_L,
	ICR_HS_P_AX11_H,
	ICR_HS_P_AX12_L,
	ICR_HS_P_AX12_H,
	ICR_HS_P_AX13_L,
	ICR_HS_P_AX13_H,
	ICR_HS_P_AX14_L,
	ICR_HS_P_AX14_H,
	ICR_HS_P_H1,
	ICR_HS_P_H2,
	ICR_HS_P_H3,
	ICR_HS_P_H4,
	ICR_HS_P_H5,
	ICR_HS_P_H6,
	ICR_HS_P_H7,
	ICR_HS_P_H8,
	ICR_HS_P_H9,
	ICR_HS_P_H10,
	ICR_HS_P_H11,
	ICR_HS_P_H12,
	ICR_HS_P_H13,
	ICR_HS_P_H14,
	ICR_HS_P_S1,
	ICR_HS_P_S2,
	ICR_HS_P_S3,
	ICR_HS_P_S4,
	ICR_HS_P_S5,
	ICR_HS_P_S6,
	ICR_HS_P_S7,
	ICR_HS_P_S8,
	ICR_HS_P_S9,
	ICR_HS_P_S10,
	ICR_HS_P_S11,
	ICR_HS_P_S12,
	ICR_HS_P_S13,
	ICR_HS_P_S14,
	ICR_HS_P_GL,
	ICR_HS_P_MAXSAT_RGB_Y_L,
	ICR_HS_P_MAXSAT_RGB_Y_H,
	ICR_HS_P_MAXSAT_RCR_L,
	ICR_HS_P_MAXSAT_RCR_H,
	ICR_HS_P_MAXSAT_RCB_L,
	ICR_HS_P_MAXSAT_RCB_H,
	ICR_HS_P_MAXSAT_GCR_L,
	ICR_HS_P_MAXSAT_GCR_H,
	ICR_HS_P_MAXSAT_GCB_L,
	ICR_HS_P_MAXSAT_GCB_H,
	ICR_HS_P_MAXSAT_BCR_L,
	ICR_HS_P_MAXSAT_BCR_H,
	ICR_HS_P_MAXSAT_BCB_L,
	ICR_HS_P_MAXSAT_BCB_H,
	ICR_HS_P_ROFF_L,
	ICR_HS_P_ROFF_H,
	ICR_HS_P_GOFF_L,
	ICR_HS_P_GOFF_H,
	ICR_HS_P_BOFF_L,
	ICR_HS_P_BOFF_H,
	ICR_GCSC_M_C0_L,
	ICR_GCSC_M_C0_H,
	ICR_GCSC_M_C1_L,
	ICR_GCSC_M_C1_H,
	ICR_GCSC_M_C2_L,
	ICR_GCSC_M_C2_H,
	ICR_GCSC_M_C3_L,
	ICR_GCSC_M_C3_H,
	ICR_GCSC_M_C4_L,
	ICR_GCSC_M_C4_H,
	ICR_GCSC_M_C5_L,
	ICR_GCSC_M_C5_H,
	ICR_GCSC_M_C6_L,
	ICR_GCSC_M_C6_H,
	ICR_GCSC_M_C7_L,
	ICR_GCSC_M_C7_H,
	ICR_GCSC_M_C8_L,
	ICR_GCSC_M_C8_H,
	ICR_GCSC_M_O1_0,
	ICR_GCSC_M_O1_1,
	ICR_GCSC_M_O1_2,
	ICR_GCSC_M_O2_0,
	ICR_GCSC_M_O2_1,
	ICR_GCSC_M_O2_2,
	ICR_GCSC_M_O3_0,
	ICR_GCSC_M_O3_1,
	ICR_GCSC_M_O3_2,
	ICR_GCSC_P_C0_L,
	ICR_GCSC_P_C0_H,
	ICR_GCSC_P_C1_L,
	ICR_GCSC_P_C1_H,
	ICR_GCSC_P_C2_L,
	ICR_GCSC_P_C2_H,
	ICR_GCSC_P_C3_L,
	ICR_GCSC_P_C3_H,
	ICR_GCSC_P_C4_L,
	ICR_GCSC_P_C4_H,
	ICR_GCSC_P_C5_L,
	ICR_GCSC_P_C5_H,
	ICR_GCSC_P_C6_L,
	ICR_GCSC_P_C6_H,
	ICR_GCSC_P_C7_L,
	ICR_GCSC_P_C7_H,
	ICR_GCSC_P_C8_L,
	ICR_GCSC_P_C8_H,
	ICR_GCSC_P_O1_0,
	ICR_GCSC_P_O1_1,
	ICR_GCSC_P_O1_2,
	ICR_GCSC_P_O2_0,
	ICR_GCSC_P_O2_1,
	ICR_GCSC_P_O2_2,
	ICR_GCSC_P_O3_0,
	ICR_GCSC_P_O3_1,
	ICR_GCSC_P_O3_2,
	ICR_CPCB_PIXVAL_M_EN,
	ICR_CPCB_PIXVAL_P_EN,
};

static u16 ICRioctlTable[] = {
	ICR_SRAM_WTC_RTC_REG,
	ICR_DBL_BUF_TRG_REG,
	ICR_DMA_GCR_REG,
	ICR_SVF0_SIZ_REG,
	ICR_SVF1_SIZ_REG,
	ICR_DF0DISP_SIZE_REG,
	ICR_DF1DISP_SIZE_REG,
	ICR_DF0DISP_SPSCR_REG,
	ICR_DF1DISP_SPSCR_REG,
	ICR_DF0_VID_SIZ_REG,
	ICR_DF1_VID_SIZ_REG,
	ICR_SVF0RGB_STRT_ADDR_REG,
	ICR_SVF1RGB_STRT_ADDR_REG,
	ICR_DF0DISP_STRT_ADDR_REG,
	ICR_DF1DISP_STRT_ADDR_REG,
	ICR_RX_DMA_CTRL0_REG,
	ICR_RX_DMA_CTRL1_REG,
	ICR_TX_DMA_CTRL0_REG,
	ICR_TX_DMA_CTRL1_REG,
	ICR_INTR_MASK_REG,
	ICR_INTR_CLR_SEL_REG,
	ICR_INTR_STAT_MASK_REG,
	ICR_INTR_STATUS_REG
};

#endif /* __PXA168_ICRIOCTLTABLE_H */
