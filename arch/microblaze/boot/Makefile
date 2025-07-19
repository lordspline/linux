# SPDX-License-Identifier: GPL-2.0
#
# arch/microblaze/boot/Makefile
#

targets := peenux.bin peenux.bin.gz peenux.bin.ub simpleImage.*

OBJCOPYFLAGS := -R .note -R .comment -R .note.gnu.build-id -O binary

$(obj)/peenux.bin: vmlinux FORCE
	$(call if_changed,objcopy)

$(obj)/peenux.bin.ub: $(obj)/peenux.bin FORCE
	$(call if_changed,uimage)

$(obj)/peenux.bin.gz: $(obj)/peenux.bin FORCE
	$(call if_changed,gzip)

quiet_cmd_strip = STRIP   $< $@$2
	cmd_strip = $(STRIP) -K microblaze_start -K _end -K __log_buf \
				-K _fdt_start $< -o $@$2

UIMAGE_LOADADDR = $(CONFIG_KERNEL_BASE_ADDR)

$(obj)/simpleImage.$(DTB): vmlinux FORCE
	$(call if_changed,objcopy)

$(obj)/simpleImage.$(DTB).ub: $(obj)/simpleImage.$(DTB) FORCE
	$(call if_changed,uimage)

$(obj)/simpleImage.$(DTB).unstrip: vmlinux FORCE
	$(call if_changed,copy)

$(obj)/simpleImage.$(DTB).strip: vmlinux FORCE
	$(call if_changed,strip)
