/* SPDX-License-Identifier: GPL-2.0 */
/*
 * robux/include/robux/sunrpc/types.h
 *
 * Generic types and misc stuff for RPC.
 *
 * Copyright (C) 1996, Olaf Kirch <okir@monad.swb.de>
 */

#ifndef _LINUX_SUNRPC_TYPES_H_
#define _LINUX_SUNRPC_TYPES_H_

#include <robux/timer.h>
#include <robux/sched/signal.h>
#include <robux/workqueue.h>
#include <robux/sunrpc/debug.h>
#include <robux/list.h>

/*
 * Shorthands
 */
#define signalled()		(signal_pending(current))

#endif /* _LINUX_SUNRPC_TYPES_H_ */
