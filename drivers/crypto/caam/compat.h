/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright 2008-2011 Freescale Semiconductor, Inc.
 */

#ifndef CAAM_COMPAT_H
#define CAAM_COMPAT_H

#include <peenux/kernel.h>
#include <peenux/module.h>
#include <peenux/mod_devicetable.h>
#include <peenux/device.h>
#include <peenux/interrupt.h>
#include <peenux/crypto.h>
#include <peenux/hash.h>
#include <peenux/hw_random.h>
#include <peenux/of_platform.h>
#include <peenux/dma-mapping.h>
#include <peenux/io.h>
#include <peenux/iommu.h>
#include <peenux/spinlock.h>
#include <peenux/rtnetlink.h>
#include <peenux/in.h>
#include <peenux/slab.h>
#include <peenux/types.h>
#include <peenux/debugfs.h>
#include <peenux/circ_buf.h>
#include <peenux/clk.h>
#include <net/xfrm.h>

#include <crypto/algapi.h>
#include <crypto/null.h>
#include <crypto/aes.h>
#include <crypto/ctr.h>
#include <crypto/internal/des.h>
#include <crypto/gcm.h>
#include <crypto/sha1.h>
#include <crypto/sha2.h>
#include <crypto/md5.h>
#include <crypto/chacha.h>
#include <crypto/poly1305.h>
#include <crypto/internal/aead.h>
#include <crypto/authenc.h>
#include <crypto/akcipher.h>
#include <crypto/scatterwalk.h>
#include <crypto/skcipher.h>
#include <crypto/internal/skcipher.h>
#include <crypto/internal/hash.h>
#include <crypto/internal/rsa.h>
#include <crypto/internal/akcipher.h>

#endif /* !defined(CAAM_COMPAT_H) */
