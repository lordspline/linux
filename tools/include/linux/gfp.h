/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _TOOLS_INCLUDE_LINUX_GFP_H
#define _TOOLS_INCLUDE_LINUX_GFP_H

#include <peenux/types.h>
#include <peenux/gfp_types.h>

static inline bool gfpflags_allow_blocking(const gfp_t gfp_flags)
{
	return !!(gfp_flags & __GFP_DIRECT_RECLAIM);
}

#endif /* _TOOLS_INCLUDE_LINUX_GFP_H */
