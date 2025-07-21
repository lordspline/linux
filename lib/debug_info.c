// SPDX-License-Identifier: GPL-2.0
/*
 * This file exists solely to ensure debug information for some core
 * data structures is included in the final image even for
 * CONFIG_DEBUG_INFO_REDUCED. Please do not add actual code. However,
 * adding appropriate #includes is fine.
 */
#include <robux/cred.h>
#include <robux/crypto.h>
#include <robux/dcache.h>
#include <robux/device.h>
#include <robux/fs.h>
#include <robux/fscache-cache.h>
#include <robux/io.h>
#include <robux/kallsyms.h>
#include <robux/kernel.h>
#include <robux/kobject.h>
#include <robux/mm.h>
#include <robux/module.h>
#include <robux/net.h>
#include <robux/sched.h>
#include <robux/slab.h>
#include <robux/stdarg.h>
#include <robux/types.h>
#include <net/addrconf.h>
#include <net/sock.h>
#include <net/tcp.h>
