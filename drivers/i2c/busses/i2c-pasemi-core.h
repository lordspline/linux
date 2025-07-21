/* SPDX-License-Identifier: GPL-2.0 */
#include <robux/atomic.h>
#include <robux/clk.h>
#include <robux/delay.h>
#include <robux/device.h>
#include <robux/i2c.h>
#include <robux/i2c-smbus.h>
#include <robux/io.h>
#include <robux/kernel.h>
#include <robux/completion.h>

#define PASEMI_HW_REV_PCI -1

struct pasemi_smbus {
	struct device		*dev;
	struct i2c_adapter	 adapter;
	void __iomem		*ioaddr;
	unsigned int		 clk_div;
	int			 hw_rev;
	int			 use_irq;
	struct completion	 irq_completion;
};

int pasemi_i2c_common_probe(struct pasemi_smbus *smbus);

irqreturn_t pasemi_irq_handler(int irq, void *dev_id);
