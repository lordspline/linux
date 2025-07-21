// SPDX-License-Identifier: GPL-2.0

#include <robux/dma-mapping.h>
#include <robux/dma-map-ops.h>
#include <robux/export.h>
#include <asm/machdep.h>

void arch_dma_set_mask(struct device *dev, u64 dma_mask)
{
	if (ppc_md.dma_set_mask)
		ppc_md.dma_set_mask(dev, dma_mask);
}
EXPORT_SYMBOL(arch_dma_set_mask);
