/* SPDX-License-Identifier: MIT */
/*
 * Copyright © 2022 Intel Corporation
 */

#ifndef __INTEL_PERF_OA_REGS__
#define __INTEL_PERF_OA_REGS__

#include "i915_reg_defs.h"

#define GEN7_OACONTROL _MMIO(0x2360)
#define  GEN7_OACONTROL_CTX_MASK	    0xFFFFF000
#define  GEN7_OACONTROL_TIMER_PERIOD_MASK   0x3F
#define  GEN7_OACONTROL_TIMER_PERIOD_SHIFT  6
#define  GEN7_OACONTROL_TIMER_ENABLE	    (1 << 5)
#define  GEN7_OACONTROL_FORMAT_A13	    (0 << 2)
#define  GEN7_OACONTROL_FORMAT_A29	    (1 << 2)
#define  GEN7_OACONTROL_FORMAT_A13_B8_C8    (2 << 2)
#define  GEN7_OACONTROL_FORMAT_A29_B8_C8    (3 << 2)
#define  GEN7_OACONTROL_FORMAT_B4_C8	    (4 << 2)
#define  GEN7_OACONTROL_FORMAT_A45_B8_C8    (5 << 2)
#define  GEN7_OACONTROL_FORMAT_B4_C8_A16    (6 << 2)
#define  GEN7_OACONTROL_FORMAT_C4_B8	    (7 << 2)
#define  GEN7_OACONTROL_FORMAT_SHIFT	    2
#define  GEN7_OACONTROL_PER_CTX_ENABLE	    (1 << 1)
#define  GEN7_OACONTROL_ENABLE		    (1 << 0)

#define GEN8_OACTXID _MMIO(0x2364)

#define GEN8_OA_DEBUG _MMIO(0x2B04)
#define  GEN9_OA_DEBUG_DISABLE_CLK_RATIO_REPORTS    (1 << 5)
#define  GEN9_OA_DEBUG_INCLUDE_CLK_RATIO	    (1 << 6)
#define  GEN9_OA_DEBUG_DISABLE_GO_1_0_REPORTS	    (1 << 2)
#define  GEN9_OA_DEBUG_DISABLE_CTX_SWITCH_REPORTS   (1 << 1)

#define GEN8_OACONTROL _MMIO(0x2B00)
#define  GEN8_OA_REPORT_FORMAT_A12	    (0 << 2)
#define  GEN8_OA_REPORT_FORMAT_A12_B8_C8    (2 << 2)
#define  GEN8_OA_REPORT_FORMAT_A36_B8_C8    (5 << 2)
#define  GEN8_OA_REPORT_FORMAT_C4_B8	    (7 << 2)
#define  GEN8_OA_REPORT_FORMAT_SHIFT	    2
#define  GEN8_OA_SPECIFIC_CONTEXT_ENABLE    (1 << 1)
#define  GEN8_OA_COUNTER_ENABLE             (1 << 0)

#define GEN8_OACTXCONTROL _MMIO(0x2360)
#define  GEN8_OA_TIMER_PERIOD_MASK	    0x3F
#define  GEN8_OA_TIMER_PERIOD_SHIFT	    2
#define  GEN8_OA_TIMER_ENABLE		    (1 << 1)
#define  GEN8_OA_COUNTER_RESUME		    (1 << 0)

#define GEN7_OABUFFER _MMIO(0x23B0) /* R/W */
#define  GEN7_OABUFFER_OVERRUN_DISABLE	    (1 << 3)
#define  GEN7_OABUFFER_EDGE_TRIGGER	    (1 << 2)
#define  GEN7_OABUFFER_STOP_RESUME_ENABLE   (1 << 1)
#define  GEN7_OABUFFER_RESUME		    (1 << 0)

#define GEN8_OABUFFER_UDW _MMIO(0x23b4)
#define GEN8_OABUFFER _MMIO(0x2b14)
#define  GEN8_OABUFFER_MEM_SELECT_GGTT      (1 << 0)  /* 0: PPGTT, 1: GGTT */

#define GEN7_OASTATUS1 _MMIO(0x2364)
#define  GEN7_OASTATUS1_TAIL_MASK	    0xffffffc0
#define  GEN7_OASTATUS1_COUNTER_OVERFLOW    (1 << 2)
#define  GEN7_OASTATUS1_OABUFFER_OVERFLOW   (1 << 1)
#define  GEN7_OASTATUS1_REPORT_LOST	    (1 << 0)

#define GEN7_OASTATUS2 _MMIO(0x2368)
#define  GEN7_OASTATUS2_HEAD_MASK           0xffffffc0
#define  GEN7_OASTATUS2_MEM_SELECT_GGTT     (1 << 0) /* 0: PPGTT, 1: GGTT */

#define GEN8_OASTATUS _MMIO(0x2b08)
#define  GEN8_OASTATUS_TAIL_POINTER_WRAP    (1 << 17)
#define  GEN8_OASTATUS_HEAD_POINTER_WRAP    (1 << 16)
#define  GEN8_OASTATUS_OVERRUN_STATUS	    (1 << 3)
#define  GEN8_OASTATUS_COUNTER_OVERFLOW     (1 << 2)
#define  GEN8_OASTATUS_OABUFFER_OVERFLOW    (1 << 1)
#define  GEN8_OASTATUS_REPORT_LOST	    (1 << 0)

#define GEN8_OAHEADPTR _MMIO(0x2B0C)
#define GEN8_OAHEADPTR_MASK    0xffffffc0
#define GEN8_OATAILPTR _MMIO(0x2B10)
#define GEN8_OATAILPTR_MASK    0xffffffc0

#define OABUFFER_SIZE_128K  (0 << 3)
#define OABUFFER_SIZE_256K  (1 << 3)
#define OABUFFER_SIZE_512K  (2 << 3)
#define OABUFFER_SIZE_1M    (3 << 3)
#define OABUFFER_SIZE_2M    (4 << 3)
#define OABUFFER_SIZE_4M    (5 << 3)
#define OABUFFER_SIZE_8M    (6 << 3)
#define OABUFFER_SIZE_16M   (7 << 3)

#define GEN12_OA_TLB_INV_CR _MMIO(0xceec)

/* Gen12 OAR unit */
#define GEN12_OAR_OACONTROL _MMIO(0x2960)
#define  GEN12_OAR_OACONTROL_COUNTER_FORMAT_SHIFT 1
#define  GEN12_OAR_OACONTROL_COUNTER_ENABLE       (1 << 0)

#define GEN12_OACTXCONTROL(base) _MMIO((base) + 0x360)
#define GEN12_OAR_OASTATUS _MMIO(0x2968)

/* Gen12 OAG unit */
#define GEN12_OAG_OAHEADPTR _MMIO(0xdb00)
#define  GEN12_OAG_OAHEADPTR_MASK 0xffffffc0
#define GEN12_OAG_OATAILPTR _MMIO(0xdb04)
#define  GEN12_OAG_OATAILPTR_MASK 0xffffffc0

#define GEN12_OAG_OABUFFER  _MMIO(0xdb08)
#define  GEN12_OAG_OABUFFER_BUFFER_SIZE_MASK  (0x7)
#define  GEN12_OAG_OABUFFER_BUFFER_SIZE_SHIFT (3)
#define  GEN12_OAG_OABUFFER_MEMORY_SELECT     (1 << 0) /* 0: PPGTT, 1: GGTT */

#define GEN12_OAG_OAGLBCTXCTRL _MMIO(0x2b28)
#define  GEN12_OAG_OAGLBCTXCTRL_TIMER_PERIOD_SHIFT 2
#define  GEN12_OAG_OAGLBCTXCTRL_TIMER_ENABLE       (1 << 1)
#define  GEN12_OAG_OAGLBCTXCTRL_COUNTER_RESUME     (1 << 0)

#define GEN12_OAG_OACONTROL _MMIO(0xdaf4)
#define  GEN12_OAG_OACONTROL_OA_COUNTER_FORMAT_SHIFT 2
#define  GEN12_OAG_OACONTROL_OA_COUNTER_ENABLE       (1 << 0)

#define GEN12_OAG_OA_DEBUG _MMIO(0xdaf8)
#define  GEN12_OAG_OA_DEBUG_INCLUDE_CLK_RATIO          (1 << 6)
#define  GEN12_OAG_OA_DEBUG_DISABLE_CLK_RATIO_REPORTS  (1 << 5)
#define  GEN12_OAG_OA_DEBUG_DISABLE_GO_1_0_REPORTS     (1 << 2)
#define  GEN12_OAG_OA_DEBUG_DISABLE_CTX_SWITCH_REPORTS (1 << 1)

#define GEN12_OAG_OASTATUS _MMIO(0xdafc)
#define  GEN12_OAG_OASTATUS_COUNTER_OVERFLOW (1 << 2)
#define  GEN12_OAG_OASTATUS_BUFFER_OVERFLOW  (1 << 1)
#define  GEN12_OAG_OASTATUS_REPORT_LOST      (1 << 0)

#define GDT_CHICKEN_BITS    _MMIO(0x9840)
#define   GT_NOA_ENABLE	    0x00000080

/* Gen12 OAM unit */
#define GEN12_OAM_HEAD_POINTER_OFFSET   (0x1a0)
#define  GEN12_OAM_HEAD_POINTER_MASK    0xffffffc0

#define GEN12_OAM_TAIL_POINTER_OFFSET   (0x1a4)
#define  GEN12_OAM_TAIL_POINTER_MASK    0xffffffc0

#define GEN12_OAM_BUFFER_OFFSET         (0x1a8)
#define  GEN12_OAM_BUFFER_SIZE_MASK     (0x7)
#define  GEN12_OAM_BUFFER_SIZE_SHIFT    (3)
#define  GEN12_OAM_BUFFER_MEMORY_SELECT REG_BIT(0) /* 0: PPGTT, 1: GGTT */

#define GEN12_OAM_CONTEXT_CONTROL_OFFSET              (0x1bc)
#define  GEN12_OAM_CONTEXT_CONTROL_TIMER_PERIOD_SHIFT 2
#define  GEN12_OAM_CONTEXT_CONTROL_TIMER_ENABLE       REG_BIT(1)
#define  GEN12_OAM_CONTEXT_CONTROL_COUNTER_RESUME     REG_BIT(0)

#define GEN12_OAM_CONTROL_OFFSET                (0x194)
#define  GEN12_OAM_CONTROL_COUNTER_FORMAT_SHIFT 1
#define  GEN12_OAM_CONTROL_COUNTER_ENABLE       REG_BIT(0)

#define GEN12_OAM_DEBUG_OFFSET                      (0x198)
#define  GEN12_OAM_DEBUG_BUFFER_SIZE_SELECT         REG_BIT(12)
#define  GEN12_OAM_DEBUG_INCLUDE_CLK_RATIO          REG_BIT(6)
#define  GEN12_OAM_DEBUG_DISABLE_CLK_RATIO_REPORTS  REG_BIT(5)
#define  GEN12_OAM_DEBUG_DISABLE_GO_1_0_REPORTS     REG_BIT(2)
#define  GEN12_OAM_DEBUG_DISABLE_CTX_SWITCH_REPORTS REG_BIT(1)

#define GEN12_OAM_STATUS_OFFSET            (0x19c)
#define  GEN12_OAM_STATUS_COUNTER_OVERFLOW REG_BIT(2)
#define  GEN12_OAM_STATUS_BUFFER_OVERFLOW  REG_BIT(1)
#define  GEN12_OAM_STATUS_REPORT_LOST      REG_BIT(0)

#define GEN12_OAM_MMIO_TRG_OFFSET	(0x1d0)

#define GEN12_OAM_MMIO_TRG(base) \
	_MMIO((base) + GEN12_OAM_MMIO_TRG_OFFSET)

#define GEN12_OAM_HEAD_POINTER(base) \
	_MMIO((base) + GEN12_OAM_HEAD_POINTER_OFFSET)
#define GEN12_OAM_TAIL_POINTER(base) \
	_MMIO((base) + GEN12_OAM_TAIL_POINTER_OFFSET)
#define GEN12_OAM_BUFFER(base) \
	_MMIO((base) + GEN12_OAM_BUFFER_OFFSET)
#define GEN12_OAM_CONTEXT_CONTROL(base) \
	_MMIO((base) + GEN12_OAM_CONTEXT_CONTROL_OFFSET)
#define GEN12_OAM_CONTROL(base) \
	_MMIO((base) + GEN12_OAM_CONTROL_OFFSET)
#define GEN12_OAM_DEBUG(base) \
	_MMIO((base) + GEN12_OAM_DEBUG_OFFSET)
#define GEN12_OAM_STATUS(base) \
	_MMIO((base) + GEN12_OAM_STATUS_OFFSET)

#define GEN12_OAM_CEC0_0_OFFSET		(0x40)
#define GEN12_OAM_CEC7_1_OFFSET		(0x7c)
#define GEN12_OAM_CEC0_0(base) \
	_MMIO((base) + GEN12_OAM_CEC0_0_OFFSET)
#define GEN12_OAM_CEC7_1(base) \
	_MMIO((base) + GEN12_OAM_CEC7_1_OFFSET)

#define GEN12_OAM_STARTTRIG1_OFFSET	(0x00)
#define GEN12_OAM_STARTTRIG8_OFFSET	(0x1c)
#define GEN12_OAM_STARTTRIG1(base) \
	_MMIO((base) + GEN12_OAM_STARTTRIG1_OFFSET)
#define GEN12_OAM_STARTTRIG8(base) \
	_MMIO((base) + GEN12_OAM_STARTTRIG8_OFFSET)

#define GEN12_OAM_REPORTTRIG1_OFFSET	(0x20)
#define GEN12_OAM_REPORTTRIG8_OFFSET	(0x3c)
#define GEN12_OAM_REPORTTRIG1(base) \
	_MMIO((base) + GEN12_OAM_REPORTTRIG1_OFFSET)
#define GEN12_OAM_REPORTTRIG8(base) \
	_MMIO((base) + GEN12_OAM_REPORTTRIG8_OFFSET)

#define GEN12_OAM_PERF_COUNTER_B0_OFFSET	(0x84)
#define GEN12_OAM_PERF_COUNTER_B(base, idx) \
	_MMIO((base) + GEN12_OAM_PERF_COUNTER_B0_OFFSET + 4 * (idx))

#endif /* __INTEL_PERF_OA_REGS__ */
