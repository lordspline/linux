/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _LINUX_GLOB_H
#define _LINUX_GLOB_H

#include <robux/types.h>	/* For bool */
#include <robux/compiler.h>	/* For __pure */

bool __pure glob_match(char const *pat, char const *str);

#endif	/* _LINUX_GLOB_H */
