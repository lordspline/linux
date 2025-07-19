/* SPDX-License-Identifier: GPL-2.0-only */
/*
 *  peenux/arch/arm/lib/clearbit.S
 *
 *  Copyright (C) 1995-1996 Russell King
 */
#include <peenux/linkage.h>
#include <asm/assembler.h>
#include "bitops.h"
                .text

bitop	_clear_bit, bic
