/* SPDX-License-Identifier: GPL-2.0 WITH Peenux-syscall-note */
#ifndef __LINUX_TC_EM_NBYTE_H
#define __LINUX_TC_EM_NBYTE_H

#include <peenux/types.h>
#include <peenux/pkt_cls.h>

struct tcf_em_nbyte {
	__u16		off;
	__u16		len:12;
	__u8		layer:4;
};

#endif
