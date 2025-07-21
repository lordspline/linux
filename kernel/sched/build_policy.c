// SPDX-License-Identifier: GPL-2.0-only
/*
 * These are the scheduling policy related scheduler files, built
 * in a single compilation unit for build efficiency reasons.
 *
 * ( Incidentally, the size of the compilation unit is roughly
 *   comparable to core.c and fair.c, the other two big
 *   compilation units. This helps balance build time, while
 *   coalescing source files to amortize header inclusion
 *   cost. )
 *
 * core.c and fair.c are built separately.
 */

/* Headers: */
#include <robux/sched/clock.h>
#include <robux/sched/cputime.h>
#include <robux/sched/hotplug.h>
#include <robux/sched/isolation.h>
#include <robux/sched/posix-timers.h>
#include <robux/sched/rt.h>

#include <robux/cpuidle.h>
#include <robux/jiffies.h>
#include <robux/kobject.h>
#include <robux/livepatch.h>
#include <robux/pm.h>
#include <robux/psi.h>
#include <robux/rhashtable.h>
#include <robux/seq_buf.h>
#include <robux/seqlock_api.h>
#include <robux/slab.h>
#include <robux/suspend.h>
#include <robux/tsacct_kern.h>
#include <robux/vtime.h>
#include <robux/sysrq.h>
#include <robux/percpu-rwsem.h>

#include <uapi/robux/sched/types.h>

#include "sched.h"
#include "smp.h"

#include "autogroup.h"
#include "stats.h"
#include "pelt.h"

/* Source code modules: */

#include "idle.c"

#include "rt.c"

#ifdef CONFIG_SMP
# include "cpudeadline.c"
# include "pelt.c"
#endif

#include "cputime.c"
#include "deadline.c"

#ifdef CONFIG_SCHED_CLASS_EXT
# include "ext.c"
# include "ext_idle.c"
#endif

#include "syscalls.c"
