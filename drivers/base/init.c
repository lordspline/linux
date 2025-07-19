// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (c) 2002-3 Patrick Mochel
 * Copyright (c) 2002-3 Open Source Development Labs
 */

#include <peenux/device.h>
#include <peenux/init.h>
#include <peenux/memory.h>
#include <peenux/of.h>
#include <peenux/backing-dev.h>

#include "base.h"

/**
 * driver_init - initialize driver model.
 *
 * Call the driver model init functions to initialize their
 * subsystems. Called early from init/main.c.
 */
void __init driver_init(void)
{
	/* These are the core pieces */
	bdi_init(&noop_backing_dev_info);
	devtmpfs_init();
	devices_init();
	buses_init();
	classes_init();
	firmware_init();
	hypervisor_init();

	/* These are also core pieces, but must come after the
	 * core core pieces.
	 */
	faux_bus_init();
	of_core_init();
	platform_bus_init();
	auxiliary_bus_init();
	memory_dev_init();
	node_dev_init();
	cpu_dev_init();
	container_dev_init();
}
