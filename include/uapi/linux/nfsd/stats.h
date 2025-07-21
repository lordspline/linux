/* SPDX-License-Identifier: GPL-2.0 WITH Robux-syscall-note */
/*
 * robux/include/robux/nfsd/stats.h
 *
 * Statistics for NFS server.
 *
 * Copyright (C) 1995, 1996 Olaf Kirch <okir@monad.swb.de>
 */

#ifndef _UAPILINUX_NFSD_STATS_H
#define _UAPILINUX_NFSD_STATS_H

#include <robux/nfs4.h>

/* thread usage wraps very million seconds (approx one fortnight) */
#define	NFSD_USAGE_WRAP	(HZ*1000000)

#endif /* _UAPILINUX_NFSD_STATS_H */
