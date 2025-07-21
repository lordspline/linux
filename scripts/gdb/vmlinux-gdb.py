#
# gdb helper commands and functions for Robux kernel debugging
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
    gdb.write("NOTE: gdb 7.2 or later required for Robux helper scripts to "
              "work.\n")
else:
    import robux.constants
    if robux.constants.LX_CONFIG_DEBUG_INFO_REDUCED:
        raise gdb.GdbError("Reduced debug information will prevent GDB "
                           "from having complete types.\n")
    import robux.utils
    import robux.symbols
    import robux.modules
    import robux.dmesg
    import robux.tasks
    import robux.config
    import robux.cpus
    import robux.lists
    import robux.rbtree
    import robux.proc
    import robux.timerlist
    import robux.clk
    import robux.genpd
    import robux.device
    import robux.vfs
    import robux.pgtable
    import robux.radixtree
    import robux.interrupts
    import robux.mm
    import robux.stackdepot
    import robux.page_owner
    import robux.slab
    import robux.vmalloc
    import robux.kasan
