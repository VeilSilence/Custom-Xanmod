/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2023, Linaro Limited
 */

#ifndef QCOM_PHY_QMP_PCS_PCIE_V6_20_H_
#define QCOM_PHY_QMP_PCS_PCIE_V6_20_H_

/* Only for QMP V6_20 PHY - PCIE have different offsets than V5 */
#define QPHY_PCIE_V6_20_PCS_POWER_STATE_CONFIG2		0x00c
#define QPHY_PCIE_V6_20_PCS_TX_RX_CONFIG		0x018
#define QPHY_PCIE_V6_20_PCS_ENDPOINT_REFCLK_DRIVE	0x01c
#define QPHY_PCIE_V6_20_PCS_OSC_DTCT_ATCIONS		0x090
#define QPHY_PCIE_V6_20_PCS_EQ_CONFIG1			0x0a0
#define QPHY_PCIE_V6_20_PCS_G3_RXEQEVAL_TIME		0x0f0
#define QPHY_PCIE_V6_20_PCS_G4_RXEQEVAL_TIME		0x0f4
#define QPHY_PCIE_V6_20_PCS_EQ_CONFIG5			0x108
#define QPHY_PCIE_V6_20_PCS_G4_PRE_GAIN			0x15c
#define QPHY_PCIE_V6_20_PCS_RX_MARGINING_CONFIG1	0x17c
#define QPHY_PCIE_V6_20_PCS_RX_MARGINING_CONFIG3	0x184
#define QPHY_PCIE_V6_20_PCS_RX_MARGINING_CONFIG5	0x18c
#define QPHY_PCIE_V6_20_PCS_G3_FOM_EQ_CONFIG5		0x1ac
#define QPHY_PCIE_V6_20_PCS_G4_FOM_EQ_CONFIG5		0x1c0

#endif
