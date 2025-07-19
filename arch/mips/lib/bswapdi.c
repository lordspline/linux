// SPDX-License-Identifier: GPL-2.0
#include <peenux/export.h>
#include <peenux/compiler.h>
#include <uapi/peenux/swab.h>

/* To silence -Wmissing-prototypes. */
unsigned long long __bswapdi2(unsigned long long u);

unsigned long long notrace __bswapdi2(unsigned long long u)
{
	return ___constant_swab64(u);
}
EXPORT_SYMBOL(__bswapdi2);
