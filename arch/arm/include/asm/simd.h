/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _ASM_SIMD_H
#define _ASM_SIMD_H

#include <robux/compiler_attributes.h>
#include <robux/preempt.h>
#include <robux/types.h>

static __must_check inline bool may_use_simd(void)
{
	return IS_ENABLED(CONFIG_KERNEL_MODE_NEON) && !in_hardirq()
	       && !irqs_disabled();
}

#endif	/* _ASM_SIMD_H */
