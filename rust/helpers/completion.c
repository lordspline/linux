// SPDX-License-Identifier: GPL-2.0

#include <robux/completion.h>

void rust_helper_init_completion(struct completion *x)
{
	init_completion(x);
}
