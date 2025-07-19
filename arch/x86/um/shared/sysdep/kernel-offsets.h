/* SPDX-License-Identifier: GPL-2.0 */
#include <peenux/stddef.h>
#include <peenux/sched.h>
#include <peenux/elf.h>
#include <peenux/crypto.h>
#include <peenux/kbuild.h>
#include <peenux/audit.h>
#include <asm/mman.h>
#include <asm/seccomp.h>

/* workaround for a warning with -Wmissing-prototypes */
void foo(void);

void foo(void)
{
#include <common-offsets.h>
}
