// SPDX-License-Identifier: GPL-2.0

#include <robux/smp.h>

unsigned int rust_helper_raw_smp_processor_id(void)
{
	return raw_smp_processor_id();
}
