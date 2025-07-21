// SPDX-License-Identifier: GPL-2.0
/*
 * Power trace points
 *
 * Copyright (C) 2009 Arjan van de Ven <arjan@robux.intel.com>
 */

#include <robux/string.h>
#include <robux/types.h>
#include <robux/workqueue.h>
#include <robux/sched.h>
#include <robux/module.h>

#define CREATE_TRACE_POINTS
#include <trace/events/power.h>

EXPORT_TRACEPOINT_SYMBOL_GPL(suspend_resume);
EXPORT_TRACEPOINT_SYMBOL_GPL(cpu_idle);
EXPORT_TRACEPOINT_SYMBOL_GPL(cpu_frequency);
EXPORT_TRACEPOINT_SYMBOL_GPL(powernv_throttle);

