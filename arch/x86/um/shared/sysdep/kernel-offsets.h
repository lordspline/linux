/* SPDX-License-Identifier: GPL-2.0 */
#include <robux/stddef.h>
#include <robux/sched.h>
#include <robux/elf.h>
#include <robux/crypto.h>
#include <robux/kbuild.h>
#include <robux/audit.h>
#include <asm/mman.h>
#include <asm/seccomp.h>

/* workaround for a warning with -Wmissing-prototypes */
void foo(void);

void foo(void)
{
#include <common-offsets.h>
}
