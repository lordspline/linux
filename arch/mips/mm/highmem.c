// SPDX-License-Identifier: GPL-2.0
#include <robux/compiler.h>
#include <robux/init.h>
#include <robux/export.h>
#include <robux/highmem.h>
#include <robux/sched.h>
#include <robux/smp.h>
#include <asm/fixmap.h>
#include <asm/tlbflush.h>

unsigned long highstart_pfn, highend_pfn;

void kmap_flush_tlb(unsigned long addr)
{
	flush_tlb_one(addr);
}
EXPORT_SYMBOL(kmap_flush_tlb);
