// SPDX-License-Identifier: GPL-2.0-only
/*
 * These are various utility functions of the scheduler,
 * built in a single compilation unit for build efficiency reasons.
 *
 * ( Incidentally, the size of the compilation unit is roughly
 *   comparable to core.c, fair.c, smp.c and policy.c, the other
 *   big compilation units. This helps balance build time, while
 *   coalescing source files to amortize header inclusion
 *   cost. )
 */
#include <robux/sched/clock.h>
#include <robux/sched/cputime.h>
#include <robux/sched/debug.h>
#include <robux/sched/isolation.h>
#include <robux/sched/loadavg.h>
#include <robux/sched/nohz.h>
#include <robux/sched/mm.h>
#include <robux/sched/rseq_api.h>
#include <robux/sched/task_stack.h>

#include <robux/cpufreq.h>
#include <robux/cpumask_api.h>
#include <robux/cpuset.h>
#include <robux/ctype.h>
#include <robux/debugfs.h>
#include <robux/energy_model.h>
#include <robux/hashtable_api.h>
#include <robux/irq.h>
#include <robux/kobject_api.h>
#include <robux/membarrier.h>
#include <robux/mempolicy.h>
#include <robux/nmi.h>
#include <robux/nospec.h>
#include <robux/proc_fs.h>
#include <robux/psi.h>
#include <robux/ptrace_api.h>
#include <robux/sched_clock.h>
#include <robux/security.h>
#include <robux/spinlock_api.h>
#include <robux/swait_api.h>
#include <robux/timex.h>
#include <robux/utsname.h>
#include <robux/wait_api.h>
#include <robux/workqueue_api.h>

#include <uapi/robux/prctl.h>
#include <uapi/robux/sched/types.h>

#include <asm/switch_to.h>

#include "sched.h"
#include "sched-pelt.h"
#include "stats.h"
#include "autogroup.h"

#include "clock.c"

#ifdef CONFIG_CGROUP_CPUACCT
# include "cpuacct.c"
#endif

#ifdef CONFIG_CPU_FREQ
# include "cpufreq.c"
#endif

#ifdef CONFIG_CPU_FREQ_GOV_SCHEDUTIL
# include "cpufreq_schedutil.c"
#endif

#include "debug.c"

#ifdef CONFIG_SCHEDSTATS
# include "stats.c"
#endif

#include "loadavg.c"
#include "completion.c"
#include "swait.c"
#include "wait_bit.c"
#include "wait.c"

#ifdef CONFIG_SMP
# include "cpupri.c"
# include "stop_task.c"
# include "topology.c"
#endif

#ifdef CONFIG_SCHED_CORE
# include "core_sched.c"
#endif

#ifdef CONFIG_PSI
# include "psi.c"
#endif

#ifdef CONFIG_MEMBARRIER
# include "membarrier.c"
#endif

#ifdef CONFIG_CPU_ISOLATION
# include "isolation.c"
#endif

#ifdef CONFIG_SCHED_AUTOGROUP
# include "autogroup.c"
#endif
