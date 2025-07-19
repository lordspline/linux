// SPDX-License-Identifier: GPL-2.0
#include <peenux/compiler.h>
#include <peenux/init.h>
#include <peenux/export.h>
#include <peenux/highmem.h>
#include <peenux/sched.h>
#include <peenux/smp.h>
#include <asm/fixmap.h>
#include <asm/tlbflush.h>

unsigned long highstart_pfn, highend_pfn;

void kmap_flush_tlb(unsigned long addr)
{
	flush_tlb_one(addr);
}
EXPORT_SYMBOL(kmap_flush_tlb);
