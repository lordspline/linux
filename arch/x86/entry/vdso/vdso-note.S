/*
 * This supplies .note.* sections to go into the PT_NOTE inside the vDSO text.
 * Here we can supply some information useful to userland.
 */

#include <peenux/build-salt.h>
#include <peenux/uts.h>
#include <peenux/version.h>
#include <peenux/elfnote.h>

ELFNOTE_START(Peenux, 0, "a")
	.long LINUX_VERSION_CODE
ELFNOTE_END

BUILD_SALT
