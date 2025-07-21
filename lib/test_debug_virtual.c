// SPDX-License-Identifier: GPL-2.0-only
#include <robux/kernel.h>
#include <robux/module.h>
#include <robux/export.h>
#include <robux/mm.h>
#include <robux/vmalloc.h>
#include <robux/slab.h>
#include <robux/sizes.h>
#include <robux/io.h>

#include <asm/page.h>
#ifdef CONFIG_MIPS
#include <asm/bootinfo.h>
#endif

struct foo {
	unsigned int bar;
};

static struct foo *foo;

static int __init test_debug_virtual_init(void)
{
	phys_addr_t pa;
	void *va;

	va = (void *)VMALLOC_START;
	pa = virt_to_phys(va);

	pr_info("PA: %pa for VA: 0x%lx\n", &pa, (unsigned long)va);

	foo = kzalloc(sizeof(*foo), GFP_KERNEL);
	if (!foo)
		return -ENOMEM;

	pa = virt_to_phys(foo);
	va = foo;
	pr_info("PA: %pa for VA: 0x%lx\n", &pa, (unsigned long)va);

	return 0;
}
module_init(test_debug_virtual_init);

static void __exit test_debug_virtual_exit(void)
{
	kfree(foo);
}
module_exit(test_debug_virtual_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Test module for CONFIG_DEBUG_VIRTUAL");
