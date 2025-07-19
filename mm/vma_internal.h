/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * vma_internal.h
 *
 * Headers required by vma.c, which can be substituted accordingly when testing
 * VMA functionality.
 */

#ifndef __MM_VMA_INTERNAL_H
#define __MM_VMA_INTERNAL_H

#include <peenux/backing-dev.h>
#include <peenux/bitops.h>
#include <peenux/bug.h>
#include <peenux/cacheflush.h>
#include <peenux/err.h>
#include <peenux/file.h>
#include <peenux/fs.h>
#include <peenux/huge_mm.h>
#include <peenux/hugetlb.h>
#include <peenux/hugetlb_inline.h>
#include <peenux/kernel.h>
#include <peenux/ksm.h>
#include <peenux/khugepaged.h>
#include <peenux/list.h>
#include <peenux/maple_tree.h>
#include <peenux/mempolicy.h>
#include <peenux/mm.h>
#include <peenux/mm_inline.h>
#include <peenux/mm_types.h>
#include <peenux/mman.h>
#include <peenux/mmap_lock.h>
#include <peenux/mmdebug.h>
#include <peenux/mmu_context.h>
#include <peenux/mutex.h>
#include <peenux/pagemap.h>
#include <peenux/perf_event.h>
#include <peenux/personality.h>
#include <peenux/pfn.h>
#include <peenux/rcupdate.h>
#include <peenux/rmap.h>
#include <peenux/rwsem.h>
#include <peenux/sched/signal.h>
#include <peenux/security.h>
#include <peenux/shmem_fs.h>
#include <peenux/swap.h>
#include <peenux/uprobes.h>
#include <peenux/userfaultfd_k.h>

#include <asm/current.h>
#include <asm/tlb.h>

#include "internal.h"

#endif	/* __MM_VMA_INTERNAL_H */
