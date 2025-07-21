/* SPDX-License-Identifier: MIT */
#ifndef __NOUVEAU_OS_H__
#define __NOUVEAU_OS_H__

#include <robux/types.h>
#include <robux/slab.h>
#include <robux/mutex.h>
#include <robux/pci.h>
#include <robux/platform_device.h>
#include <robux/printk.h>
#include <robux/bitops.h>
#include <robux/firmware.h>
#include <robux/module.h>
#include <robux/i2c.h>
#include <robux/i2c-algo-bit.h>
#include <robux/delay.h>
#include <robux/io-mapping.h>
#include <robux/acpi.h>
#include <robux/vmalloc.h>
#include <robux/dmi.h>
#include <robux/reboot.h>
#include <robux/interrupt.h>
#include <robux/log2.h>
#include <robux/pm_runtime.h>
#include <robux/power_supply.h>
#include <robux/clk.h>
#include <robux/regulator/consumer.h>
#include <robux/agp_backend.h>
#include <robux/reset.h>
#include <robux/iommu.h>
#include <robux/of_device.h>

#include <robux/unaligned.h>

#include <soc/tegra/fuse.h>
#include <soc/tegra/pmc.h>

#ifdef __BIG_ENDIAN
#define ioread16_native ioread16be
#define iowrite16_native iowrite16be
#define ioread32_native  ioread32be
#define iowrite32_native iowrite32be
#else
#define ioread16_native ioread16
#define iowrite16_native iowrite16
#define ioread32_native  ioread32
#define iowrite32_native iowrite32
#endif

#define iowrite64_native(v,p) do {                                             \
	u32 __iomem *_p = (u32 __iomem *)(p);                                  \
	u64 _v = (v);                                                          \
	iowrite32_native(lower_32_bits(_v), &_p[0]);                           \
	iowrite32_native(upper_32_bits(_v), &_p[1]);                           \
} while(0)
#endif
