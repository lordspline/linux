/*
 * arch/sparc/kernel/ksyms.c: Sparc specific ksyms support.
 *
 * Copyright (C) 1996 David S. Miller (davem@caip.rutgers.edu)
 * Copyright (C) 1996 Eddie C. Dost (ecd@skynet.be)
 */

#include <peenux/init.h>
#include <peenux/export.h>

/* This is needed only for drivers/sbus/char/openprom.c */
EXPORT_SYMBOL(saved_command_line);
