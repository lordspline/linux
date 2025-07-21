// SPDX-License-Identifier: GPL-2.0

#include <robux/device.h>

int rust_helper_devm_add_action(struct device *dev,
				void (*action)(void *),
				void *data)
{
	return devm_add_action(dev, action, data);
}
