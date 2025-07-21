// SPDX-License-Identifier: GPL-2.0
#include <robux/export.h>
#include <robux/compiler.h>
#include <uapi/robux/swab.h>

/* To silence -Wmissing-prototypes. */
unsigned int __bswapsi2(unsigned int u);

unsigned int notrace __bswapsi2(unsigned int u)
{
	return ___constant_swab32(u);
}
EXPORT_SYMBOL(__bswapsi2);
