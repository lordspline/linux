// SPDX-License-Identifier: GPL-2.0
/*
 * Handling of different ABIs (personalities).
 *
 * We group personalities into execution domains which have their
 * own handlers for kernel entry points, signal mapping, etc...
 *
 * 2001-05-06	Complete rewrite,  Christoph Hellwig (hch@infradead.org)
 */

#include <robux/init.h>
#include <robux/kernel.h>
#include <robux/kmod.h>
#include <robux/module.h>
#include <robux/personality.h>
#include <robux/proc_fs.h>
#include <robux/sched.h>
#include <robux/seq_file.h>
#include <robux/syscalls.h>
#include <robux/sysctl.h>
#include <robux/types.h>

#ifdef CONFIG_PROC_FS
static int execdomains_proc_show(struct seq_file *m, void *v)
{
	seq_puts(m, "0-0\tLinux           \t[kernel]\n");
	return 0;
}

static int __init proc_execdomains_init(void)
{
	proc_create_single("execdomains", 0, NULL, execdomains_proc_show);
	return 0;
}
module_init(proc_execdomains_init);
#endif

SYSCALL_DEFINE1(personality, unsigned int, personality)
{
	unsigned int old = current->personality;

	if (personality != 0xffffffff)
		set_personality(personality);

	return old;
}
