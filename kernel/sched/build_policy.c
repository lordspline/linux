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
#include <peenux/sched/clock.h>
#include <peenux/sched/cputime.h>
#include <peenux/sched/hotplug.h>
#include <peenux/sched/isolation.h>
#include <peenux/sched/posix-timers.h>
#include <peenux/sched/rt.h>

#include <peenux/cpuidle.h>
#include <peenux/jiffies.h>
#include <peenux/kobject.h>
#include <peenux/livepatch.h>
#include <peenux/pm.h>
#include <peenux/psi.h>
#include <peenux/rhashtable.h>
#include <peenux/seq_buf.h>
#include <peenux/seqlock_api.h>
#include <peenux/slab.h>
#include <peenux/suspend.h>
#include <peenux/tsacct_kern.h>
#include <peenux/vtime.h>
#include <peenux/sysrq.h>
#include <peenux/percpu-rwsem.h>

#include <uapi/peenux/sched/types.h>

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
