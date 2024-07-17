/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright(c) 2008 - 2010 Realtek Corporation. All rights reserved.
 *
 * Contact Information: wlanfae <wlanfae@realtek.com>
 */
#ifndef _RTL819XU_HTTYPE_H_
#define _RTL819XU_HTTYPE_H_

#define MIMO_PS_STATIC				0

#define sHTCLng	4

enum ht_channel_width {
	HT_CHANNEL_WIDTH_20 = 0,
	HT_CHANNEL_WIDTH_20_40 = 1,
};

enum ht_extchnl_offset {
	HT_EXTCHNL_OFFSET_NO_EXT = 0,
	HT_EXTCHNL_OFFSET_UPPER = 1,
	HT_EXTCHNL_OFFSET_NO_DEF = 2,
	HT_EXTCHNL_OFFSET_LOWER = 3,
};

struct ht_capab_ele {
	u8	adv_coding:1;
	u8	chl_width:1;
	u8	mimo_pwr_save:2;
	u8	green_field:1;
	u8	short_gi_20mhz:1;
	u8	short_gi_40mhz:1;
	u8	tx_stbc:1;
	u8	rx_stbc:2;
	u8	delay_ba:1;
	u8	max_amsdu_size:1;
	u8	dss_cck:1;
	u8	PSMP:1;
	u8	Rsvd1:1;
	u8	lsig_txop_protect:1;

	u8	max_rx_ampdu_factor:2;
	u8	mpdu_density:3;
	u8	Rsvd2:3;

	u8	MCS[16];

	u16	ext_ht_cap_info;

	u8	TxBFCap[4];

	u8	ASCap;

} __packed;

struct ht_info_ele {
	u8	ControlChl;

	u8	ExtChlOffset:2;
	u8	RecommemdedTxWidth:1;
	u8	RIFS:1;
	u8	PSMPAccessOnly:1;
	u8	SrvIntGranularity:3;

	u8	opt_mode:2;
	u8	NonGFDevPresent:1;
	u8	Revd1:5;
	u8	Revd2:8;

	u8	Rsvd3:6;
	u8	DualBeacon:1;
	u8	DualCTSProtect:1;

	u8	SecondaryBeacon:1;
	u8	LSigTxopProtectFull:1;
	u8	PcoActive:1;
	u8	PcoPhase:1;
	u8	Rsvd4:4;

	u8	BasicMSC[16];
} __packed;

enum ht_spec_ver {
	HT_SPEC_VER_IEEE = 0,
	HT_SPEC_VER_EWC = 1,
};

enum ht_aggre_mode {
	HT_AGG_AUTO = 0,
	HT_AGG_FORCE_ENABLE = 1,
	HT_AGG_FORCE_DISABLE = 2,
};

struct rt_hi_throughput {
	u8 enable_ht;
	u8 current_ht_support;
	u8 cur_bw_40mhz;
	u8 cur_short_gi_40mhz;
	u8 cur_short_gi_20mhz;
	enum ht_spec_ver peer_ht_spec_ver;
	struct ht_capab_ele self_ht_cap;
	u8 peer_ht_cap_buf[32];
	u8 peer_ht_info_buf[32];
	u8 ampdu_enable;
	u8 current_ampdu_enable;
	u8 ampdu_factor;
	u8 current_ampdu_factor;
	u8 current_mpdu_density;
	u8 forced_ampdu_factor;
	u8 forced_mpdu_density;
	u8 current_op_mode;
	enum ht_extchnl_offset cur_sta_ext_chnl_offset;
	u8 cur_tx_bw40mhz;
	u8 sw_bw_in_progress;
	u8 current_rt2rt_aggregation;
	u8 current_rt2rt_long_slot_time;
	u8 sz_rt2rt_agg_buf[10];
	u8 cur_rx_reorder_enable;
	u8 rx_reorder_win_size;
	u8 rx_reorder_pending_time;
	u16 rx_reorder_drop_counter;
	u8 iot_peer;
	u32 iot_action;
	u8 iot_ra_func;
} __packed;

struct bss_ht {
	u8 bd_support_ht;

	u8 bd_ht_cap_buf[32];
	u16 bd_ht_cap_len;
	u8 bd_ht_info_buf[32];
	u16 bd_ht_info_len;

	enum ht_spec_ver bd_ht_spec_ver;
	enum ht_channel_width bd_bandwidth;

	u8 bd_rt2rt_aggregation;
	u8 bd_rt2rt_long_slot_time;
	u8 rt2rt_ht_mode;
	u8 bd_ht_1r;
};

extern u8 MCS_FILTER_ALL[16];
extern u8 MCS_FILTER_1SS[16];

#define	RATE_ADPT_1SS_MASK		0xFF
#define	RATE_ADPT_2SS_MASK		0xF0
#define	RATE_ADPT_MCS32_MASK		0x01

enum ht_aggre_size {
	HT_AGG_SIZE_8K = 0,
	HT_AGG_SIZE_16K = 1,
	HT_AGG_SIZE_32K = 2,
	HT_AGG_SIZE_64K = 3,
};

enum ht_iot_peer {
	HT_IOT_PEER_UNKNOWN = 0,
	HT_IOT_PEER_REALTEK = 1,
	HT_IOT_PEER_REALTEK_92SE = 2,
	HT_IOT_PEER_BROADCOM = 3,
	HT_IOT_PEER_RALINK = 4,
	HT_IOT_PEER_ATHEROS = 5,
	HT_IOT_PEER_CISCO = 6,
	HT_IOT_PEER_MARVELL = 7,
	HT_IOT_PEER_92U_SOFTAP = 8,
	HT_IOT_PEER_SELF_SOFTAP = 9,
	HT_IOT_PEER_AIRGO = 10,
	HT_IOT_PEER_MAX = 11,
};

enum ht_iot_action {
	HT_IOT_ACT_TX_USE_AMSDU_4K = 0x00000001,
	HT_IOT_ACT_TX_USE_AMSDU_8K = 0x00000002,
	HT_IOT_ACT_DISABLE_MCS14 = 0x00000004,
	HT_IOT_ACT_DISABLE_MCS15 = 0x00000008,
	HT_IOT_ACT_DISABLE_ALL_2SS = 0x00000010,
	HT_IOT_ACT_DISABLE_EDCA_TURBO = 0x00000020,
	HT_IOT_ACT_MGNT_USE_CCK_6M = 0x00000040,
	HT_IOT_ACT_CDD_FSYNC = 0x00000080,
	HT_IOT_ACT_PURE_N_MODE = 0x00000100,
	HT_IOT_ACT_FORCED_CTS2SELF = 0x00000200,
	HT_IOT_ACT_FORCED_RTS = 0x00000400,
	HT_IOT_ACT_AMSDU_ENABLE = 0x00000800,
	HT_IOT_ACT_REJECT_ADDBA_REQ = 0x00001000,
	HT_IOT_ACT_ALLOW_PEER_AGG_ONE_PKT = 0x00002000,
	HT_IOT_ACT_EDCA_BIAS_ON_RX = 0x00004000,

	HT_IOT_ACT_HYBRID_AGGREGATION = 0x00010000,
	HT_IOT_ACT_DISABLE_SHORT_GI = 0x00020000,
	HT_IOT_ACT_DISABLE_HIGH_POWER = 0x00040000,
	HT_IOT_ACT_DISABLE_TX_40_MHZ = 0x00080000,
	HT_IOT_ACT_TX_NO_AGGREGATION = 0x00100000,
	HT_IOT_ACT_DISABLE_TX_2SS = 0x00200000,

	HT_IOT_ACT_MID_HIGHPOWER = 0x00400000,
	HT_IOT_ACT_NULL_DATA_POWER_SAVING = 0x00800000,

	HT_IOT_ACT_DISABLE_CCK_RATE = 0x01000000,
	HT_IOT_ACT_FORCED_ENABLE_BE_TXOP = 0x02000000,
	HT_IOT_ACT_WA_IOT_Broadcom = 0x04000000,

	HT_IOT_ACT_DISABLE_RX_40MHZ_SHORT_GI = 0x08000000,

};

enum ht_iot_rafunc {
	HT_IOT_RAFUNC_DISABLE_ALL = 0x00,
	HT_IOT_RAFUNC_PEER_1R = 0x01,
	HT_IOT_RAFUNC_TX_AMSDU = 0x02,
};

enum rt_ht_capability {
	RT_HT_CAP_USE_TURBO_AGGR = 0x01,
	RT_HT_CAP_USE_LONG_PREAMBLE = 0x02,
	RT_HT_CAP_USE_AMPDU = 0x04,
	RT_HT_CAP_USE_WOW = 0x8,
	RT_HT_CAP_USE_SOFTAP = 0x10,
	RT_HT_CAP_USE_92SE = 0x20,
};

#endif
