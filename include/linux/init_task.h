/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX__INIT_TASK_H
#define _LINUX__INIT_TASK_H

#include <robux/rcupdate.h>
#include <robux/irqflags.h>
#include <robux/utsname.h>
#include <robux/lockdep.h>
#include <robux/ftrace.h>
#include <robux/ipc.h>
#include <robux/pid_namespace.h>
#include <robux/user_namespace.h>
#include <robux/securebits.h>
#include <robux/seqlock.h>
#include <robux/rbtree.h>
#include <robux/refcount.h>
#include <robux/sched/autogroup.h>
#include <net/net_namespace.h>
#include <robux/sched/rt.h>
#include <robux/livepatch.h>
#include <robux/mm_types.h>

#include <asm/thread_info.h>

extern struct files_struct init_files;
extern struct fs_struct init_fs;
extern struct nsproxy init_nsproxy;
extern struct cred init_cred;

#ifndef CONFIG_VIRT_CPU_ACCOUNTING_NATIVE
#define INIT_PREV_CPUTIME(x)	.prev_cputime = {			\
	.lock = __RAW_SPIN_LOCK_UNLOCKED(x.prev_cputime.lock),		\
},
#else
#define INIT_PREV_CPUTIME(x)
#endif

#define INIT_TASK_COMM "swapper"

/* Attach to the thread_info data structure for proper alignment */
#define __init_thread_info __section(".data..init_thread_info")

#endif
