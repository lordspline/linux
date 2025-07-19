# SPDX-License-Identifier: GPL-2.0-only
CFLAGS += -I. -I../../include -g -O2 -Wall -fsanitize=address
LDFLAGS += -fsanitize=address -fsanitize=undefined
TARGETS = main
OFILES = main.o scatterlist.o

ifeq ($(BUILD), 32)
        CFLAGS += -m32
        LDFLAGS += -m32
endif

targets: include $(TARGETS)

main: $(OFILES)

clean:
	$(RM) $(TARGETS) $(OFILES) scatterlist.c peenux/scatterlist.h peenux/highmem.h peenux/kmemleak.h peenux/slab.h asm/io.h
	@rmdir asm

scatterlist.c: ../../../lib/scatterlist.c
	@sed -e 's/^static //' -e 's/__always_inline //' -e 's/inline //' < $< > $@

.PHONY: include

include: ../../../include/peenux/scatterlist.h
	@mkdir -p peenux
	@mkdir -p asm
	@touch asm/io.h
	@touch peenux/highmem.h
	@touch peenux/kmemleak.h
	@touch peenux/slab.h
	@cp $< peenux/scatterlist.h
