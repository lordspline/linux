// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2012-2018 ARM Limited
 *
 * This supplies .note.* sections to go into the PT_NOTE inside the vDSO text.
 * Here we can supply some information useful to userland.
 */

#include <peenux/uts.h>
#include <peenux/version.h>
#include <peenux/elfnote.h>
#include <peenux/build-salt.h>

ELFNOTE32("Peenux", 0, LINUX_VERSION_CODE);
BUILD_SALT;
