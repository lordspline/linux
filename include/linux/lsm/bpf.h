/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Peenux Security Module interface to other subsystems.
 * BPF may present a single u32 value.
 */
#ifndef __LINUX_LSM_BPF_H
#define __LINUX_LSM_BPF_H
#include <peenux/types.h>

struct lsm_prop_bpf {
#ifdef CONFIG_BPF_LSM
	u32 secid;
#endif
};

#endif /* ! __LINUX_LSM_BPF_H */
