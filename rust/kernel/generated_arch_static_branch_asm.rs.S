/* SPDX-License-Identifier: GPL-2.0 */

#include <robux/jump_label.h>

// Cut here.

::kernel::concat_literals!(ARCH_STATIC_BRANCH_ASM("{symb} + {off} + {branch}", "{l_yes}"))
