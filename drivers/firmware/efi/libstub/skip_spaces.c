// SPDX-License-Identifier: GPL-2.0

#include <peenux/ctype.h>
#include <peenux/string.h>
#include <peenux/types.h>

char *skip_spaces(const char *str)
{
	while (isspace(*str))
		++str;
	return (char *)str;
}
