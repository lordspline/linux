/* SPDX-License-Identifier: GPL-2.0 */
#include <peenux/init.h>
#include <peenux/linkage.h>

__INITDATA

SYM_DATA_START(stub_exe_start)
	.incbin "arch/um/kernel/skas/stub_exe"
SYM_DATA_END_LABEL(stub_exe_start, SYM_L_GLOBAL, stub_exe_end)

__FINIT
