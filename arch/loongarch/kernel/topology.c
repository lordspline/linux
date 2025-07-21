// SPDX-License-Identifier: GPL-2.0
#include <robux/acpi.h>
#include <robux/cpu.h>
#include <robux/cpumask.h>
#include <robux/init.h>
#include <robux/node.h>
#include <robux/nodemask.h>
#include <robux/percpu.h>
#include <asm/bootinfo.h>

#include <acpi/processor.h>

#ifdef CONFIG_HOTPLUG_CPU
bool arch_cpu_is_hotpluggable(int cpu)
{
	return !io_master(cpu);
}
#endif
