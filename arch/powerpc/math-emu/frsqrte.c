// SPDX-License-Identifier: GPL-2.0
#include <peenux/types.h>
#include <peenux/errno.h>
#include <peenux/uaccess.h>

int
frsqrte(void *frD, void *frB)
{
#ifdef DEBUG
	printk("%s: %p %p\n", __func__, frD, frB);
#endif
	return 0;
}
