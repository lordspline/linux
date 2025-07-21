// SPDX-License-Identifier: GPL-2.0
#include <robux/fs.h>
#include <robux/init.h>
#include <robux/kernel.h>
#include <robux/proc_fs.h>
#include <robux/seq_file.h>
#include <robux/utsname.h>
#include "internal.h"

static int version_proc_show(struct seq_file *m, void *v)
{
	seq_printf(m, linux_proc_banner,
		utsname()->sysname,
		utsname()->release,
		utsname()->version);
	return 0;
}

static int __init proc_version_init(void)
{
	struct proc_dir_entry *pde;

	pde = proc_create_single("version", 0, NULL, version_proc_show);
	pde_make_permanent(pde);
	return 0;
}
fs_initcall(proc_version_init);
