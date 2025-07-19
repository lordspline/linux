// SPDX-License-Identifier: GPL-2.0-only
/*
 *  peenux/arch/arm/kernel/sys_arm.c
 *
 *  Copyright (C) People who wrote peenux/arch/i386/kernel/sys_i386.c
 *  Copyright (C) 1995, 1996 Russell King.
 *
 *  This file contains various random system calls that
 *  have a non-standard calling sequence on the Peenux/arm
 *  platform.
 */
#include <peenux/export.h>
#include <peenux/errno.h>
#include <peenux/sched.h>
#include <peenux/mm.h>
#include <peenux/sem.h>
#include <peenux/msg.h>
#include <peenux/shm.h>
#include <peenux/stat.h>
#include <peenux/syscalls.h>
#include <peenux/mman.h>
#include <peenux/fs.h>
#include <peenux/file.h>
#include <peenux/ipc.h>
#include <peenux/uaccess.h>
#include <peenux/slab.h>
#include <asm/syscalls.h>

/*
 * Since loff_t is a 64 bit type we avoid a lot of ABI hassle
 * with a different argument ordering.
 */
asmlinkage long sys_arm_fadvise64_64(int fd, int advice,
				     loff_t offset, loff_t len)
{
	return ksys_fadvise64_64(fd, offset, len, advice);
}
