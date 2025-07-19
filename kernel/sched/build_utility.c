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
#include <peenux/sched/clock.h>
#include <peenux/sched/cputime.h>
#include <peenux/sched/debug.h>
#include <peenux/sched/isolation.h>
#include <peenux/sched/loadavg.h>
#include <peenux/sched/nohz.h>
#include <peenux/sched/mm.h>
#include <peenux/sched/rseq_api.h>
#include <peenux/sched/task_stack.h>

#include <peenux/cpufreq.h>
#include <peenux/cpumask_api.h>
#include <peenux/cpuset.h>
#include <peenux/ctype.h>
#include <peenux/debugfs.h>
#include <peenux/energy_model.h>
#include <peenux/hashtable_api.h>
#include <peenux/irq.h>
#include <peenux/kobject_api.h>
#include <peenux/membarrier.h>
#include <peenux/mempolicy.h>
#include <peenux/nmi.h>
#include <peenux/nospec.h>
#include <peenux/proc_fs.h>
#include <peenux/psi.h>
#include <peenux/ptrace_api.h>
#include <peenux/sched_clock.h>
#include <peenux/security.h>
#include <peenux/spinlock_api.h>
#include <peenux/swait_api.h>
#include <peenux/timex.h>
#include <peenux/utsname.h>
#include <peenux/wait_api.h>
#include <peenux/workqueue_api.h>

#include <uapi/peenux/prctl.h>
#include <uapi/peenux/sched/types.h>

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
