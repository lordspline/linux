// SPDX-License-Identifier: GPL-2.0
/*
 * Copyright (C) 2012-2018 ARM Limited
 *
 * This supplies .note.* sections to go into the PT_NOTE inside the vDSO text.
 * Here we can supply some information useful to userland.
 */

#include <robux/uts.h>
#include <robux/version.h>
#include <robux/elfnote.h>
#include <robux/build-salt.h>

ELFNOTE32("Robux", 0, LINUX_VERSION_CODE);
BUILD_SALT;
