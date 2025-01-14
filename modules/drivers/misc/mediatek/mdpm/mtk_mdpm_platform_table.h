/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 MediaTek Inc.
 * Author: Minghao Chou <minghao.chou@mediatek.com>
 */

#ifndef _MTK_MDPM_PLATFORM_TABLE_H_
#define _MTK_MDPM_PLATFORM_TABLE_H_

static struct tx_power mt6873_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6873[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6873[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6873[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6873[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6873[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6873[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6873[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6873[TX_NR_CC1_DBM],
	}
};

static struct mdpm_scenario mt6873_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6873[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_2G_IDLE",
		.scenario_power = &md_scen_power_6873[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_NON_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_2G_NON_IDLE",
		.scenario_power = &md_scen_power_6873[S_2G_NON_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_C2K_DATALINK",
		.scenario_power = &md_scen_power_6873[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_SHDR] = {
		.scenario_reg = 1 << 6,
		.scenario_name = "S_C2K_SHDR",
		.scenario_power = &md_scen_power_6873[S_C2K_SHDR],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_1X_TRAFFIC] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_C2K_1X_TRAFFIC",
		.scenario_power = &md_scen_power_6873[S_C2K_1X_TRAFFIC],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_PAGING] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_3G_TDD_PAGING",
		.scenario_power = &md_scen_power_6873[S_3G_TDD_PAGING],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_TALKING] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_3G_TDD_TALKING",
		.scenario_power = &md_scen_power_6873[S_3G_TDD_TALKING],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_DATALINK] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_3G_TDD_DATALINK",
		.scenario_power = &md_scen_power_6873[S_3G_TDD_DATALINK],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_3G_IDLE",
		.scenario_power = &md_scen_power_6873[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_WCDMA_TALKING] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_3G_WCDMA_TALKING",
		.scenario_power = &md_scen_power_6873[S_3G_WCDMA_TALKING],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_3G_1C",
		.scenario_power = &md_scen_power_6873[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_2C] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_3G_2C",
		.scenario_power = &md_scen_power_6873[S_3G_2C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6873[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 14,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6873[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6873[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_4G_3CC",
		.scenario_power = &md_scen_power_6873[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_4CC] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_4G_4CC",
		.scenario_power = &md_scen_power_6873[S_4G_4CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_5CC] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_4G_5CC",
		.scenario_power = &md_scen_power_6873[S_4G_5CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_1CC_2CC] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_1CC_2CC",
		.scenario_power = &md_scen_power_6873[S_5G_1CC_2CC],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_1CC_2CC_4G_4CC] = {
		.scenario_reg = 1 << 21 | 1 << 17,
		.scenario_name = "S_5G_1CC_2CC_4G_4CC",
		.scenario_power = &md_scen_power_6873[S_5G_1CC_2CC_4G_4CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_1CC_2CC_4G_1CC] = {
		.scenario_reg = 1 << 21 | 1 << 14,
		.scenario_name = "S_5G_1CC_2CC_4G_1CC",
		.scenario_power = &md_scen_power_6873[S_5G_1CC_2CC_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},


	[S_4G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_POS_URGENT",
		.scenario_power = &md_scen_power_6873[S_4G_POS_URGENT],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	}
};

static int mt6873_scen_priority[SCENARIO_NUM] = {
	S_5G_1CC_2CC_4G_1CC,
	S_5G_1CC_2CC_4G_4CC,
	S_5G_1CC_2CC,
	S_4G_5CC,
	S_4G_4CC,
	S_4G_3CC,
	S_4G_2CC,
	S_4G_1CC,
	S_3G_2C,
	S_3G_1C,
	S_3G_WCDMA_TALKING,
	S_C2K_SHDR,
	S_3G_TDD_DATALINK,
	S_3G_TDD_TALKING,
	S_C2K_DATALINK,
	S_C2K_1X_TRAFFIC,
	S_2G_NON_IDLE,
	S_4G_0D0U,
	S_3G_TDD_PAGING,
	S_3G_IDLE,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_POS_URGENT
};


static struct tx_power mt6893_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6893[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6893[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6893[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6893[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6893[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6893[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6893[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6893[TX_NR_CC1_DBM],
	}
};

static struct mdpm_scenario mt6893_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6893[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_2G_IDLE",
		.scenario_power = &md_scen_power_6893[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_NON_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_2G_NON_IDLE",
		.scenario_power = &md_scen_power_6893[S_2G_NON_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_C2K_DATALINK",
		.scenario_power = &md_scen_power_6893[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_SHDR] = {
		.scenario_reg = 1 << 6,
		.scenario_name = "S_C2K_SHDR",
		.scenario_power = &md_scen_power_6893[S_C2K_SHDR],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_1X_TRAFFIC] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_C2K_1X_TRAFFIC",
		.scenario_power = &md_scen_power_6893[S_C2K_1X_TRAFFIC],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_PAGING] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_3G_TDD_PAGING",
		.scenario_power = &md_scen_power_6893[S_3G_TDD_PAGING],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_TALKING] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_3G_TDD_TALKING",
		.scenario_power = &md_scen_power_6893[S_3G_TDD_TALKING],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_TDD_DATALINK] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_3G_TDD_DATALINK",
		.scenario_power = &md_scen_power_6893[S_3G_TDD_DATALINK],
		.tx_power_rat = {RAT_3GTDD, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_3G_IDLE",
		.scenario_power = &md_scen_power_6893[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_WCDMA_TALKING] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_3G_WCDMA_TALKING",
		.scenario_power = &md_scen_power_6893[S_3G_WCDMA_TALKING],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_3G_1C",
		.scenario_power = &md_scen_power_6893[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_2C] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_3G_2C",
		.scenario_power = &md_scen_power_6893[S_3G_2C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6893[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 14,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6893[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6893[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_4G_3CC",
		.scenario_power = &md_scen_power_6893[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_4CC] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_4G_4CC",
		.scenario_power = &md_scen_power_6893[S_4G_4CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_5CC] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_4G_5CC",
		.scenario_power = &md_scen_power_6893[S_4G_5CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_1CC_2CC] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_1CC_2CC",
		.scenario_power = &md_scen_power_6893[S_5G_1CC_2CC],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_1CC_2CC_4G_4CC] = {
		.scenario_reg = 1 << 21 | 1 << 17,
		.scenario_name = "S_5G_1CC_2CC_4G_4CC",
		.scenario_power = &md_scen_power_6893[S_5G_1CC_2CC_4G_4CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_1CC_2CC_4G_1CC] = {
		.scenario_reg = 1 << 21 | 1 << 14,
		.scenario_name = "S_5G_1CC_2CC_4G_1CC",
		.scenario_power = &md_scen_power_6893[S_5G_1CC_2CC_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},


	[S_4G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_POS_URGENT",
		.scenario_power = &md_scen_power_6893[S_4G_POS_URGENT],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	}
};

static int mt6893_scen_priority[SCENARIO_NUM] = {
	S_5G_1CC_2CC_4G_4CC,
	S_5G_1CC_2CC_4G_1CC,
	S_5G_1CC_2CC,
	S_4G_5CC,
	S_4G_4CC,
	S_4G_3CC,
	S_4G_2CC,
	S_4G_1CC,
	S_3G_2C,
	S_3G_1C,
	S_3G_WCDMA_TALKING,
	S_C2K_SHDR,
	S_3G_TDD_DATALINK,
	S_3G_TDD_TALKING,
	S_C2K_DATALINK,
	S_C2K_1X_TRAFFIC,
	S_2G_NON_IDLE,
	S_4G_0D0U,
	S_3G_TDD_PAGING,
	S_3G_IDLE,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_POS_URGENT
};


static struct tx_power mt6983_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6983[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6983[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6983[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6983[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6983[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6983_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6983[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_2G_IDLE_NON_IDLE",
		.scenario_power = &md_scen_power_6983[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_C2K",
		.scenario_power = &md_scen_power_6983[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_3G_IDLE_TALKING",
		.scenario_power = &md_scen_power_6983[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_3G_1C_2C",
		.scenario_power = &md_scen_power_6983[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6983[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6983[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6983[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6983[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6983[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6983[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = 1 << 19,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = 1 << 20,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2_3TG] = {
		.scenario_reg = 1 << 22,
		.scenario_name = "S_5G_FR1_FR2_3TG",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_FR2_3TG],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = 1 << 27,
		.scenario_name = "S_5G_FR1_FR2",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 23,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = 1 << 24,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 25,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6983[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = 1 << 26,
		.scenario_name = "S_5G_FR1_FR2_4G",
		.scenario_power = &md_scen_power_6983[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6983[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_4G, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}
};

static int mt6983_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_FR2_4G,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR1_FR2_3TG,
	S_5G_FR1_FR2,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_2CC_1TG,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_4G_3CC,
	S_5G_FR2_1CC_1TG,
	S_5G_FR1_1CC_1TG,
	S_3G_1C,
	S_4G_2CC,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_4G_1CC,
	S_C2K_DATALINK,
	S_3G_IDLE,
	S_2G_IDLE,
	S_4G_0D0U,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};


static struct tx_power mt6879_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6983[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6983[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6983[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6983[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6983[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6983[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6879_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6879[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_2G_IDLE_NON_IDLE",
		.scenario_power = &md_scen_power_6879[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_C2K",
		.scenario_power = &md_scen_power_6879[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_3G_IDLE_TALKING",
		.scenario_power = &md_scen_power_6879[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_3G_1C_2C",
		.scenario_power = &md_scen_power_6879[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6879[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6879[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6879[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6879[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6879[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6879[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = 1 << 19,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = 1 << 20,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2_3TG] = {
		.scenario_reg = 1 << 22,
		.scenario_name = "S_5G_FR1_FR2_3TG",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_FR2_3TG],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = 1 << 27,
		.scenario_name = "S_5G_FR1_FR2",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 23,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = 1 << 24,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 25,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6879[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = 1 << 26,
		.scenario_name = "S_5G_FR1_FR2_4G",
		.scenario_power = &md_scen_power_6879[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6879[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_4G, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}
};

static int mt6879_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_FR2_4G,
	S_5G_FR1_FR2,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR1_FR2_3TG,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_4G_3CC,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_2CC_1TG,
	S_5G_FR1_1CC_1TG,
	S_5G_FR2_1CC_1TG,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_4G_2CC,
	S_3G_1C,
	S_4G_1CC,
	S_3G_IDLE,
	S_C2K_DATALINK,
	S_2G_IDLE,
	S_4G_0D0U,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6895_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6895[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6895[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6895[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6895[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6895[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6895[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6895[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6895[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6895[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6895[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6895_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6895[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_2G_IDLE_NON_IDLE",
		.scenario_power = &md_scen_power_6895[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_C2K",
		.scenario_power = &md_scen_power_6895[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_3G_IDLE_TALKING",
		.scenario_power = &md_scen_power_6895[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_3G_1C_2C",
		.scenario_power = &md_scen_power_6895[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6895[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6895[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6895[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6895[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6895[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6895[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = 1 << 19,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = 1 << 20,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2_3TG] = {
		.scenario_reg = 1 << 22,
		.scenario_name = "S_5G_FR1_FR2_3TG",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_FR2_3TG],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = 1 << 27,
		.scenario_name = "S_5G_FR1_FR2",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 23,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = 1 << 24,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 25,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6895[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = 1 << 26,
		.scenario_name = "S_5G_FR1_FR2_4G",
		.scenario_power = &md_scen_power_6895[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6895[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_4G, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}
};

static int mt6895_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_FR2_4G,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_5G_FR1_FR2,
	S_5G_FR1_FR2_3TG,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR2_1CC_1TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_2CC_1TG,
	S_5G_FR1_1CC_1TG,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_4G_3CC,
	S_4G_2CC,
	S_4G_1CC,
	S_3G_1C,
	S_C2K_DATALINK,
	S_4G_0D0U,
	S_3G_IDLE,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6886_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6886[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6886[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6886[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6886[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6886[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6886[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6886[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6886[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6886[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6886[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6886_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6886[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_2G_IDLE_NON_IDLE",
		.scenario_power = &md_scen_power_6886[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_C2K",
		.scenario_power = &md_scen_power_6886[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_3G_IDLE_TALKING",
		.scenario_power = &md_scen_power_6886[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_1C] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_3G_1C_2C",
		.scenario_power = &md_scen_power_6886[S_3G_1C],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_4G_0D0U",
		.scenario_power = &md_scen_power_6886[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = 1 << 7,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6886[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6886[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6886[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = 1 << 11,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6886[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6886[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = 1 << 19,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = 1 << 20,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2_3TG] = {
		.scenario_reg = 1 << 22,
		.scenario_name = "S_5G_FR1_FR2_3TG",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_FR2_3TG],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = 1 << 27,
		.scenario_name = "S_5G_FR1_FR2",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 23,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = 1 << 24,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 25,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6886[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = 1 << 26,
		.scenario_name = "S_5G_FR1_FR2_4G",
		.scenario_power = &md_scen_power_6886[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6886[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_4G, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}
};

static int mt6886_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_FR2_4G,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR1_FR2_3TG,
	S_5G_FR1_FR2,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_2CC_1TG,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_4G_3CC,
	S_5G_FR2_1CC_1TG,
	S_5G_FR1_1CC_1TG,
	S_3G_1C,
	S_4G_2CC,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_4G_1CC,
	S_C2K_DATALINK,
	S_3G_IDLE,
	S_2G_IDLE,
	S_4G_0D0U,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6985_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6985[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6985[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6985[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6985[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6985[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6985[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6985[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6985[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6985[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6985[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6985_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6985[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = 1 << 1,
		.scenario_name = "S_2G_C2K_3G",
		.scenario_power = &md_scen_power_6985[S_2G_IDLE],
		.tx_power_rat = {RAT_3G, RAT_C2K, RAT_2G, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U] = {
		.scenario_reg = 1 << 2,
		.scenario_name = "S_4G_0D0U_1CC",
		.scenario_power = &md_scen_power_6985[S_4G_0D0U],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_0D0U_H] = {
		.scenario_reg = 1 << 3,
		.scenario_name = "S_4G_0D0U_H_1CC_H",
		.scenario_power = &md_scen_power_6985[S_4G_0D0U_H],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = 1 << 4,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6985[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = 1 << 5,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6985[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = 1 << 12,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = 1 << 13,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6985[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = 1 << 14,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6985[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = 1 << 8,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG_H] = {
		.scenario_reg = 1 << 9,
		.scenario_name = "S_5G_FR1_1CC_1TG_H",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_1CC_1TG_H],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = 1 << 15,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = 1 << 16,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = 1 << 17,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_3TG] = {
		.scenario_reg = 1 << 18,
		.scenario_name = "S_5G_FR1_1_4CC_3TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_1_4CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = 1 << 19,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = 1 << 20,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = 1 << 21,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = 1 << 22,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_3TG] = {
		.scenario_reg = 1 << 23,
		.scenario_name = "S_5G_FR2_1_8CC_3TG",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_1_8CC_3TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = 1 << 28,
		.scenario_name = "S_5G_NNDC",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 10,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = 1 << 25,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = 1 << 26,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6985[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = 1 << 27,
		.scenario_name = "S_5G_ENDC_OTHERS",
		.scenario_power = &md_scen_power_6985[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = 1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6985[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}

};

static int mt6985_scen_priority[SCENARIO_NUM] = {
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_1_8CC_3TG,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR2_1CC_1TG,
	S_5G_FR1_1_4CC_3TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_1CC_1TG_H,
	S_5G_FR1_2CC_1TG,
	S_5G_FR1_1CC_1TG,
	S_5G_FR1_FR2,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_FR2_4G,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_4G_0D0U_H,
	S_4G_0D0U,
	S_4G_3CC,
	S_4G_2CC,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6897_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6897[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6897[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6897[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6897[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6897[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6897[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6897[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6897[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6897[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6897[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6897_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6897[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = (u64)1 << 2,
		.scenario_name = "S_2G_IDLE",
		.scenario_power = &md_scen_power_6897[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = (u64)1 << 3,
		.scenario_name = "S_C2K_DATALINK",
		.scenario_power = &md_scen_power_6897[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = (u64)1 << 4,
		.scenario_name = "S_3G_IDLE",
		.scenario_power = &md_scen_power_6897[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = (u64)1 << 5,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6897[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 6,
		.scenario_name = "S_4G_1CC_H",
		.scenario_power = &md_scen_power_6897[S_4G_1CC_H],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = (u64)1 << 11,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6897[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = (u64)1 << 12,
		.scenario_name = "S_4G_3CC",
		.scenario_power = &md_scen_power_6897[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_4CC] = {
		.scenario_reg = (u64)1 << 13,
		.scenario_name = "S_4G_4CC",
		.scenario_power = &md_scen_power_6897[S_4G_4CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_5CC] = {
		.scenario_reg = (u64)1 << 14,
		.scenario_name = "S_4G_5CC",
		.scenario_power = &md_scen_power_6897[S_4G_5CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = (u64)1 << 21,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = (u64)1 << 22,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6897[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = (u64)1 << 23,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6897[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = (u64)1 << 7,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG_H] = {
		.scenario_reg = (u64)1 << 8,
		.scenario_name = "S_5G_FR1_1CC_1TG_H",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1CC_1TG_H],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = (u64)1 << 24,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = (u64)1 << 25,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = (u64)1 << 26,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_3TG] = {
		.scenario_reg = (u64)1 << 27,
		.scenario_name = "S_5G_FR1_1_4CC_3TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1_4CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = (u64)1 << 28,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = (u64)1 << 29,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = (u64)1 << 30,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = (u64)1 << 31,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_3TG] = {
		.scenario_reg = (u64)1 << 32,
		.scenario_name = "S_5G_FR2_1_8CC_3TG",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_1_8CC_3TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = (u64)1 << 36,
		.scenario_name = "S_5G_NNDC",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = (u64)1 << 9,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 10,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC_H",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_1CC_1TG_4G_1CC_H],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = (u64)1 << 33,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = (u64)1 << 34,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6897[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = (u64)1 << 35,
		.scenario_name = "S_5G_ENDC_OTHERS",
		.scenario_power = &md_scen_power_6897[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = (u64)1 << 63,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6897[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}

};

static int mt6897_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_5G_FR1_1CC_1TG_4G_1CC_H,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR1_FR2_4G,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_1_4CC_3TG,
	S_5G_FR2_1CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_1_8CC_3TG,
	S_5G_FR1_FR2,
	S_5G_FR1_2CC_1TG,
	S_4G_5CC,
	S_4G_4CC,
	S_4G_3CC,
	S_5G_FR1_1CC_1TG_H,
	S_5G_FR1_1CC_1TG,
	S_4G_1CC,
	S_4G_1CC_H,
	S_4G_2CC,
	S_5G_NR_0CC_1TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_3TG,
	S_3G_IDLE,
	S_C2K_DATALINK,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6989_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6989[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6989[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6989[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6989[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6989[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6989[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6989[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6989[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6989[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6989[TX_MMW_TX2_DBM],
	}
};

static struct mdpm_scenario mt6989_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6989[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = (u64)1 << 2,
		.scenario_name = "S_2G_IDLE",
		.scenario_power = &md_scen_power_6989[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = (u64)1 << 11,
		.scenario_name = "S_C2K_DATALINK",
		.scenario_power = &md_scen_power_6989[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = (u64)1 << 3,
		.scenario_name = "S_3G_IDLE",
		.scenario_power = &md_scen_power_6989[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = (u64)1 << 4,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6989[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 7,
		.scenario_name = "S_4G_1CC_H",
		.scenario_power = &md_scen_power_6989[S_4G_1CC_H],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = (u64)1 << 12,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6989[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = (u64)1 << 13,
		.scenario_name = "S_4G_3CC_4CC_5CC",
		.scenario_power = &md_scen_power_6989[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = (u64)1 << 16,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = (u64)1 << 17,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6989[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = (u64)1 << 18,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6989[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = (u64)1 << 5,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG_H] = {
		.scenario_reg = (u64)1 << 8,
		.scenario_name = "S_5G_FR1_1CC_1TG_H",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1CC_1TG_H],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = (u64)1 << 19,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = (u64)1 << 20,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = (u64)1 << 21,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_3TG] = {
		.scenario_reg = (u64)1 << 22,
		.scenario_name = "S_5G_FR1_1_4CC_3TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1_4CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = (u64)1 << 24,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = (u64)1 << 25,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6989[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = (u64)1 << 26,
		.scenario_name = "S_5G_NNDC",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = (u64)1 << 6,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 9,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC_H",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_1CC_1TG_4G_1CC_H],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = (u64)1 << 27,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6989[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = (u64)1 << 28,
		.scenario_name = "S_5G_ENDC_OTHERS",
		.scenario_power = &md_scen_power_6989[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = (u64)1 << 31,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6989[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}

};

static int mt6989_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_FR2_4G,
	S_5G_FR1_FR2,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR1_1CC_1TG_4G_1CC_H,
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR1_1_4CC_3TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_3_4CC_1TG,
	S_4G_3CC,
	S_5G_FR2_1CC_1TG,
	S_5G_FR1_2CC_1TG,
	S_5G_FR1_1CC_1TG_H,
	S_5G_FR1_1CC_1TG,
	S_4G_2CC,
	S_4G_1CC_H,
	S_4G_1CC,
	S_5G_NR_0CC_3TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_1TG,
	S_C2K_DATALINK,
	S_3G_IDLE,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct mdpm_scenario mt6878_mdpm_scen[SCENARIO_NUM] = {
	[S_STANDBY] = {
		.scenario_reg = 0,
		.scenario_name = "S_STANDBY",
		.scenario_power = &md_scen_power_6878[S_STANDBY],
		.tx_power_rat = {0, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_2G_IDLE] = {
		.scenario_reg = (u64)1 << 2,
		.scenario_name = "S_2G_IDLE",
		.scenario_power = &md_scen_power_6878[S_2G_IDLE],
		.tx_power_rat = {RAT_2G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_C2K_DATALINK] = {
		.scenario_reg = (u64)1 << 3,
		.scenario_name = "S_C2K_DATALINK",
		.scenario_power = &md_scen_power_6878[S_C2K_DATALINK],
		.tx_power_rat = {RAT_C2K, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_3G_IDLE] = {
		.scenario_reg = (u64)1 << 4,
		.scenario_name = "S_3G_IDLE",
		.scenario_power = &md_scen_power_6878[S_3G_IDLE],
		.tx_power_rat = {RAT_3G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC] = {
		.scenario_reg = (u64)1 << 5,
		.scenario_name = "S_4G_1CC",
		.scenario_power = &md_scen_power_6878[S_4G_1CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 6,
		.scenario_name = "S_4G_1CC_H",
		.scenario_power = &md_scen_power_6878[S_4G_1CC_H],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_2CC] = {
		.scenario_reg = (u64)1 << 11,
		.scenario_name = "S_4G_2CC",
		.scenario_power = &md_scen_power_6878[S_4G_2CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_3CC] = {
		.scenario_reg = (u64)1 << 12,
		.scenario_name = "S_4G_3CC",
		.scenario_power = &md_scen_power_6878[S_4G_3CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_4CC] = {
		.scenario_reg = (u64)1 << 13,
		.scenario_name = "S_4G_4CC",
		.scenario_power = &md_scen_power_6878[S_4G_4CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_4G_5CC] = {
		.scenario_reg = (u64)1 << 14,
		.scenario_name = "S_4G_5CC",
		.scenario_power = &md_scen_power_6878[S_4G_5CC],
		.tx_power_rat = {RAT_4G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_1TG] = {
		.scenario_reg = (u64)1 << 21,
		.scenario_name = "S_5G_NR_0CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_NR_0CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_2TG] = {
		.scenario_reg = (u64)1 << 22,
		.scenario_name = "S_5G_NR_0CC_2TG",
		.scenario_power = &md_scen_power_6878[S_5G_NR_0CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_NR_0CC_3TG] = {
		.scenario_reg = (u64)1 << 23,
		.scenario_name = "S_5G_NR_0CC_3TG",
		.scenario_power = &md_scen_power_6878[S_5G_NR_0CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG] = {
		.scenario_reg = (u64)1 << 7,
		.scenario_name = "S_5G_FR1_1CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1CC_1TG_H] = {
		.scenario_reg = (u64)1 << 8,
		.scenario_name = "S_5G_FR1_1CC_1TG_H",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1CC_1TG_H],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_2CC_1TG] = {
		.scenario_reg = (u64)1 << 24,
		.scenario_name = "S_5G_FR1_2CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_2CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_3_4CC_1TG] = {
		.scenario_reg = (u64)1 << 25,
		.scenario_name = "S_5G_FR1_3_4CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_3_4CC_1TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_2TG] = {
		.scenario_reg = (u64)1 << 26,
		.scenario_name = "S_5G_FR1_1_4CC_2TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1_4CC_2TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_1_4CC_3TG] = {
		.scenario_reg = (u64)1 << 27,
		.scenario_name = "S_5G_FR1_1_4CC_3TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1_4CC_3TG],
		.tx_power_rat = {RAT_5G, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1CC_1TG] = {
		.scenario_reg = (u64)1 << 28,
		.scenario_name = "S_5G_FR2_1CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_1CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_2_4CC_1TG] = {
		.scenario_reg = (u64)1 << 29,
		.scenario_name = "S_5G_FR2_2_4CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_2_4CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_5_8CC_1TG] = {
		.scenario_reg = (u64)1 << 30,
		.scenario_name = "S_5G_FR2_5_8CC_1TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_5_8CC_1TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_2TG] = {
		.scenario_reg = (u64)1 << 31,
		.scenario_name = "S_5G_FR2_1_8CC_2TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_1_8CC_2TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR2_1_8CC_3TG] = {
		.scenario_reg = (u64)1 << 32,
		.scenario_name = "S_5G_FR2_1_8CC_3TG",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_1_8CC_3TG],
		.tx_power_rat = {RAT_MMW, 0, 0, 0, 0},
		.tx_power_rat_sum = false,
	},

	[S_5G_FR1_FR2] = {
		.scenario_reg = (u64)1 << 36,
		.scenario_name = "S_5G_NNDC",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_FR2],
		.tx_power_rat = {RAT_MMW, RAT_5G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC] = {
		.scenario_reg = (u64)1 << 9,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_1CC_1TG_4G_1CC_H] = {
		.scenario_reg = (u64)1 << 10,
		.scenario_name = "S_5G_FR1_1CC_1TG_4G_1CC_H",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_1CC_1TG_4G_1CC_H],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC] = {
		.scenario_reg = (u64)1 << 33,
		.scenario_name = "S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR2_2_4CC_1TG_4G_1CC] = {
		.scenario_reg = (u64)1 << 34,
		.scenario_name = "S_5G_FR2_2_4CC_1TG_4G_1CC",
		.scenario_power = &md_scen_power_6878[S_5G_FR2_2_4CC_1TG_4G_1CC],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_5G_FR1_FR2_4G] = {
		.scenario_reg = (u64)1 << 35,
		.scenario_name = "S_5G_ENDC_OTHERS",
		.scenario_power = &md_scen_power_6878[S_5G_FR1_FR2_4G],
		.tx_power_rat = {RAT_MMW, RAT_5G, RAT_4G, 0, 0},
		.tx_power_rat_sum = true,
	},

	[S_4G_5G_POS_URGENT] = {
		.scenario_reg = (u64)1 << 63,
		.scenario_name = "S_4G_5G_POS_URGENT",
		.scenario_power = &md_scen_power_6878[S_4G_5G_POS_URGENT],
		.tx_power_rat = {RAT_5G, RAT_4G, 0, 0, 0},
		.tx_power_rat_sum = true,
	}

};

static int mt6878_scen_priority[SCENARIO_NUM] = {
	S_5G_FR1_1CC_1TG_4G_1CC,
	S_5G_FR1_1CC_1TG_4G_1CC_H,
	S_5G_FR2_1CC_1TG_4G_1CC_NR_0CC,
	S_5G_FR2_2_4CC_1TG_4G_1CC,
	S_5G_FR1_FR2_4G,
	S_5G_FR1_3_4CC_1TG,
	S_5G_FR1_1_4CC_2TG,
	S_5G_FR1_1_4CC_3TG,
	S_5G_FR2_1CC_1TG,
	S_5G_FR2_2_4CC_1TG,
	S_5G_FR2_5_8CC_1TG,
	S_5G_FR2_1_8CC_2TG,
	S_5G_FR2_1_8CC_3TG,
	S_5G_FR1_FR2,
	S_5G_FR1_2CC_1TG,
	S_4G_5CC,
	S_4G_4CC,
	S_4G_3CC,
	S_5G_FR1_1CC_1TG_H,
	S_5G_FR1_1CC_1TG,
	S_4G_1CC,
	S_4G_1CC_H,
	S_4G_2CC,
	S_5G_NR_0CC_1TG,
	S_5G_NR_0CC_2TG,
	S_5G_NR_0CC_3TG,
	S_3G_IDLE,
	S_C2K_DATALINK,
	S_2G_IDLE,
	S_STANDBY,
	S_4G_5G_POS_URGENT
};

static struct tx_power mt6878_mdpm_tx_pwr[TX_DBM_NUM] = {
	[TX_2G_DBM] = {
		.dbm_name = "2G",
		.shm_dbm_idx = {M_2G_DBM_TABLE, M_2G_DBM_1_TABLE},
		.shm_sec_idx = {M_2G_SECTION_LEVEL, M_2G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6878[TX_2G_DBM],
	},

	[TX_3G_DBM] = {
		.dbm_name = "3G",
		.shm_dbm_idx = {M_3G_DBM_TABLE, M_3G_DBM_1_TABLE},
		.shm_sec_idx = {M_3G_SECTION_LEVEL, M_3G_SECTION_1_LEVEL},
		.rfhw = &rfhw_6878[TX_3G_DBM],
	},

	[TX_3GTDD_DBM] = {
		.dbm_name = "3GTDD",
		.shm_dbm_idx = {M_TDD_DBM_TABLE, M_TDD_DBM_1_TABLE},
		.shm_sec_idx = {M_TDD_SECTION_LEVEL, M_TDD_SECTION_1_LEVEL},
		.rfhw = &rfhw_6878[TX_3GTDD_DBM],
	},

	[TX_4G_CC0_DBM] = {
		.dbm_name = "4G_CC0",
		.shm_dbm_idx = {M_4G_DBM_TABLE, M_4G_DBM_2_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6878[TX_4G_CC0_DBM],
	},

	[TX_4G_CC1_DBM] = {
		.dbm_name = "4G_CC1",
		.shm_dbm_idx = {M_4G_DBM_1_TABLE, M_4G_DBM_3_TABLE},
		.shm_sec_idx = {M_4G_SECTION_LEVEL, M_4G_SECTION_9_LEVEL},
		.rfhw = &rfhw_6878[TX_4G_CC1_DBM],
	},

	[TX_C2K_DBM] = {
		.dbm_name = "C2K",
		.shm_dbm_idx = {M_C2K_DBM_1_TABLE, M_C2K_DBM_2_TABLE},
		.shm_sec_idx = {M_C2K_SECTION_1_LEVEL, M_C2K_SECTION_2_LEVEL},
		.rfhw = &rfhw_6878[TX_C2K_DBM],
	},

	[TX_NR_CC0_DBM] = {
		.dbm_name = "NR_CC0",
		.shm_dbm_idx = {M_NR_DBM_TABLE, M_NR_DBM_1_TABLE},
		.shm_sec_idx = {M_NR_SECTION_LEVEL, M_NR_SECTION_1_LEVEL},
		.rfhw = &rfhw_6878[TX_NR_CC0_DBM],
	},

	[TX_NR_CC1_DBM] = {
		.dbm_name = "NR_CC1",
		.shm_dbm_idx = {M_NR_DBM_2_TABLE, M_NR_DBM_3_TABLE},
		.shm_sec_idx = {M_NR_SECTION_2_LEVEL, M_NR_SECTION_3_LEVEL},
		.rfhw = &rfhw_6878[TX_NR_CC1_DBM],
	},

	[TX_MMW_TX1_DBM] = {
		.dbm_name = "MMW_TX1",
		.shm_dbm_idx = {M_MMW_DBM_TABLE, M_MMW_DBM_1_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_LEVEL, M_MMW_SECTION_1_LEVEL},
		.rfhw = &rfhw_6878[TX_MMW_TX1_DBM],
	},

	[TX_MMW_TX2_DBM] = {
		.dbm_name = "MMW_TX2",
		.shm_dbm_idx = {M_MMW_DBM_2_TABLE, M_MMW_DBM_3_TABLE},
		.shm_sec_idx = {M_MMW_SECTION_2_LEVEL, M_MMW_SECTION_3_LEVEL},
		.rfhw = &rfhw_6878[TX_MMW_TX2_DBM],
	}
};
#endif /* _MTK_MDPM_PLATFORM_TABLE_H_ */
