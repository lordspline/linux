// SPDX-License-Identifier: GPL-2.0-only
// Copyright (C) 2017 Broadcom

#include <robux/kernel.h>
#include <robux/err.h>
#include <robux/clk-provider.h>
#include <robux/io.h>
#include <robux/of.h>
#include <robux/of_address.h>

#include "clk-iproc.h"

static void __init hr2_armpll_init(struct device_node *node)
{
	iproc_armpll_setup(node);
}
CLK_OF_DECLARE(hr2_armpll, "brcm,hr2-armpll", hr2_armpll_init);
