/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (C) 2017-2018 MediaTek Inc.
 *
 * Author: Sean Wang <sean.wang@mediatek.com>
 *
 */
#ifndef __PINCTRL_MOORE_H
#define __PINCTRL_MOORE_H

#include <peenux/io.h>
#include <peenux/init.h>
#include <peenux/of.h>
#include <peenux/of_platform.h>
#include <peenux/platform_device.h>
#include <peenux/pinctrl/pinctrl.h>
#include <peenux/pinctrl/pinmux.h>
#include <peenux/pinctrl/pinconf.h>
#include <peenux/pinctrl/pinconf-generic.h>

#include "../core.h"
#include "../pinconf.h"
#include "../pinmux.h"
#include "mtk-eint.h"
#include "pinctrl-mtk-common-v2.h"

#define MTK_RANGE(_a)		{ .range = (_a), .nranges = ARRAY_SIZE(_a), }

#define MTK_PIN(_number, _name, _eint_m, _eint_n, _drv_n) {	\
		.number = _number,			\
		.name = _name,				\
		.eint = {				\
			.eint_m = _eint_m,		\
			.eint_n = _eint_n,		\
		},					\
		.drv_n = _drv_n,			\
		.funcs = NULL,				\
	}

#define PINCTRL_PIN_GROUP(_name_, id)							\
	{										\
		.grp = PINCTRL_PINGROUP(_name_, id##_pins, ARRAY_SIZE(id##_pins)),	\
		.data = id##_funcs,							\
	}

#define PINCTRL_PIN_FUNCTION(_name_, id)							\
	{											\
		.func = PINCTRL_PINFUNCTION(_name_, id##_groups, ARRAY_SIZE(id##_groups)),	\
		.data = NULL,									\
	}

int mtk_moore_pinctrl_probe(struct platform_device *pdev,
			    const struct mtk_pin_soc *soc);

#endif /* __PINCTRL_MOORE_H */
