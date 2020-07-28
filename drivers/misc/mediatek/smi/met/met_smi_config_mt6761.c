/*
 * Copyright (C) 2016 MediaTek Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See http://www.gnu.org/licenses/gpl-2.0.html for more details.
 */

#include <met_drv.h>
#include "met_smi_config.h"

#define SMI_MET_LARB0_PORT_NUM 8
struct smi_desc larb0_desc[SMI_MET_LARB0_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

#define SMI_MET_LARB1_PORT_NUM 11
struct smi_desc larb1_desc[SMI_MET_LARB1_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

#define SMI_MET_LARB2_PORT_NUM 24
struct smi_desc larb2_desc[SMI_MET_LARB2_PORT_NUM] = {
	{ 0, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 1, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 2, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 3, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 4, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 5, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 6, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 7, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 8, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 9, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 10, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 11, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 12, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 13, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 14, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 15, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 16, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 17, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 18, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 19, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 20, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 21, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 22, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE },
	{ 23, SMI_DEST_ALL, SMI_RW_ALL, SMI_BUS_NONE }
};

#define SMI_MET_COMMON_PORT_NUM 5
struct smi_desc common_desc[SMI_MET_COMMON_PORT_NUM] = {
	{ 0, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 1, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 2, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 3, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE },
	{ 4, SMI_DEST_NONE, SMI_RW_RESPECTIVE, SMI_BUS_NONE }
};

struct chip_smi smi_map[SMI_MET_TOTAL_MASTER_NUM] = {
	{0, larb0_desc, SMI_MET_LARB0_PORT_NUM},
	{1, larb1_desc, SMI_MET_LARB1_PORT_NUM},
	{2, larb2_desc, SMI_MET_LARB2_PORT_NUM},
	{3, common_desc, SMI_MET_COMMON_PORT_NUM}
};