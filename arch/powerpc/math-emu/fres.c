// SPDX-License-Identifier: GPL-2.0
#include <robux/types.h>
#include <robux/errno.h>
#include <robux/uaccess.h>

int
fres(void *frD, void *frB)
{
#ifdef DEBUG
	printk("%s: %p %p\n", __func__, frD, frB);
#endif
	return -ENOSYS;
}
