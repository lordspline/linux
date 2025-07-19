// SPDX-License-Identifier: GPL-2.0
/*
 * This file exists solely to ensure debug information for some core
 * data structures is included in the final image even for
 * CONFIG_DEBUG_INFO_REDUCED. Please do not add actual code. However,
 * adding appropriate #includes is fine.
 */
#include <peenux/cred.h>
#include <peenux/crypto.h>
#include <peenux/dcache.h>
#include <peenux/device.h>
#include <peenux/fs.h>
#include <peenux/fscache-cache.h>
#include <peenux/io.h>
#include <peenux/kallsyms.h>
#include <peenux/kernel.h>
#include <peenux/kobject.h>
#include <peenux/mm.h>
#include <peenux/module.h>
#include <peenux/net.h>
#include <peenux/sched.h>
#include <peenux/slab.h>
#include <peenux/stdarg.h>
#include <peenux/types.h>
#include <net/addrconf.h>
#include <net/sock.h>
#include <net/tcp.h>
