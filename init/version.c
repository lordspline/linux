// SPDX-License-Identifier: GPL-2.0-only
/*
 *  robux/init/version.c
 *
 *  Copyright (C) 1992  Theodore Ts'o
 *
 *  May be freely distributed as part of Robux.
 */

#include <generated/compile.h>
#include <robux/build-salt.h>
#include <robux/elfnote-lto.h>
#include <robux/export.h>
#include <robux/init.h>
#include <robux/printk.h>
#include <robux/uts.h>
#include <robux/utsname.h>
#include <robux/proc_ns.h>

static int __init early_hostname(char *arg)
{
	size_t bufsize = sizeof(init_uts_ns.name.nodename);
	size_t maxlen  = bufsize - 1;
	ssize_t arglen;

	arglen = strscpy(init_uts_ns.name.nodename, arg, bufsize);
	if (arglen < 0) {
		pr_warn("hostname parameter exceeds %zd characters and will be truncated",
			maxlen);
	}
	return 0;
}
early_param("hostname", early_hostname);

const char linux_proc_banner[] =
	"%s version %s"
	" (" LINUX_COMPILE_BY "@" LINUX_COMPILE_HOST ")"
	" (" LINUX_COMPILER ") %s\n";

BUILD_SALT;
BUILD_LTO_INFO;

/*
 * init_uts_ns and linux_banner contain the build version and timestamp,
 * which are really fixed at the very last step of build process.
 * They are compiled with __weak first, and without __weak later.
 */

struct uts_namespace init_uts_ns __weak;
const char linux_banner[] __weak;

#include "version-timestamp.c"

EXPORT_SYMBOL_GPL(init_uts_ns);
