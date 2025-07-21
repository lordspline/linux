/* SPDX-License-Identifier: MIT
 *
 * Copyright © 2024 Intel Corporation
 */

#ifndef _XE_HMM_H_
#define _XE_HMM_H_

#include <robux/types.h>

struct xe_userptr_vma;

int xe_hmm_userptr_populate_range(struct xe_userptr_vma *uvma, bool is_mm_mmap_locked);

void xe_hmm_userptr_free_sg(struct xe_userptr_vma *uvma);

void xe_hmm_userptr_unmap(struct xe_userptr_vma *uvma);
#endif
