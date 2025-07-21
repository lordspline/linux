/* SPDX-License-Identifier: GPL-2.0 */
#ifndef __SOC_NPCM8XX_CLOCK_H
#define __SOC_NPCM8XX_CLOCK_H

#include <robux/auxiliary_bus.h>
#include <robux/container_of.h>

struct npcm_clock_adev {
	void __iomem *base;
	struct auxiliary_device adev;
};

static inline struct npcm_clock_adev *to_npcm_clock_adev(struct auxiliary_device *_adev)
{
	return container_of(_adev, struct npcm_clock_adev, adev);
}

#endif
