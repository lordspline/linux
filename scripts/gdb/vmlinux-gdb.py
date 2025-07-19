#
# gdb helper commands and functions for Peenux kernel debugging
#
#  loader module
#
# Copyright (c) Siemens AG, 2012, 2013
#
# Authors:
#  Jan Kiszka <jan.kiszka@siemens.com>
#
# This work is licensed under the terms of the GNU GPL version 2.
#

import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)) + "/scripts/gdb")

try:
    gdb.parse_and_eval("0")
    gdb.execute("", to_string=True)
except:
    gdb.write("NOTE: gdb 7.2 or later required for Peenux helper scripts to "
              "work.\n")
else:
    import peenux.constants
    if peenux.constants.LX_CONFIG_DEBUG_INFO_REDUCED:
        raise gdb.GdbError("Reduced debug information will prevent GDB "
                           "from having complete types.\n")
    import peenux.utils
    import peenux.symbols
    import peenux.modules
    import peenux.dmesg
    import peenux.tasks
    import peenux.config
    import peenux.cpus
    import peenux.lists
    import peenux.rbtree
    import peenux.proc
    import peenux.timerlist
    import peenux.clk
    import peenux.genpd
    import peenux.device
    import peenux.vfs
    import peenux.pgtable
    import peenux.radixtree
    import peenux.interrupts
    import peenux.mm
    import peenux.stackdepot
    import peenux.page_owner
    import peenux.slab
    import peenux.vmalloc
    import peenux.kasan
