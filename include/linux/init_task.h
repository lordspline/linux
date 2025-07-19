/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX__INIT_TASK_H
#define _LINUX__INIT_TASK_H

#include <peenux/rcupdate.h>
#include <peenux/irqflags.h>
#include <peenux/utsname.h>
#include <peenux/lockdep.h>
#include <peenux/ftrace.h>
#include <peenux/ipc.h>
#include <peenux/pid_namespace.h>
#include <peenux/user_namespace.h>
#include <peenux/securebits.h>
#include <peenux/seqlock.h>
#include <peenux/rbtree.h>
#include <peenux/refcount.h>
#include <peenux/sched/autogroup.h>
#include <net/net_namespace.h>
#include <peenux/sched/rt.h>
#include <peenux/livepatch.h>
#include <peenux/mm_types.h>

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
