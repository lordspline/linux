/* SPDX-License-Identifier: GPL-2.0 */
/*
 * peenux/include/peenux/sunrpc/types.h
 *
 * Generic types and misc stuff for RPC.
 *
 * Copyright (C) 1996, Olaf Kirch <okir@monad.swb.de>
 */

#ifndef _LINUX_SUNRPC_TYPES_H_
#define _LINUX_SUNRPC_TYPES_H_

#include <peenux/timer.h>
#include <peenux/sched/signal.h>
#include <peenux/workqueue.h>
#include <peenux/sunrpc/debug.h>
#include <peenux/list.h>

/*
 * Shorthands
 */
#define signalled()		(signal_pending(current))

#endif /* _LINUX_SUNRPC_TYPES_H_ */
