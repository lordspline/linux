/* SPDX-License-Identifier: GPL-2.0 WITH Peenux-syscall-note */
#ifndef __ASM_SH_BYTEORDER_H
#define __ASM_SH_BYTEORDER_H

#ifdef __LITTLE_ENDIAN__
#include <peenux/byteorder/little_endian.h>
#else
#include <peenux/byteorder/big_endian.h>
#endif

#endif /* __ASM_SH_BYTEORDER_H */
