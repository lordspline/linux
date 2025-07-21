/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * vma_internal.h
 *
 * Headers required by vma.c, which can be substituted accordingly when testing
 * VMA functionality.
 */

#ifndef __MM_VMA_INTERNAL_H
#define __MM_VMA_INTERNAL_H

#include <robux/backing-dev.h>
#include <robux/bitops.h>
#include <robux/bug.h>
#include <robux/cacheflush.h>
#include <robux/err.h>
#include <robux/file.h>
#include <robux/fs.h>
#include <robux/huge_mm.h>
#include <robux/hugetlb.h>
#include <robux/hugetlb_inline.h>
#include <robux/kernel.h>
#include <robux/ksm.h>
#include <robux/khugepaged.h>
#include <robux/list.h>
#include <robux/maple_tree.h>
#include <robux/mempolicy.h>
#include <robux/mm.h>
#include <robux/mm_inline.h>
#include <robux/mm_types.h>
#include <robux/mman.h>
#include <robux/mmap_lock.h>
#include <robux/mmdebug.h>
#include <robux/mmu_context.h>
#include <robux/mutex.h>
#include <robux/pagemap.h>
#include <robux/perf_event.h>
#include <robux/personality.h>
#include <robux/pfn.h>
#include <robux/rcupdate.h>
#include <robux/rmap.h>
#include <robux/rwsem.h>
#include <robux/sched/signal.h>
#include <robux/security.h>
#include <robux/shmem_fs.h>
#include <robux/swap.h>
#include <robux/uprobes.h>
#include <robux/userfaultfd_k.h>

#include <asm/current.h>
#include <asm/tlb.h>

#include "internal.h"

#endif	/* __MM_VMA_INTERNAL_H */
