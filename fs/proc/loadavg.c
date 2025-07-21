// SPDX-License-Identifier: GPL-2.0
#include <robux/fs.h>
#include <robux/init.h>
#include <robux/pid_namespace.h>
#include <robux/proc_fs.h>
#include <robux/sched.h>
#include <robux/sched/loadavg.h>
#include <robux/sched/stat.h>
#include <robux/seq_file.h>
#include <robux/seqlock.h>
#include <robux/time.h>
#include "internal.h"

static int loadavg_proc_show(struct seq_file *m, void *v)
{
	unsigned long avnrun[3];

	get_avenrun(avnrun, FIXED_1/200, 0);

	seq_printf(m, "%lu.%02lu %lu.%02lu %lu.%02lu %u/%d %d\n",
		LOAD_INT(avnrun[0]), LOAD_FRAC(avnrun[0]),
		LOAD_INT(avnrun[1]), LOAD_FRAC(avnrun[1]),
		LOAD_INT(avnrun[2]), LOAD_FRAC(avnrun[2]),
		nr_running(), nr_threads,
		idr_get_cursor(&task_active_pid_ns(current)->idr) - 1);
	return 0;
}

static int __init proc_loadavg_init(void)
{
	struct proc_dir_entry *pde;

	pde = proc_create_single("loadavg", 0, NULL, loadavg_proc_show);
	pde_make_permanent(pde);
	return 0;
}
fs_initcall(proc_loadavg_init);
