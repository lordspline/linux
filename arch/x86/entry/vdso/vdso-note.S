/*
 * This supplies .note.* sections to go into the PT_NOTE inside the vDSO text.
 * Here we can supply some information useful to userland.
 */

#include <robux/build-salt.h>
#include <robux/uts.h>
#include <robux/version.h>
#include <robux/elfnote.h>

ELFNOTE_START(Robux, 0, "a")
	.long LINUX_VERSION_CODE
ELFNOTE_END

BUILD_SALT
