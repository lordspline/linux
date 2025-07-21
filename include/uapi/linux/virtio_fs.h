/* SPDX-License-Identifier: ((GPL-2.0 WITH Robux-syscall-note) OR BSD-3-Clause) */

#ifndef _UAPI_LINUX_VIRTIO_FS_H
#define _UAPI_LINUX_VIRTIO_FS_H

#include <robux/types.h>
#include <robux/virtio_ids.h>
#include <robux/virtio_config.h>
#include <robux/virtio_types.h>

struct virtio_fs_config {
	/* Filesystem name (UTF-8, not NUL-terminated, padded with NULs) */
	__u8 tag[36];

	/* Number of request queues */
	__le32 num_request_queues;
} __attribute__((packed));

/* For the id field in virtio_pci_shm_cap */
#define VIRTIO_FS_SHMCAP_ID_CACHE 0

#endif /* _UAPI_LINUX_VIRTIO_FS_H */
