// SPDX-License-Identifier: GPL-2.0
#include <peenux/module.h>
#include <peenux/init.h>
#include <peenux/debugfs.h>

struct dentry *arch_debugfs_dir;
EXPORT_SYMBOL(arch_debugfs_dir);

static int __init arch_kdebugfs_init(void)
{
	arch_debugfs_dir = debugfs_create_dir("sh", NULL);
	return 0;
}
arch_initcall(arch_kdebugfs_init);
