// SPDX-License-Identifier: GPL-2.0

#include <robux/ctype.h>
#include <robux/string.h>
#include <robux/types.h>

char *skip_spaces(const char *str)
{
	while (isspace(*str))
		++str;
	return (char *)str;
}
