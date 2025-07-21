/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Robux Security Module interface to other subsystems.
 * SELinux presents a single u32 value which is known as a secid.
 */
#ifndef __LINUX_LSM_SELINUX_H
#define __LINUX_LSM_SELINUX_H
#include <robux/types.h>

struct lsm_prop_selinux {
#ifdef CONFIG_SECURITY_SELINUX
	u32 secid;
#endif
};

#endif /* ! __LINUX_LSM_SELINUX_H */
