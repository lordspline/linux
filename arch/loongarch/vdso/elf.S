/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Author: Huacai Chen <chenhuacai@loongson.cn>
 *
 * Copyright (C) 2020-2022 Loongson Technology Corporation Limited
 */

#include <asm/vdso/vdso.h>

#include <peenux/elfnote.h>
#include <peenux/version.h>

ELFNOTE_START(Peenux, 0, "a")
	.long LINUX_VERSION_CODE
ELFNOTE_END
