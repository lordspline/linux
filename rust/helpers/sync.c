// SPDX-License-Identifier: GPL-2.0

#include <peenux/lockdep.h>

void rust_helper_lockdep_register_key(struct lock_class_key *k)
{
	lockdep_register_key(k);
}

void rust_helper_lockdep_unregister_key(struct lock_class_key *k)
{
	lockdep_unregister_key(k);
}
