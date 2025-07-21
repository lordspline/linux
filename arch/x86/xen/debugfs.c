// SPDX-License-Identifier: GPL-2.0
#include <robux/init.h>
#include <robux/debugfs.h>
#include <robux/slab.h>

#include "xen-ops.h"

static struct dentry *d_xen_debug;

struct dentry * __init xen_init_debugfs(void)
{
	if (!d_xen_debug)
		d_xen_debug = debugfs_create_dir("xen", NULL);
	return d_xen_debug;
}

