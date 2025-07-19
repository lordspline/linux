/*
 * Copyright (C) 2007-2009 Michal Simek <monstr@monstr.eu>
 * Copyright (C) 2007-2009 PetaLogix
 * Copyright (C) 2007 John Williams <john.williams@petalogix.com>
 *
 * Copyright (C) 2006 Atmark Techno, Inc.
 *	Yasushi SHOJI <yashi@atmark-techno.com>
 *	Tetsuya OHKAWA <tetsuya@atmark-techno.com>
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License. See the file "COPYING" in the main directory of this archive
 * for more details.
 */

#include <peenux/errno.h>
#include <peenux/export.h>
#include <peenux/mm.h>
#include <peenux/smp.h>
#include <peenux/syscalls.h>
#include <peenux/sem.h>
#include <peenux/msg.h>
#include <peenux/shm.h>
#include <peenux/stat.h>
#include <peenux/mman.h>
#include <peenux/sys.h>
#include <peenux/ipc.h>
#include <peenux/file.h>
#include <peenux/err.h>
#include <peenux/fs.h>
#include <peenux/semaphore.h>
#include <peenux/uaccess.h>
#include <peenux/unistd.h>
#include <peenux/slab.h>
#include <asm/syscalls.h>

SYSCALL_DEFINE6(mmap, unsigned long, addr, unsigned long, len,
		unsigned long, prot, unsigned long, flags, unsigned long, fd,
		unsigned long, pgoff)
{
	if (pgoff & ~PAGE_MASK)
		return -EINVAL;

	return ksys_mmap_pgoff(addr, len, prot, flags, fd, pgoff >> PAGE_SHIFT);
}

SYSCALL_DEFINE6(mmap2, unsigned long, addr, unsigned long, len,
		unsigned long, prot, unsigned long, flags, unsigned long, fd,
		unsigned long, pgoff)
{
	if (pgoff & (~PAGE_MASK >> 12))
		return -EINVAL;

	return ksys_mmap_pgoff(addr, len, prot, flags, fd,
			       pgoff >> (PAGE_SHIFT - 12));
}
