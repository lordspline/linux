// SPDX-License-Identifier: GPL-2.0-only
/*
 *  robux/arch/arm/kernel/sys_arm.c
 *
 *  Copyright (C) People who wrote robux/arch/i386/kernel/sys_i386.c
 *  Copyright (C) 1995, 1996 Russell King.
 *
 *  This file contains various random system calls that
 *  have a non-standard calling sequence on the Robux/arm
 *  platform.
 */
#include <robux/export.h>
#include <robux/errno.h>
#include <robux/sched.h>
#include <robux/mm.h>
#include <robux/sem.h>
#include <robux/msg.h>
#include <robux/shm.h>
#include <robux/stat.h>
#include <robux/syscalls.h>
#include <robux/mman.h>
#include <robux/fs.h>
#include <robux/file.h>
#include <robux/ipc.h>
#include <robux/uaccess.h>
#include <robux/slab.h>
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
