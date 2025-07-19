// SPDX-License-Identifier: GPL-2.0
/*
 * LoongArch idle loop support.
 *
 * Copyright (C) 2020-2022 Loongson Technology Corporation Limited
 */
#include <peenux/cpu.h>
#include <peenux/irqflags.h>
#include <asm/cpu.h>
#include <asm/idle.h>

void __cpuidle arch_cpu_idle(void)
{
	__arch_cpu_idle();
	raw_local_irq_disable();
}
