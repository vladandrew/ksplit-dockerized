/*
 * Copyright (c) 2014-2015 Hisilicon Limited.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef _DSAF_REG_H_
#define _DSAF_REG_H_

#define HNS_DEBUG_RING_IRQ_IDX 55
#define HNS_SERVICE_RING_IRQ_IDX 59
#define HNS_DEBUG_RING_IRQ_OFFSET 2
#define HNSV2_DEBUG_RING_IRQ_IDX 409
#define HNSV2_SERVICE_RING_IRQ_IDX 25
#define HNSV2_DEBUG_RING_IRQ_OFFSET 9

#define DSAF_MAX_PORT_NUM_PER_CHIP 8
#define DSAF_SERVICE_PORT_NUM_PER_DSAF 6
#define DSAF_MAX_VM_NUM 128

#define DSAF_COMM_DEV_NUM 3
#define DSAF_PPE_INODE_BASE 6
#define HNS_DSAF_COMM_SERVICE_NW_IDX 0
#define DSAF_DEBUG_NW_NUM	2
#define DSAF_SERVICE_NW_NUM	6
#define DSAF_COMM_CHN		DSAF_SERVICE_NW_NUM
#define DSAF_GE_NUM		((DSAF_SERVICE_NW_NUM) + (DSAF_DEBUG_NW_NUM))
#define DSAF_PORT_NUM		((DSAF_SERVICE_NW_NUM) + (DSAF_DEBUG_NW_NUM))
#define DSAF_XGE_NUM		DSAF_SERVICE_NW_NUM
#define DSAF_PORT_TYPE_NUM 3
#define DSAF_NODE_NUM		18
#define DSAF_XOD_BIG_NUM	DSAF_NODE_NUM
#define DSAF_SBM_NUM		DSAF_NODE_NUM
#define DSAFV2_SBM_NUM		8
#define DSAFV2_SBM_XGE_CHN    6
#define DSAFV2_SBM_PPE_CHN    1
#define DASFV2_ROCEE_CRD_NUM  8

#define DSAF_VOQ_NUM		DSAF_NODE_NUM
#define DSAF_INODE_NUM		DSAF_NODE_NUM
#define DSAF_XOD_NUM		8
#define DSAF_TBL_NUM		8
#define DSAF_SW_PORT_NUM	8
#define DSAF_TOTAL_QUEUE_NUM	129

#define DSAF_TCAM_SUM		512
#define DSAF_LINE_SUM		(2048 * 14)

#define DSAF_SUB_SC_NT_SRAM_CLK_SEL_REG			0x100
#define DSAF_SUB_SC_HILINK3_CRG_CTRL0_REG		0x180
#define DSAF_SUB_SC_HILINK3_CRG_CTRL1_REG		0x184
#define DSAF_SUB_SC_HILINK3_CRG_CTRL2_REG		0x188
#define DSAF_SUB_SC_HILINK3_CRG_CTRL3_REG		0x18C
#define DSAF_SUB_SC_HILINK4_CRG_CTRL0_REG		0x190
#define DSAF_SUB_SC_HILINK4_CRG_CTRL1_REG		0x194
#define DSAF_SUB_SC_DSAF_CLK_EN_REG			0x300
#define DSAF_SUB_SC_DSAF_CLK_DIS_REG			0x304
#define DSAF_SUB_SC_NT_CLK_EN_REG			0x308
#define DSAF_SUB_SC_NT_CLK_DIS_REG			0x30C
#define DSAF_SUB_SC_XGE_CLK_EN_REG			0x310
#define DSAF_SUB_SC_XGE_CLK_DIS_REG			0x314
#define DSAF_SUB_SC_GE_CLK_EN_REG			0x318
#define DSAF_SUB_SC_GE_CLK_DIS_REG			0x31C
#define DSAF_SUB_SC_PPE_CLK_EN_REG			0x320
#define DSAF_SUB_SC_PPE_CLK_DIS_REG			0x324
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_EN_REG		0x350
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_DIS_REG		0x354
#define DSAF_SUB_SC_XBAR_RESET_REQ_REG			0xA00
#define DSAF_SUB_SC_XBAR_RESET_DREQ_REG			0xA04
#define DSAF_SUB_SC_NT_RESET_REQ_REG			0xA08
#define DSAF_SUB_SC_NT_RESET_DREQ_REG			0xA0C
#define DSAF_SUB_SC_XGE_RESET_REQ_REG			0xA10
#define DSAF_SUB_SC_XGE_RESET_DREQ_REG			0xA14
#define DSAF_SUB_SC_GE_RESET_REQ0_REG			0xA18
#define DSAF_SUB_SC_GE_RESET_DREQ0_REG			0xA1C
#define DSAF_SUB_SC_GE_RESET_REQ1_REG			0xA20
#define DSAF_SUB_SC_GE_RESET_DREQ1_REG			0xA24
#define DSAF_SUB_SC_PPE_RESET_REQ_REG			0xA48
#define DSAF_SUB_SC_PPE_RESET_DREQ_REG			0xA4C
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_REQ_REG		0xA88
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_DREQ_REG		0xA8C
#define DSAF_SUB_SC_LIGHT_MODULE_DETECT_EN_REG		0x2060
#define DSAF_SUB_SC_TCAM_MBIST_EN_REG			0x2300
#define DSAF_SUB_SC_DSAF_CLK_ST_REG			0x5300
#define DSAF_SUB_SC_NT_CLK_ST_REG			0x5304
#define DSAF_SUB_SC_XGE_CLK_ST_REG			0x5308
#define DSAF_SUB_SC_GE_CLK_ST_REG			0x530C
#define DSAF_SUB_SC_PPE_CLK_ST_REG			0x5310
#define DSAF_SUB_SC_ROCEE_CLK_ST_REG			0x5314
#define DSAF_SUB_SC_CPU_CLK_ST_REG			0x5318
#define DSAF_SUB_SC_RCB_PPE_COM_CLK_ST_REG		0x5328
#define DSAF_SUB_SC_XBAR_RESET_ST_REG			0x5A00
#define DSAF_SUB_SC_NT_RESET_ST_REG			0x5A04
#define DSAF_SUB_SC_XGE_RESET_ST_REG			0x5A08
#define DSAF_SUB_SC_GE_RESET_ST0_REG			0x5A0C
#define DSAF_SUB_SC_GE_RESET_ST1_REG			0x5A10
#define DSAF_SUB_SC_PPE_RESET_ST_REG			0x5A24
#define DSAF_SUB_SC_RCB_PPE_COM_RESET_ST_REG		0x5A44

/*serdes offset**/
#define HNS_MAC_HILINK3_REG DSAF_SUB_SC_HILINK3_CRG_CTRL0_REG
#define HNS_MAC_HILINK4_REG DSAF_SUB_SC_HILINK4_CRG_CTRL0_REG
#define HNS_MAC_LANE0_CTLEDFE_REG 0x000BFFCCULL
#define HNS_MAC_LANE1_CTLEDFE_REG 0x000BFFBCULL
#define HNS_MAC_LANE2_CTLEDFE_REG 0x000BFFACULL
#define HNS_MAC_LANE3_CTLEDFE_REG 0x000BFF9CULL
#define HNS_MAC_LANE0_STATE_REG 0x000BFFD4ULL
#define HNS_MAC_LANE1_STATE_REG 0x000BFFC4ULL
#define HNS_MAC_LANE2_STATE_REG 0x000BFFB4ULL
#define HNS_MAC_LANE3_STATE_REG 0x000BFFA4ULL

#define HILINK_RESET_TIMOUT 10000

#define DSAF_SRAM_INIT_OVER_0_REG	0x0
#define DSAF_CFG_0_REG			0x4
#define DSAF_ECC_ERR_INVERT_0_REG	0x8
#define DSAF_ABNORMAL_TIMEOUT_0_REG	0x1C
#define DSAF_FSM_TIMEOUT_0_REG		0x20
#define DSAF_DSA_REG_CNT_CLR_CE_REG	0x2C
#define DSAF_DSA_SBM_INF_FIFO_THRD_REG	0x30
#define DSAF_DSA_SRAM_1BIT_ECC_SEL_REG	0x34
#define DSAF_DSA_SRAM_1BIT_ECC_CNT_REG	0x38
#define DSAF_PFC_EN_0_REG		0x50
#define DSAF_PFC_UNIT_CNT_0_REG		0x70
#define DSAF_XGE_INT_MSK_0_REG		0x100
#define DSAF_PPE_INT_MSK_0_REG		0x120
#define DSAF_ROCEE_INT_MSK_0_REG	0x140
#define DSAF_XGE_INT_SRC_0_REG		0x160
#define DSAF_PPE_INT_SRC_0_REG		0x180
#define DSAF_ROCEE_INT_SRC_0_REG	0x1A0
#define DSAF_XGE_INT_STS_0_REG		0x1C0
#define DSAF_PPE_INT_STS_0_REG		0x1E0
#define DSAF_ROCEE_INT_STS_0_REG	0x200
#define DSAF_PPE_QID_CFG_0_REG		0x300
#define DSAF_SW_PORT_TYPE_0_REG		0x320
#define DSAF_STP_PORT_TYPE_0_REG	0x340
#define DSAF_MIX_DEF_QID_0_REG		0x360
#define DSAF_PORT_DEF_VLAN_0_REG	0x380
#define DSAF_VM_DEF_VLAN_0_REG		0x400

#define DSAF_INODE_CUT_THROUGH_CFG_0_REG	0x1000
#define DSAF_INODE_ECC_INVERT_EN_0_REG		0x1008
#define DSAF_INODE_ECC_ERR_ADDR_0_REG		0x100C
#define DSAF_INODE_IN_PORT_NUM_0_REG		0x1018
#define DSAF_INODE_PRI_TC_CFG_0_REG		0x101C
#define DSAF_INODE_BP_STATUS_0_REG		0x1020
#define DSAF_INODE_PAD_DISCARD_NUM_0_REG	0x1028
#define DSAF_INODE_FINAL_IN_MAN_NUM_0_REG	0x102C
#define DSAF_INODE_FINAL_IN_PKT_NUM_0_REG	0x1030
#define DSAF_INODE_SBM_PID_NUM_0_REG		0x1038
#define DSAF_INODE_FINAL_IN_PAUSE_NUM_0_REG	0x103C
#define DSAF_INODE_SBM_RELS_NUM_0_REG		0x104C
#define DSAF_INODE_SBM_DROP_NUM_0_REG		0x1050
#define DSAF_INODE_CRC_FALSE_NUM_0_REG		0x1054
#define DSAF_INODE_BP_DISCARD_NUM_0_REG		0x1058
#define DSAF_INODE_RSLT_DISCARD_NUM_0_REG	0x105C
#define DSAF_INODE_LOCAL_ADDR_FALSE_NUM_0_REG	0x1060
#define DSAF_INODE_VOQ_OVER_NUM_0_REG		0x1068
#define DSAF_INODE_BD_SAVE_STATUS_0_REG		0x1900
#define DSAF_INODE_BD_ORDER_STATUS_0_REG	0x1950
#define DSAF_INODE_SW_VLAN_TAG_DISC_0_REG	0x1A00
#define DSAF_INODE_IN_DATA_STP_DISC_0_REG	0x1A50
#define DSAF_INODE_GE_FC_EN_0_REG		0x1B00
#define DSAF_INODE_VC0_IN_PKT_NUM_0_REG		0x1B50
#define DSAF_INODE_VC1_IN_PKT_NUM_0_REG		0x1C00

#define DSAF_SBM_CFG_REG_0_REG			0x2000
#define DSAF_SBM_BP_CFG_0_XGE_REG_0_REG		0x2004
#define DSAF_SBM_BP_CFG_0_PPE_REG_0_REG		0x2304
#define DSAF_SBM_BP_CFG_0_ROCEE_REG_0_REG	0x2604
#define DSAF_SBM_BP_CFG_1_REG_0_REG		0x2008
#define DSAF_SBM_BP_CFG_2_XGE_REG_0_REG		0x200C
#define DSAF_SBM_BP_CFG_2_PPE_REG_0_REG		0x230C
#define DSAF_SBM_BP_CFG_2_ROCEE_REG_0_REG	0x260C
#define DSAFV2_SBM_BP_CFG_2_ROCEE_REG_0_REG		 0x238C
#define DSAF_SBM_FREE_CNT_0_0_REG		0x2010
#define DSAF_SBM_FREE_CNT_1_0_REG		0x2014
#define DSAF_SBM_BP_CNT_0_0_REG			0x2018
#define DSAF_SBM_BP_CNT_1_0_REG			0x201C
#define DSAF_SBM_BP_CNT_2_0_REG			0x2020
#define DSAF_SBM_BP_CNT_3_0_REG			0x2024
#define DSAF_SBM_INER_ST_0_REG			0x2028
#define DSAF_SBM_MIB_REQ_FAILED_TC_0_REG	0x202C
#define DSAF_SBM_LNK_INPORT_CNT_0_REG		0x2030
#define DSAF_SBM_LNK_DROP_CNT_0_REG		0x2034
#define DSAF_SBM_INF_OUTPORT_CNT_0_REG		0x2038
#define DSAF_SBM_LNK_INPORT_TC0_CNT_0_REG	0x203C
#define DSAF_SBM_LNK_INPORT_TC1_CNT_0_REG	0x2040
#define DSAF_SBM_LNK_INPORT_TC2_CNT_0_REG	0x2044
#define DSAF_SBM_LNK_INPORT_TC3_CNT_0_REG	0x2048
#define DSAF_SBM_LNK_INPORT_TC4_CNT_0_REG	0x204C
#define DSAF_SBM_LNK_INPORT_TC5_CNT_0_REG	0x2050
#define DSAF_SBM_LNK_INPORT_TC6_CNT_0_REG	0x2054
#define DSAF_SBM_LNK_INPORT_TC7_CNT_0_REG	0x2058
#define DSAF_SBM_LNK_REQ_CNT_0_REG		0x205C
#define DSAF_SBM_LNK_RELS_CNT_0_REG		0x2060
#define DSAF_SBM_BP_CFG_3_REG_0_REG		0x2068
#define DSAF_SBM_BP_CFG_4_REG_0_REG		0x206C

#define DSAF_XOD_ETS_TSA_TC0_TC3_CFG_0_REG	0x3000
#define DSAF_XOD_ETS_TSA_TC4_TC7_CFG_0_REG	0x3004
#define DSAF_XOD_ETS_BW_TC0_TC3_CFG_0_REG	0x3008
#define DSAF_XOD_ETS_BW_TC4_TC7_CFG_0_REG	0x300C
#define DSAF_XOD_ETS_BW_OFFSET_CFG_0_REG	0x3010
#define DSAF_XOD_ETS_TOKEN_CFG_0_REG		0x3014
#define DSAF_XOD_PFS_CFG_0_0_REG		0x3018
#define DSAF_XOD_PFS_CFG_1_0_REG		0x301C
#define DSAF_XOD_PFS_CFG_2_0_REG		0x3020
#define DSAF_XOD_GNT_L_0_REG			0x3024
#define DSAF_XOD_GNT_H_0_REG			0x3028
#define DSAF_XOD_CONNECT_STATE_0_REG		0x302C
#define DSAF_XOD_RCVPKT_CNT_0_REG		0x3030
#define DSAF_XOD_RCVTC0_CNT_0_REG		0x3034
#define DSAF_XOD_RCVTC1_CNT_0_REG		0x3038
#define DSAF_XOD_RCVTC2_CNT_0_REG		0x303C
#define DSAF_XOD_RCVTC3_CNT_0_REG		0x3040
#define DSAF_XOD_RCVVC0_CNT_0_REG		0x3044
#define DSAF_XOD_RCVVC1_CNT_0_REG		0x3048
#define DSAF_XOD_XGE_RCVIN0_CNT_0_REG		0x304C
#define DSAF_XOD_XGE_RCVIN1_CNT_0_REG		0x3050
#define DSAF_XOD_XGE_RCVIN2_CNT_0_REG		0x3054
#define DSAF_XOD_XGE_RCVIN3_CNT_0_REG		0x3058
#define DSAF_XOD_XGE_RCVIN4_CNT_0_REG		0x305C
#define DSAF_XOD_XGE_RCVIN5_CNT_0_REG		0x3060
#define DSAF_XOD_XGE_RCVIN6_CNT_0_REG		0x3064
#define DSAF_XOD_XGE_RCVIN7_CNT_0_REG		0x3068
#define DSAF_XOD_PPE_RCVIN0_CNT_0_REG		0x306C
#define DSAF_XOD_PPE_RCVIN1_CNT_0_REG		0x3070
#define DSAF_XOD_ROCEE_RCVIN0_CNT_0_REG		0x3074
#define DSAF_XOD_ROCEE_RCVIN1_CNT_0_REG		0x3078
#define DSAF_XOD_FIFO_STATUS_0_REG		0x307C

#define DSAF_VOQ_ECC_INVERT_EN_0_REG		0x4004
#define DSAF_VOQ_SRAM_PKT_NUM_0_REG		0x4008
#define DSAF_VOQ_IN_PKT_NUM_0_REG		0x400C
#define DSAF_VOQ_OUT_PKT_NUM_0_REG		0x4010
#define DSAF_VOQ_ECC_ERR_ADDR_0_REG		0x4014
#define DSAF_VOQ_BP_STATUS_0_REG		0x4018
#define DSAF_VOQ_SPUP_IDLE_0_REG		0x401C
#define DSAF_VOQ_XGE_XOD_REQ_0_0_REG		0x4024
#define DSAF_VOQ_XGE_XOD_REQ_1_0_REG		0x4028
#define DSAF_VOQ_PPE_XOD_REQ_0_REG		0x402C
#define DSAF_VOQ_ROCEE_XOD_REQ_0_REG		0x4030
#define DSAF_VOQ_BP_ALL_THRD_0_REG		0x4034

#define DSAF_TBL_CTRL_0_REG			0x5000
#define DSAF_TBL_INT_MSK_0_REG			0x5004
#define DSAF_TBL_INT_SRC_0_REG			0x5008
#define DSAF_TBL_INT_STS_0_REG			0x5100
#define DSAF_TBL_TCAM_ADDR_0_REG		0x500C
#define DSAF_TBL_LINE_ADDR_0_REG		0x5010
#define DSAF_TBL_TCAM_HIGH_0_REG		0x5014
#define DSAF_TBL_TCAM_LOW_0_REG			0x5018
#define DSAF_TBL_TCAM_MCAST_CFG_4_0_REG		0x501C
#define DSAF_TBL_TCAM_MCAST_CFG_3_0_REG		0x5020
#define DSAF_TBL_TCAM_MCAST_CFG_2_0_REG		0x5024
#define DSAF_TBL_TCAM_MCAST_CFG_1_0_REG		0x5028
#define DSAF_TBL_TCAM_MCAST_CFG_0_0_REG		0x502C
#define DSAF_TBL_TCAM_UCAST_CFG_0_REG		0x5030
#define DSAF_TBL_LIN_CFG_0_REG			0x5034
#define DSAF_TBL_TCAM_RDATA_HIGH_0_REG		0x5038
#define DSAF_TBL_TCAM_RDATA_LOW_0_REG		0x503C
#define DSAF_TBL_TCAM_RAM_RDATA4_0_REG		0x5040
#define DSAF_TBL_TCAM_RAM_RDATA3_0_REG		0x5044
#define DSAF_TBL_TCAM_RAM_RDATA2_0_REG		0x5048
#define DSAF_TBL_TCAM_RAM_RDATA1_0_REG		0x504C
#define DSAF_TBL_TCAM_RAM_RDATA0_0_REG		0x5050
#define DSAF_TBL_LIN_RDATA_0_REG		0x5054
#define DSAF_TBL_DA0_MIS_INFO1_0_REG		0x5058
#define DSAF_TBL_DA0_MIS_INFO0_0_REG		0x505C
#define DSAF_TBL_SA_MIS_INFO2_0_REG		0x5104
#define DSAF_TBL_SA_MIS_INFO1_0_REG		0x5098
#define DSAF_TBL_SA_MIS_INFO0_0_REG		0x509C
#define DSAF_TBL_PUL_0_REG			0x50A0
#define DSAF_TBL_OLD_RSLT_0_REG			0x50A4
#define DSAF_TBL_OLD_SCAN_VAL_0_REG		0x50A8
#define DSAF_TBL_DFX_CTRL_0_REG			0x50AC
#define DSAF_TBL_DFX_STAT_0_REG			0x50B0
#define DSAF_TBL_DFX_STAT_2_0_REG		0x5108
#define DSAF_TBL_LKUP_NUM_I_0_REG		0x50C0
#define DSAF_TBL_LKUP_NUM_O_0_REG		0x50E0
#define DSAF_TBL_UCAST_BCAST_MIS_INFO_0_0_REG	0x510C

#define DSAF_INODE_FIFO_WL_0_REG		0x6000
#define DSAF_ONODE_FIFO_WL_0_REG		0x6020
#define DSAF_XGE_GE_WORK_MODE_0_REG		0x6040
#define DSAF_XGE_APP_RX_LINK_UP_0_REG		0x6080
#define DSAF_NETPORT_CTRL_SIG_0_REG		0x60A0
#define DSAF_XGE_CTRL_SIG_CFG_0_REG		0x60C0

#define PPE_COM_CFG_QID_MODE_REG		0x0
#define PPE_COM_INTEN_REG			0x110
#define PPE_COM_RINT_REG			0x114
#define PPE_COM_INTSTS_REG			0x118
#define PPE_COM_COMMON_CNT_CLR_CE_REG		0x1120
#define PPE_COM_HIS_RX_PKT_QID_DROP_CNT_REG	0x300
#define PPE_COM_HIS_RX_PKT_QID_OK_CNT_REG	0x600
#define PPE_COM_HIS_TX_PKT_QID_ERR_CNT_REG	0x900
#define PPE_COM_HIS_TX_PKT_QID_OK_CNT_REG	0xC00
#define PPE_COM_COMMON_CNT_CLR_CE_REG		0x1120

#define PPE_CFG_TX_FIFO_THRSLD_REG		0x0
#define PPE_CFG_RX_FIFO_THRSLD_REG		0x4
#define PPE_CFG_RX_FIFO_PAUSE_THRSLD_REG	0x8
#define PPE_CFG_RX_FIFO_SW_BP_THRSLD_REG	0xC
#define PPE_CFG_PAUSE_IDLE_CNT_REG		0x10
#define PPE_CFG_BUS_CTRL_REG			0x40
#define PPE_CFG_TNL_TO_BE_RST_REG		0x48
#define PPE_CURR_TNL_CAN_RST_REG		0x4C
#define PPE_CFG_XGE_MODE_REG			0x80
#define PPE_CFG_MAX_FRAME_LEN_REG		0x84
#define PPE_CFG_RX_PKT_MODE_REG			0x88
#define PPE_CFG_RX_VLAN_TAG_REG			0x8C
#define PPE_CFG_TAG_GEN_REG			0x90
#define PPE_CFG_PARSE_TAG_REG			0x94
#define PPE_CFG_PRO_CHECK_EN_REG		0x98
#define PPEV2_CFG_TSO_EN_REG			0xA0
#define PPEV2_VLAN_STRIP_EN_REG			0xAC
#define PPE_INTEN_REG				0x100
#define PPE_RINT_REG				0x104
#define PPE_INTSTS_REG				0x108
#define PPE_CFG_RX_PKT_INT_REG			0x140
#define PPE_CFG_HEAT_DECT_TIME0_REG		0x144
#define PPE_CFG_HEAT_DECT_TIME1_REG		0x148
#define PPE_HIS_RX_SW_PKT_CNT_REG		0x200
#define PPE_HIS_RX_WR_BD_OK_PKT_CNT_REG		0x204
#define PPE_HIS_RX_PKT_NO_BUF_CNT_REG		0x208
#define PPE_HIS_TX_BD_CNT_REG			0x20C
#define PPE_HIS_TX_PKT_CNT_REG			0x210
#define PPE_HIS_TX_PKT_OK_CNT_REG		0x214
#define PPE_HIS_TX_PKT_EPT_CNT_REG		0x218
#define PPE_HIS_TX_PKT_CS_FAIL_CNT_REG		0x21C
#define PPE_HIS_RX_APP_BUF_FAIL_CNT_REG		0x220
#define PPE_HIS_RX_APP_BUF_WAIT_CNT_REG		0x224
#define PPE_HIS_RX_PKT_DROP_FUL_CNT_REG		0x228
#define PPE_HIS_RX_PKT_DROP_PRT_CNT_REG		0x22C
#define PPE_TNL_0_5_CNT_CLR_CE_REG		0x300
#define PPE_CFG_AXI_DBG_REG			0x304
#define PPE_HIS_PRO_ERR_REG			0x308
#define PPE_HIS_TNL_FIFO_ERR_REG		0x30C
#define PPE_CURR_CFF_DATA_NUM_REG		0x310
#define PPE_CURR_RX_ST_REG			0x314
#define PPE_CURR_TX_ST_REG			0x318
#define PPE_CURR_RX_FIFO0_REG			0x31C
#define PPE_CURR_RX_FIFO1_REG			0x320
#define PPE_CURR_TX_FIFO0_REG			0x324
#define PPE_CURR_TX_FIFO1_REG			0x328
#define PPE_ECO0_REG				0x32C
#define PPE_ECO1_REG				0x330
#define PPE_ECO2_REG				0x334
#define PPEV2_INDRECTION_TBL_REG		0x800
#define PPEV2_RSS_KEY_REG			0x900

#define RCB_COM_CFG_ENDIAN_REG			0x0
#define RCB_COM_CFG_SYS_FSH_REG			0xC
#define RCB_COM_CFG_INIT_FLAG_REG		0x10
#define RCB_COM_CFG_PKT_REG			0x30
#define RCB_COM_CFG_RINVLD_REG			0x34
#define RCB_COM_CFG_FNA_REG			0x38
#define RCB_COM_CFG_FA_REG			0x3C
#define RCB_COM_CFG_PKT_TC_BP_REG		0x40
#define RCB_COM_CFG_PPE_TNL_CLKEN_REG		0x44
#define RCBV2_COM_CFG_USER_REG			0x30
#define RCBV2_COM_CFG_TSO_MODE_REG		0x50

#define RCB_COM_INTMSK_TX_PKT_REG		0x3A0
#define RCB_COM_RINT_TX_PKT_REG			0x3A8
#define RCB_COM_INTMASK_ECC_ERR_REG		0x400
#define RCB_COM_INTSTS_ECC_ERR_REG		0x408
#define RCB_COM_EBD_SRAM_ERR_REG		0x410
#define RCB_COM_RXRING_ERR_REG			0x41C
#define RCB_COM_TXRING_ERR_REG			0x420
#define RCB_COM_TX_FBD_ERR_REG			0x424
#define RCB_SRAM_ECC_CHK_EN_REG			0x428
#define RCB_SRAM_ECC_CHK0_REG			0x42C
#define RCB_SRAM_ECC_CHK1_REG			0x430
#define RCB_SRAM_ECC_CHK2_REG			0x434
#define RCB_SRAM_ECC_CHK3_REG			0x438
#define RCB_SRAM_ECC_CHK4_REG			0x43c
#define RCB_SRAM_ECC_CHK5_REG			0x440
#define RCB_ECC_ERR_ADDR0_REG			0x450
#define RCB_ECC_ERR_ADDR3_REG			0x45C
#define RCB_ECC_ERR_ADDR4_REG			0x460
#define RCB_ECC_ERR_ADDR5_REG			0x464

#define RCB_COM_SF_CFG_INTMASK_RING		0x480
#define RCB_COM_SF_CFG_RING_STS			0x484
#define RCB_COM_SF_CFG_RING			0x488
#define RCB_COM_SF_CFG_INTMASK_BD		0x48C
#define RCB_COM_SF_CFG_BD_RINT_STS		0x470
#define RCB_COM_RCB_RD_BD_BUSY			0x490
#define RCB_COM_RCB_FBD_CRT_EN			0x494
#define RCB_COM_AXI_WR_ERR_INTMASK		0x498
#define RCB_COM_AXI_ERR_STS			0x49C
#define RCB_COM_CHK_TX_FBD_NUM_REG		0x4a0

#define RCB_CFG_BD_NUM_REG			0x9000
#define RCB_CFG_PKTLINE_REG			0x9050

#define RCB_CFG_OVERTIME_REG			0x9300
#define RCB_CFG_PKTLINE_INT_NUM_REG		0x9304
#define RCB_CFG_OVERTIME_INT_NUM_REG		0x9308

#define RCB_RING_RX_RING_BASEADDR_L_REG		0x00000
#define RCB_RING_RX_RING_BASEADDR_H_REG		0x00004
#define RCB_RING_RX_RING_BD_NUM_REG		0x00008
#define RCB_RING_RX_RING_BD_LEN_REG		0x0000C
#define RCB_RING_RX_RING_PKTLINE_REG		0x00010
#define RCB_RING_RX_RING_TAIL_REG		0x00018
#define RCB_RING_RX_RING_HEAD_REG		0x0001C
#define RCB_RING_RX_RING_FBDNUM_REG		0x00020
#define RCB_RING_RX_RING_PKTNUM_RECORD_REG	0x0002C

#define RCB_RING_TX_RING_BASEADDR_L_REG		0x00040
#define RCB_RING_TX_RING_BASEADDR_H_REG		0x00044
#define RCB_RING_TX_RING_BD_NUM_REG		0x00048
#define RCB_RING_TX_RING_BD_LEN_REG		0x0004C
#define RCB_RING_TX_RING_PKTLINE_REG		0x00050
#define RCB_RING_TX_RING_TAIL_REG		0x00058
#define RCB_RING_TX_RING_HEAD_REG		0x0005C
#define RCB_RING_TX_RING_FBDNUM_REG		0x00060
#define RCB_RING_TX_RING_OFFSET_REG		0x00064
#define RCB_RING_TX_RING_PKTNUM_RECORD_REG	0x0006C

#define RCB_RING_PREFETCH_EN_REG		0x0007C
#define RCB_RING_CFG_VF_NUM_REG			0x00080
#define RCB_RING_ASID_REG			0x0008C
#define RCB_RING_RX_VM_REG			0x00090
#define RCB_RING_T0_BE_RST			0x00094
#define RCB_RING_COULD_BE_RST			0x00098
#define RCB_RING_WRR_WEIGHT_REG			0x0009c

#define RCB_RING_INTMSK_RXWL_REG		0x000A0
#define RCB_RING_INTSTS_RX_RING_REG		0x000A4
#define RCBV2_RX_RING_INT_STS_REG		0x000A8
#define RCB_RING_INTMSK_TXWL_REG		0x000AC
#define RCB_RING_INTSTS_TX_RING_REG		0x000B0
#define RCBV2_TX_RING_INT_STS_REG		0x000B4
#define RCB_RING_INTMSK_RX_OVERTIME_REG		0x000B8
#define RCB_RING_INTSTS_RX_OVERTIME_REG		0x000BC
#define RCB_RING_INTMSK_TX_OVERTIME_REG		0x000C4
#define RCB_RING_INTSTS_TX_OVERTIME_REG		0x000C8

#define GMAC_DUPLEX_TYPE_REG			0x0008UL
#define GMAC_FD_FC_TYPE_REG			0x000CUL
#define GMAC_FC_TX_TIMER_REG			0x001CUL
#define GMAC_FD_FC_ADDR_LOW_REG			0x0020UL
#define GMAC_FD_FC_ADDR_HIGH_REG		0x0024UL
#define GMAC_IPG_TX_TIMER_REG			0x0030UL
#define GMAC_PAUSE_THR_REG			0x0038UL
#define GMAC_MAX_FRM_SIZE_REG			0x003CUL
#define GMAC_PORT_MODE_REG			0x0040UL
#define GMAC_PORT_EN_REG			0x0044UL
#define GMAC_PAUSE_EN_REG			0x0048UL
#define GMAC_SHORT_RUNTS_THR_REG		0x0050UL
#define GMAC_AN_NEG_STATE_REG			0x0058UL
#define GMAC_TX_LOCAL_PAGE_REG			0x005CUL
#define GMAC_TRANSMIT_CONTROL_REG		0x0060UL
#define GMAC_REC_FILT_CONTROL_REG		0x0064UL
#define GMAC_PTP_CONFIG_REG			0x0074UL

#define GMAC_RX_OCTETS_TOTAL_OK_REG		0x0080UL
#define GMAC_RX_OCTETS_BAD_REG			0x0084UL
#define GMAC_RX_UC_PKTS_REG			0x0088UL
#define GMAC_RX_MC_PKTS_REG			0x008CUL
#define GMAC_RX_BC_PKTS_REG			0x0090UL
#define GMAC_RX_PKTS_64OCTETS_REG		0x0094UL
#define GMAC_RX_PKTS_65TO127OCTETS_REG		0x0098UL
#define GMAC_RX_PKTS_128TO255OCTETS_REG		0x009CUL
#define GMAC_RX_PKTS_255TO511OCTETS_REG		0x00A0UL
#define GMAC_RX_PKTS_512TO1023OCTETS_REG	0x00A4UL
#define GMAC_RX_PKTS_1024TO1518OCTETS_REG	0x00A8UL
#define GMAC_RX_PKTS_1519TOMAXOCTETS_REG	0x00ACUL
#define GMAC_RX_FCS_ERRORS_REG			0x00B0UL
#define GMAC_RX_TAGGED_REG			0x00B4UL
#define GMAC_RX_DATA_ERR_REG			0x00B8UL
#define GMAC_RX_ALIGN_ERRORS_REG		0x00BCUL
#define GMAC_RX_LONG_ERRORS_REG			0x00C0UL
#define GMAC_RX_JABBER_ERRORS_REG		0x00C4UL
#define GMAC_RX_PAUSE_MACCTRL_FRAM_REG		0x00C8UL
#define GMAC_RX_UNKNOWN_MACCTRL_FRAM_REG	0x00CCUL
#define GMAC_RX_VERY_LONG_ERR_CNT_REG		0x00D0UL
#define GMAC_RX_RUNT_ERR_CNT_REG		0x00D4UL
#define GMAC_RX_SHORT_ERR_CNT_REG		0x00D8UL
#define GMAC_RX_FILT_PKT_CNT_REG		0x00E8UL
#define GMAC_RX_OCTETS_TOTAL_FILT_REG		0x00ECUL
#define GMAC_OCTETS_TRANSMITTED_OK_REG		0x0100UL
#define GMAC_OCTETS_TRANSMITTED_BAD_REG		0x0104UL
#define GMAC_TX_UC_PKTS_REG			0x0108UL
#define GMAC_TX_MC_PKTS_REG			0x010CUL
#define GMAC_TX_BC_PKTS_REG			0x0110UL
#define GMAC_TX_PKTS_64OCTETS_REG		0x0114UL
#define GMAC_TX_PKTS_65TO127OCTETS_REG		0x0118UL
#define GMAC_TX_PKTS_128TO255OCTETS_REG		0x011CUL
#define GMAC_TX_PKTS_255TO511OCTETS_REG		0x0120UL
#define GMAC_TX_PKTS_512TO1023OCTETS_REG	0x0124UL
#define GMAC_TX_PKTS_1024TO1518OCTETS_REG	0x0128UL
#define GMAC_TX_PKTS_1519TOMAXOCTETS_REG	0x012CUL
#define GMAC_TX_EXCESSIVE_LENGTH_DROP_REG	0x014CUL
#define GMAC_TX_UNDERRUN_REG			0x0150UL
#define GMAC_TX_TAGGED_REG			0x0154UL
#define GMAC_TX_CRC_ERROR_REG			0x0158UL
#define GMAC_TX_PAUSE_FRAMES_REG		0x015CUL
#define GAMC_RX_MAX_FRAME			0x0170UL
#define GMAC_LINE_LOOP_BACK_REG			0x01A8UL
#define GMAC_CF_CRC_STRIP_REG			0x01B0UL
#define GMAC_MODE_CHANGE_EN_REG			0x01B4UL
#define GMAC_SIXTEEN_BIT_CNTR_REG		0x01CCUL
#define GMAC_LD_LINK_COUNTER_REG		0x01D0UL
#define GMAC_LOOP_REG				0x01DCUL
#define GMAC_RECV_CONTROL_REG			0x01E0UL
#define GMAC_VLAN_CODE_REG			0x01E8UL
#define GMAC_RX_OVERRUN_CNT_REG			0x01ECUL
#define GMAC_RX_LENGTHFIELD_ERR_CNT_REG		0x01F4UL
#define GMAC_RX_FAIL_COMMA_CNT_REG		0x01F8UL
#define GMAC_STATION_ADDR_LOW_0_REG		0x0200UL
#define GMAC_STATION_ADDR_HIGH_0_REG		0x0204UL
#define GMAC_STATION_ADDR_LOW_1_REG		0x0208UL
#define GMAC_STATION_ADDR_HIGH_1_REG		0x020CUL
#define GMAC_STATION_ADDR_LOW_2_REG		0x0210UL
#define GMAC_STATION_ADDR_HIGH_2_REG		0x0214UL
#define GMAC_STATION_ADDR_LOW_3_REG		0x0218UL
#define GMAC_STATION_ADDR_HIGH_3_REG		0x021CUL
#define GMAC_STATION_ADDR_LOW_4_REG		0x0220UL
#define GMAC_STATION_ADDR_HIGH_4_REG		0x0224UL
#define GMAC_STATION_ADDR_LOW_5_REG		0x0228UL
#define GMAC_STATION_ADDR_HIGH_5_REG		0x022CUL
#define GMAC_STATION_ADDR_LOW_MSK_0_REG		0x0230UL
#define GMAC_STATION_ADDR_HIGH_MSK_0_REG	0x0234UL
#define GMAC_STATION_ADDR_LOW_MSK_1_REG		0x0238UL
#define GMAC_STATION_ADDR_HIGH_MSK_1_REG	0x023CUL
#define GMAC_MAC_SKIP_LEN_REG			0x0240UL
#define GMAC_TX_LOOP_PKT_PRI_REG		0x0378UL

#define XGMAC_INT_STATUS_REG			0x0
#define XGMAC_INT_ENABLE_REG			0x4
#define XGMAC_INT_SET_REG			0x8
#define XGMAC_IERR_U_INFO_REG			0xC
#define XGMAC_OVF_INFO_REG			0x10
#define XGMAC_OVF_CNT_REG			0x14
#define XGMAC_PORT_MODE_REG			0x40
#define XGMAC_CLK_ENABLE_REG			0x44
#define XGMAC_RESET_REG				0x48
#define XGMAC_LINK_CONTROL_REG			0x50
#define XGMAC_LINK_STATUS_REG			0x54
#define XGMAC_SPARE_REG				0xC0
#define XGMAC_SPARE_CNT_REG			0xC4

#define XGMAC_MAC_ENABLE_REG			0x100
#define XGMAC_MAC_CONTROL_REG			0x104
#define XGMAC_MAC_IPG_REG			0x120
#define XGMAC_MAC_MSG_CRC_EN_REG		0x124
#define XGMAC_MAC_MSG_IMG_REG			0x128
#define XGMAC_MAC_MSG_FC_CFG_REG		0x12C
#define XGMAC_MAC_MSG_TC_CFG_REG		0x130
#define XGMAC_MAC_PAD_SIZE_REG			0x134
#define XGMAC_MAC_MIN_PKT_SIZE_REG		0x138
#define XGMAC_MAC_MAX_PKT_SIZE_REG		0x13C
#define XGMAC_MAC_PAUSE_CTRL_REG		0x160
#define XGMAC_MAC_PAUSE_TIME_REG		0x164
#define XGMAC_MAC_PAUSE_GAP_REG			0x168
#define XGMAC_MAC_PAUSE_LOCAL_MAC_H_REG		0x16C
#define XGMAC_MAC_PAUSE_LOCAL_MAC_L_REG		0x170
#define XGMAC_MAC_PAUSE_PEER_MAC_H_REG		0x174
#define XGMAC_MAC_PAUSE_PEER_MAC_L_REG		0x178
#define XGMAC_MAC_PFC_PRI_EN_REG		0x17C
#define XGMAC_MAC_1588_CTRL_REG			0x180
#define XGMAC_MAC_1588_TX_PORT_DLY_REG		0x184
#define XGMAC_MAC_1588_RX_PORT_DLY_REG		0x188
#define XGMAC_MAC_1588_ASYM_DLY_REG		0x18C
#define XGMAC_MAC_1588_ADJUST_CFG_REG		0x190
#define XGMAC_MAC_Y1731_ETH_TYPE_REG		0x194
#define XGMAC_MAC_MIB_CONTROL_REG		0x198
#define XGMAC_MAC_WAN_RATE_ADJUST_REG		0x19C
#define XGMAC_MAC_TX_ERR_MARK_REG		0x1A0
#define XGMAC_MAC_TX_LF_RF_CONTROL_REG		0x1A4
#define XGMAC_MAC_RX_LF_RF_STATUS_REG		0x1A8
#define XGMAC_MAC_TX_RUNT_PKT_CNT_REG		0x1C0
#define XGMAC_MAC_RX_RUNT_PKT_CNT_REG		0x1C4
#define XGMAC_MAC_RX_PREAM_ERR_PKT_CNT_REG	0x1C8
#define XGMAC_MAC_TX_LF_RF_TERM_PKT_CNT_REG	0x1CC
#define XGMAC_MAC_TX_SN_MISMATCH_PKT_CNT_REG	0x1D0
#define XGMAC_MAC_RX_ERR_MSG_CNT_REG		0x1D4
#define XGMAC_MAC_RX_ERR_EFD_CNT_REG		0x1D8
#define XGMAC_MAC_ERR_INFO_REG			0x1DC
#define XGMAC_MAC_DBG_INFO_REG			0x1E0

#define XGMAC_PCS_BASER_SYNC_THD_REG		0x330
#define XGMAC_PCS_STATUS1_REG			0x404
#define XGMAC_PCS_BASER_STATUS1_REG		0x410
#define XGMAC_PCS_BASER_STATUS2_REG		0x414
#define XGMAC_PCS_BASER_SEEDA_0_REG		0x420
#define XGMAC_PCS_BASER_SEEDA_1_REG		0x424
#define XGMAC_PCS_BASER_SEEDB_0_REG		0x428
#define XGMAC_PCS_BASER_SEEDB_1_REG		0x42C
#define XGMAC_PCS_BASER_TEST_CONTROL_REG	0x430
#define XGMAC_PCS_BASER_TEST_ERR_CNT_REG	0x434
#define XGMAC_PCS_DBG_INFO_REG			0x4C0
#define XGMAC_PCS_DBG_INFO1_REG			0x4C4
#define XGMAC_PCS_DBG_INFO2_REG			0x4C8
#define XGMAC_PCS_DBG_INFO3_REG			0x4CC

#define XGMAC_PMA_ENABLE_REG			0x700
#define XGMAC_PMA_CONTROL_REG			0x704
#define XGMAC_PMA_SIGNAL_STATUS_REG		0x708
#define XGMAC_PMA_DBG_INFO_REG			0x70C
#define XGMAC_PMA_FEC_ABILITY_REG		0x740
#define XGMAC_PMA_FEC_CONTROL_REG		0x744
#define XGMAC_PMA_FEC_CORR_BLOCK_CNT__REG	0x750
#define XGMAC_PMA_FEC_UNCORR_BLOCK_CNT__REG	0x760

#define XGMAC_TX_PKTS_FRAGMENT			0x0000
#define XGMAC_TX_PKTS_UNDERSIZE			0x0008
#define XGMAC_TX_PKTS_UNDERMIN			0x0010
#define XGMAC_TX_PKTS_64OCTETS			0x0018
#define XGMAC_TX_PKTS_65TO127OCTETS		0x0020
#define XGMAC_TX_PKTS_128TO255OCTETS		0x0028
#define XGMAC_TX_PKTS_256TO511OCTETS		0x0030
#define XGMAC_TX_PKTS_512TO1023OCTETS		0x0038
#define XGMAC_TX_PKTS_1024TO1518OCTETS		0x0040
#define XGMAC_TX_PKTS_1519TOMAXOCTETS		0x0048
#define XGMAC_TX_PKTS_1519TOMAXOCTETSOK		0x0050
#define XGMAC_TX_PKTS_OVERSIZE			0x0058
#define XGMAC_TX_PKTS_JABBER			0x0060
#define XGMAC_TX_GOODPKTS			0x0068
#define XGMAC_TX_GOODOCTETS			0x0070
#define XGMAC_TX_TOTAL_PKTS			0x0078
#define XGMAC_TX_TOTALOCTETS			0x0080
#define XGMAC_TX_UNICASTPKTS			0x0088
#define XGMAC_TX_MULTICASTPKTS			0x0090
#define XGMAC_TX_BROADCASTPKTS			0x0098
#define XGMAC_TX_PRI0PAUSEPKTS			0x00a0
#define XGMAC_TX_PRI1PAUSEPKTS			0x00a8
#define XGMAC_TX_PRI2PAUSEPKTS			0x00b0
#define XGMAC_TX_PRI3PAUSEPKTS			0x00b8
#define XGMAC_TX_PRI4PAUSEPKTS			0x00c0
#define XGMAC_TX_PRI5PAUSEPKTS			0x00c8
#define XGMAC_TX_PRI6PAUSEPKTS			0x00d0
#define XGMAC_TX_PRI7PAUSEPKTS			0x00d8
#define XGMAC_TX_MACCTRLPKTS			0x00e0
#define XGMAC_TX_1731PKTS			0x00e8
#define XGMAC_TX_1588PKTS			0x00f0
#define XGMAC_RX_FROMAPPGOODPKTS		0x00f8
#define XGMAC_RX_FROMAPPBADPKTS			0x0100
#define XGMAC_TX_ERRALLPKTS			0x0108

#define XGMAC_RX_PKTS_FRAGMENT			0x0110
#define XGMAC_RX_PKTSUNDERSIZE			0x0118
#define XGMAC_RX_PKTS_UNDERMIN			0x0120
#define XGMAC_RX_PKTS_64OCTETS			0x0128
#define XGMAC_RX_PKTS_65TO127OCTETS		0x0130
#define XGMAC_RX_PKTS_128TO255OCTETS		0x0138
#define XGMAC_RX_PKTS_256TO511OCTETS		0x0140
#define XGMAC_RX_PKTS_512TO1023OCTETS		0x0148
#define XGMAC_RX_PKTS_1024TO1518OCTETS		0x0150
#define XGMAC_RX_PKTS_1519TOMAXOCTETS		0x0158
#define XGMAC_RX_PKTS_1519TOMAXOCTETSOK		0x0160
#define XGMAC_RX_PKTS_OVERSIZE			0x0168
#define XGMAC_RX_PKTS_JABBER			0x0170
#define XGMAC_RX_GOODPKTS			0x0178
#define XGMAC_RX_GOODOCTETS			0x0180
#define XGMAC_RX_TOTAL_PKTS			0x0188
#define XGMAC_RX_TOTALOCTETS			0x0190
#define XGMAC_RX_UNICASTPKTS			0x0198
#define XGMAC_RX_MULTICASTPKTS			0x01a0
#define XGMAC_RX_BROADCASTPKTS			0x01a8
#define XGMAC_RX_PRI0PAUSEPKTS			0x01b0
#define XGMAC_RX_PRI1PAUSEPKTS			0x01b8
#define XGMAC_RX_PRI2PAUSEPKTS			0x01c0
#define XGMAC_RX_PRI3PAUSEPKTS			0x01c8
#define XGMAC_RX_PRI4PAUSEPKTS			0x01d0
#define XGMAC_RX_PRI5PAUSEPKTS			0x01d8
#define XGMAC_RX_PRI6PAUSEPKTS			0x01e0
#define XGMAC_RX_PRI7PAUSEPKTS			0x01e8
#define XGMAC_RX_MACCTRLPKTS			0x01f0
#define XGMAC_TX_SENDAPPGOODPKTS		0x01f8
#define XGMAC_TX_SENDAPPBADPKTS			0x0200
#define XGMAC_RX_1731PKTS			0x0208
#define XGMAC_RX_SYMBOLERRPKTS			0x0210
#define XGMAC_RX_FCSERRPKTS			0x0218

#define XGMAC_TRX_CORE_SRST_M			0x2080

#define DSAF_SRAM_INIT_OVER_M 0xff
#define DSAFV2_SRAM_INIT_OVER_M 0x3ff
#define DSAF_SRAM_INIT_OVER_S 0

#define DSAF_CFG_EN_S 0
#define DSAF_CFG_TC_MODE_S 1
#define DSAF_CFG_CRC_EN_S 2
#define DSAF_CFG_SBM_INIT_S 3
#define DSAF_CFG_MIX_MODE_S 4
#define DSAF_CFG_STP_MODE_S 5
#define DSAF_CFG_LOCA_ADDR_EN_S 6
#define DSAFV2_CFG_VLAN_TAG_MODE_S 17

#define DSAF_CNT_CLR_CE_S 0
#define DSAF_SNAP_EN_S 1

#define HNS_DSAF_PFC_UNIT_CNT_FOR_XGE 41
#define HNS_DSAF_PFC_UNIT_CNT_FOR_GE_1000 410
#define HNS_DSAF_PFC_UNIT_CNT_FOR_GE_2500 103

#define DSAF_PFC_UNINT_CNT_M ((1ULL << 9) - 1)
#define DSAF_PFC_UNINT_CNT_S 0

#define DSAF_PPE_QID_CFG_M 0xFF
#define DSAF_PPE_QID_CFG_S 0

#define DSAF_SW_PORT_TYPE_M 3
#define DSAF_SW_PORT_TYPE_S 0

#define DSAF_STP_PORT_TYPE_M 7
#define DSAF_STP_PORT_TYPE_S 0

#define DSAF_INODE_IN_PORT_NUM_M 7
#define DSAF_INODE_IN_PORT_NUM_S 0
#define DSAFV2_INODE_IN_PORT1_NUM_M (7ULL << 3)
#define DSAFV2_INODE_IN_PORT1_NUM_S 3
#define DSAFV2_INODE_IN_PORT2_NUM_M (7ULL << 6)
#define DSAFV2_INODE_IN_PORT2_NUM_S 6
#define DSAFV2_INODE_IN_PORT3_NUM_M (7ULL << 9)
#define DSAFV2_INODE_IN_PORT3_NUM_S 9
#define DSAFV2_INODE_IN_PORT4_NUM_M (7ULL << 12)
#define DSAFV2_INODE_IN_PORT4_NUM_S 12
#define DSAFV2_INODE_IN_PORT5_NUM_M (7ULL << 15)
#define DSAFV2_INODE_IN_PORT5_NUM_S 15

#define HNS_DSAF_I4TC_CFG 0x18688688
#define HNS_DSAF_I8TC_CFG 0x18FAC688

#define DSAF_SBM_CFG_SHCUT_EN_S 0
#define DSAF_SBM_CFG_EN_S 1
#define DSAF_SBM_CFG_MIB_EN_S 2
#define DSAF_SBM_CFG_ECC_INVERT_EN_S 3

#define DSAF_SBM_CFG0_VC1_MAX_BUF_NUM_S 0
#define DSAF_SBM_CFG0_VC1_MAX_BUF_NUM_M (((1ULL << 10) - 1) << 0)
#define DSAF_SBM_CFG0_VC0_MAX_BUF_NUM_S 10
#define DSAF_SBM_CFG0_VC0_MAX_BUF_NUM_M (((1ULL << 10) - 1) << 10)
#define DSAF_SBM_CFG0_COM_MAX_BUF_NUM_S 20
#define DSAF_SBM_CFG0_COM_MAX_BUF_NUM_M (((1ULL << 11) - 1) << 20)

#define DSAF_SBM_CFG1_TC4_MAX_BUF_NUM_S 0
#define DSAF_SBM_CFG1_TC4_MAX_BUF_NUM_M (((1ULL << 10) - 1) << 0)
#define DSAF_SBM_CFG1_TC0_MAX_BUF_NUM_S 10
#define DSAF_SBM_CFG1_TC0_MAX_BUF_NUM_M (((1ULL << 10) - 1) << 10)

#define DSAF_SBM_CFG2_SET_BUF_NUM_S 0
#define DSAF_SBM_CFG2_SET_BUF_NUM_M (((1ULL << 10) - 1) << 0)
#define DSAF_SBM_CFG2_RESET_BUF_NUM_S 10
#define DSAF_SBM_CFG2_RESET_BUF_NUM_M (((1ULL << 10) - 1) << 10)

#define DSAF_SBM_CFG3_SET_BUF_NUM_NO_PFC_S 0
#define DSAF_SBM_CFG3_SET_BUF_NUM_NO_PFC_M (((1ULL << 10) - 1) << 0)
#define DSAF_SBM_CFG3_RESET_BUF_NUM_NO_PFC_S 10
#define DSAF_SBM_CFG3_RESET_BUF_NUM_NO_PFC_M (((1ULL << 10) - 1) << 10)

#define DSAFV2_SBM_CFG0_VC1_MAX_BUF_NUM_S 0
#define DSAFV2_SBM_CFG0_VC1_MAX_BUF_NUM_M (((1ULL << 9) - 1) << 0)
#define DSAFV2_SBM_CFG0_VC0_MAX_BUF_NUM_S 9
#define DSAFV2_SBM_CFG0_VC0_MAX_BUF_NUM_M (((1ULL << 9) - 1) << 9)
#define DSAFV2_SBM_CFG0_COM_MAX_BUF_NUM_S 18
#define DSAFV2_SBM_CFG0_COM_MAX_BUF_NUM_M (((1ULL << 10) - 1) << 18)

#define DSAFV2_SBM_CFG1_TC4_MAX_BUF_NUM_S 0
#define DSAFV2_SBM_CFG1_TC4_MAX_BUF_NUM_M (((1ULL << 9) - 1) << 0)
#define DSAFV2_SBM_CFG1_TC0_MAX_BUF_NUM_S 9
#define DSAFV2_SBM_CFG1_TC0_MAX_BUF_NUM_M (((1ULL << 9) - 1) << 9)

#define DSAFV2_SBM_CFG2_SET_BUF_NUM_S 0
#define DSAFV2_SBM_CFG2_SET_BUF_NUM_M (((1ULL << 9) - 1) << 0)
#define DSAFV2_SBM_CFG2_RESET_BUF_NUM_S 9
#define DSAFV2_SBM_CFG2_RESET_BUF_NUM_M (((1ULL << 9) - 1) << 9)

#define DSAFV2_SBM_CFG3_SET_BUF_NUM_NO_PFC_S 0
#define DSAFV2_SBM_CFG3_SET_BUF_NUM_NO_PFC_M (((1ULL << 9) - 1) << 0)
#define DSAFV2_SBM_CFG3_RESET_BUF_NUM_NO_PFC_S 9
#define DSAFV2_SBM_CFG3_RESET_BUF_NUM_NO_PFC_M (((1ULL << 9) - 1) << 9)

#define DSAFV2_SBM_CFG4_SET_BUF_NUM_NO_PFC_S 0
#define DSAFV2_SBM_CFG4_SET_BUF_NUM_NO_PFC_M (((1ULL << 9) - 1) << 0)
#define DSAFV2_SBM_CFG4_RESET_BUF_NUM_NO_PFC_S 9
#define DSAFV2_SBM_CFG4_RESET_BUF_NUM_NO_PFC_M (((1ULL << 9) - 1) << 9)

#define DSAF_TBL_TCAM_ADDR_S 0
#define DSAF_TBL_TCAM_ADDR_M ((1ULL << 9) - 1)

#define DSAF_TBL_LINE_ADDR_S 0
#define DSAF_TBL_LINE_ADDR_M ((1ULL << 15) - 1)

#define DSAF_TBL_MCAST_CFG4_VM128_112_S 0
#define DSAF_TBL_MCAST_CFG4_VM128_112_M (((1ULL << 7) - 1) << 0)
#define DSAF_TBL_MCAST_CFG4_ITEM_VLD_S 7
#define DSAF_TBL_MCAST_CFG4_OLD_EN_S 8

#define DSAF_TBL_MCAST_CFG0_XGE5_0_S 0
#define DSAF_TBL_MCAST_CFG0_XGE5_0_M (((1ULL << 6) - 1) << 0)
#define DSAF_TBL_MCAST_CFG0_VM25_0_S 6
#define DSAF_TBL_MCAST_CFG0_VM25_0_M (((1ULL << 26) - 1) << 6)

#define DSAF_TBL_UCAST_CFG1_OUT_PORT_S 0
#define DSAF_TBL_UCAST_CFG1_OUT_PORT_M (((1ULL << 8) - 1) << 0)
#define DSAF_TBL_UCAST_CFG1_DVC_S 8
#define DSAF_TBL_UCAST_CFG1_MAC_DISCARD_S 9
#define DSAF_TBL_UCAST_CFG1_ITEM_VLD_S 10
#define DSAF_TBL_UCAST_CFG1_OLD_EN_S 11

#define DSAF_TBL_LINE_CFG_OUT_PORT_S 0
#define DSAF_TBL_LINE_CFG_OUT_PORT_M (((1ULL << 8) - 1) << 0)
#define DSAF_TBL_LINE_CFG_DVC_S 8
#define DSAF_TBL_LINE_CFG_MAC_DISCARD_S 9

#define DSAF_TBL_PUL_OLD_RSLT_RE_S 0
#define DSAF_TBL_PUL_MCAST_VLD_S 1
#define DSAF_TBL_PUL_TCAM_DATA_VLD_S 2
#define DSAF_TBL_PUL_UCAST_VLD_S 3
#define DSAF_TBL_PUL_LINE_VLD_S 4
#define DSAF_TBL_PUL_TCAM_LOAD_S 5
#define DSAF_TBL_PUL_LINE_LOAD_S 6

#define DSAF_TBL_DFX_LINE_LKUP_NUM_EN_S 0
#define DSAF_TBL_DFX_UC_LKUP_NUM_EN_S 1
#define DSAF_TBL_DFX_MC_LKUP_NUM_EN_S 2
#define DSAF_TBL_DFX_BC_LKUP_NUM_EN_S 3
#define DSAF_TBL_DFX_RAM_ERR_INJECT_EN_S 4

#define DSAF_VOQ_BP_ALL_DOWNTHRD_S 0
#define DSAF_VOQ_BP_ALL_DOWNTHRD_M (((1ULL << 10) - 1) << 0)
#define DSAF_VOQ_BP_ALL_UPTHRD_S 10
#define DSAF_VOQ_BP_ALL_UPTHRD_M (((1ULL << 10) - 1) << 10)

#define DSAF_XGE_GE_WORK_MODE_S 0
#define DSAF_XGE_GE_LOOPBACK_S 1

#define DSAF_FC_XGE_TX_PAUSE_S 0
#define DSAF_REGS_XGE_CNT_CAR_S 1

#define PPE_CFG_QID_MODE_DEF_QID_S	0
#define PPE_CFG_QID_MODE_DEF_QID_M	(0xff << PPE_CFG_QID_MODE_DEF_QID_S)

#define PPE_CFG_QID_MODE_CF_QID_MODE_S	8
#define PPE_CFG_QID_MODE_CF_QID_MODE_M	(0x7 << PPE_CFG_QID_MODE_CF_QID_MODE_S)

#define PPEV2_CFG_RSS_TBL_4N0_S	0
#define PPEV2_CFG_RSS_TBL_4N0_M	(((1UL << 5) - 1) << PPEV2_CFG_RSS_TBL_4N0_S)

#define PPEV2_CFG_RSS_TBL_4N1_S	8
#define PPEV2_CFG_RSS_TBL_4N1_M	(((1UL << 5) - 1) << PPEV2_CFG_RSS_TBL_4N1_S)

#define PPEV2_CFG_RSS_TBL_4N2_S	16
#define PPEV2_CFG_RSS_TBL_4N2_M	(((1UL << 5) - 1) << PPEV2_CFG_RSS_TBL_4N2_S)

#define PPEV2_CFG_RSS_TBL_4N3_S	24
#define PPEV2_CFG_RSS_TBL_4N3_M	(((1UL << 5) - 1) << PPEV2_CFG_RSS_TBL_4N3_S)

#define PPE_CNT_CLR_CE_B	0
#define PPE_CNT_CLR_SNAP_EN_B	1

#define PPE_COMMON_CNT_CLR_CE_B	0
#define PPE_COMMON_CNT_CLR_SNAP_EN_B	1
#define RCB_COM_TSO_MODE_B	0
#define RCB_COM_CFG_FNA_B	1
#define RCB_COM_CFG_FA_B	0

#define GMAC_DUPLEX_TYPE_B 0

#define GMAC_FC_TX_TIMER_S 0
#define GMAC_FC_TX_TIMER_M 0xffff

#define GMAC_MAX_FRM_SIZE_S 0
#define GMAC_MAX_FRM_SIZE_M 0xffff

#define GMAC_PORT_MODE_S	0
#define GMAC_PORT_MODE_M	0xf

#define GMAC_RGMII_1000M_DELAY_B	4
#define GMAC_MII_TX_EDGE_SEL_B		5
#define GMAC_FIFO_ERR_AUTO_RST_B	6
#define GMAC_DBG_CLK_LOS_MSK_B		7

#define GMAC_PORT_RX_EN_B	1
#define GMAC_PORT_TX_EN_B	2

#define GMAC_PAUSE_EN_RX_FDFC_B 0
#define GMAC_PAUSE_EN_TX_FDFC_B 1
#define GMAC_PAUSE_EN_TX_HDFC_B 2

#define GMAC_SHORT_RUNTS_THR_S 0
#define GMAC_SHORT_RUNTS_THR_M 0x1f

#define GMAC_AN_NEG_STAT_FD_B		5
#define GMAC_AN_NEG_STAT_HD_B		6
#define GMAC_AN_NEG_STAT_RF1_DUPLIEX_B	12
#define GMAC_AN_NEG_STAT_RF2_B		13

#define GMAC_AN_NEG_STAT_NP_LNK_OK_B	15
#define GMAC_AN_NEG_STAT_RX_SYNC_OK_B	20
#define GMAC_AN_NEG_STAT_AN_DONE_B	21

#define GMAC_AN_NEG_STAT_PS_S		7
#define GMAC_AN_NEG_STAT_PS_M		(0x3 << GMAC_AN_NEG_STAT_PS_S)

#define GMAC_AN_NEG_STAT_SPEED_S	10
#define GMAC_AN_NEG_STAT_SPEED_M	(0x3 << GMAC_AN_NEG_STAT_SPEED_S)

#define GMAC_TX_AN_EN_B		5
#define GMAC_TX_CRC_ADD_B	6
#define GMAC_TX_PAD_EN_B	7

#define GMAC_LINE_LOOPBACK_B	0

#define GMAC_LP_REG_CF_EXT_DRV_LP_B	1
#define GMAC_LP_REG_CF2MI_LP_EN_B	2

#define GMAC_MODE_CHANGE_EB_B	0

#define GMAC_RECV_CTRL_STRIP_PAD_EN_B	3
#define GMAC_RECV_CTRL_RUNT_PKT_EN_B	4

#define GMAC_TX_LOOP_PKT_HIG_PRI_B	0
#define GMAC_TX_LOOP_PKT_EN_B		1

#define XGMAC_PORT_MODE_TX_S		0x0
#define XGMAC_PORT_MODE_TX_M		(0x3 << XGMAC_PORT_MODE_TX_S)
#define XGMAC_PORT_MODE_TX_40G_B	0x3
#define XGMAC_PORT_MODE_RX_S		0x4
#define XGMAC_PORT_MODE_RX_M		(0x3 << XGMAC_PORT_MODE_RX_S)
#define XGMAC_PORT_MODE_RX_40G_B	0x7

#define XGMAC_ENABLE_TX_B		0
#define XGMAC_ENABLE_RX_B		1

#define XGMAC_CTL_TX_FCS_B		0
#define XGMAC_CTL_TX_PAD_B		1
#define XGMAC_CTL_TX_PREAMBLE_TRANS_B	3
#define XGMAC_CTL_TX_UNDER_MIN_ERR_B	4
#define XGMAC_CTL_TX_TRUNCATE_B		5
#define XGMAC_CTL_TX_1588_B		8
#define XGMAC_CTL_TX_1731_B		9
#define XGMAC_CTL_TX_PFC_B		10
#define XGMAC_CTL_RX_FCS_B		16
#define XGMAC_CTL_RX_FCS_STRIP_B	17
#define XGMAC_CTL_RX_PREAMBLE_TRANS_B	19
#define XGMAC_CTL_RX_UNDER_MIN_ERR_B	20
#define XGMAC_CTL_RX_TRUNCATE_B		21
#define XGMAC_CTL_RX_1588_B		24
#define XGMAC_CTL_RX_1731_B		25
#define XGMAC_CTL_RX_PFC_B		26

#define XGMAC_PMA_FEC_CTL_TX_B		0
#define XGMAC_PMA_FEC_CTL_RX_B		1
#define XGMAC_PMA_FEC_CTL_ERR_EN	2
#define XGMAC_PMA_FEC_CTL_ERR_SH	3

#define XGMAC_PAUSE_CTL_TX_B		0
#define XGMAC_PAUSE_CTL_RX_B		1
#define XGMAC_PAUSE_CTL_RSP_MODE_B	2
#define XGMAC_PAUSE_CTL_TX_XOFF_B	3

static inline void dsaf_write_reg(void __iomem *base, u32 reg, u32 value)
{
	u8 __iomem *reg_addr = ACCESS_ONCE(base);

	writel(value, reg_addr + reg);
}

#define dsaf_write_dev(a, reg, value) \
	dsaf_write_reg((a)->io_base, (reg), (value))

static inline u32 dsaf_read_reg(u8 __iomem *base, u32 reg)
{
	u8 __iomem *reg_addr = ACCESS_ONCE(base);

	return readl(reg_addr + reg);
}

#define dsaf_read_dev(a, reg) \
	dsaf_read_reg((a)->io_base, (reg))

#define dsaf_set_field(origin, mask, shift, val) \
	do { \
		(origin) &= (~(mask)); \
		(origin) |= (((val) << (shift)) & (mask)); \
	} while (0)

#define dsaf_set_bit(origin, shift, val) \
	dsaf_set_field((origin), (1ull << (shift)), (shift), (val))

static inline void dsaf_set_reg_field(void __iomem *base, u32 reg, u32 mask,
				      u32 shift, u32 val)
{
	u32 origin = dsaf_read_reg(base, reg);

	dsaf_set_field(origin, mask, shift, val);
	dsaf_write_reg(base, reg, origin);
}

#define dsaf_set_dev_field(dev, reg, mask, shift, val) \
	dsaf_set_reg_field((dev)->io_base, (reg), (mask), (shift), (val))

#define dsaf_set_dev_bit(dev, reg, bit, val) \
	dsaf_set_reg_field((dev)->io_base, (reg), (1ull << (bit)), (bit), (val))

#define dsaf_get_field(origin, mask, shift) (((origin) & (mask)) >> (shift))

#define dsaf_get_bit(origin, shift) \
	dsaf_get_field((origin), (1ull << (shift)), (shift))

static inline u32 dsaf_get_reg_field(void __iomem *base, u32 reg, u32 mask,
				     u32 shift)
{
	u32 origin;

	origin = dsaf_read_reg(base, reg);
	return dsaf_get_field(origin, mask, shift);
}

#define dsaf_get_dev_field(dev, reg, mask, shift) \
	dsaf_get_reg_field((dev)->io_base, (reg), (mask), (shift))

#define dsaf_get_dev_bit(dev, reg, bit) \
	dsaf_get_reg_field((dev)->io_base, (reg), (1ull << (bit)), (bit))

#define dsaf_write_b(addr, data)\
	writeb((data), (__iomem unsigned char *)(addr))
#define dsaf_read_b(addr)\
	readb((__iomem unsigned char *)(addr))

#define hns_mac_reg_read64(drv, offset) \
	readq((__iomem void *)(((u8 *)(drv)->io_base + 0xc00 + (offset))))

#endif	/* _DSAF_REG_H */
