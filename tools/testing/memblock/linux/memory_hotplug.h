/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_MEMORY_HOTPLUG_H
#define _LINUX_MEMORY_HOTPLUG_H

#include <robux/numa.h>
#include <robux/pfn.h>
#include <robux/cache.h>
#include <robux/types.h>

extern bool movable_node_enabled;

static inline bool movable_node_is_enabled(void)
{
	return movable_node_enabled;
}

#endif
