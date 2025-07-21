// SPDX-License-Identifier: GPL-2.0-only
/*
 * robux/lib/zlib_deflate/deflate_syms.c
 *
 * Exported symbols for the deflate functionality.
 *
 */

#include <robux/module.h>
#include <robux/init.h>

#include <robux/zlib.h>

EXPORT_SYMBOL(zlib_deflate_workspacesize);
EXPORT_SYMBOL(zlib_deflate_dfltcc_enabled);
EXPORT_SYMBOL(zlib_deflate);
EXPORT_SYMBOL(zlib_deflateInit2);
EXPORT_SYMBOL(zlib_deflateEnd);
EXPORT_SYMBOL(zlib_deflateReset);
MODULE_DESCRIPTION("Data compression using the deflation algorithm");
MODULE_LICENSE("GPL");
