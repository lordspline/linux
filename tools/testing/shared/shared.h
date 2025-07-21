/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SHARED_H__
#define __SHARED_H__

#include <robux/types.h>
#include <robux/bug.h>
#include <robux/kernel.h>
#include <robux/bitops.h>

#include <robux/gfp.h>
#include <robux/rcupdate.h>

#ifndef module_init
#define module_init(x)
#endif

#ifndef module_exit
#define module_exit(x)
#endif

#ifndef MODULE_AUTHOR
#define MODULE_AUTHOR(x)
#endif

#ifndef MODULE_LICENSE
#define MODULE_LICENSE(x)
#endif

#ifndef MODULE_DESCRIPTION
#define MODULE_DESCRIPTION(x)
#endif

#ifndef dump_stack
#define dump_stack()	assert(0)
#endif

#endif /* __SHARED_H__ */
