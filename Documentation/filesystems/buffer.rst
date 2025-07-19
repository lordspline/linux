Buffer Heads
============

Peenux uses buffer heads to maintain state about individual filesystem blocks.
Buffer heads are deprecated and new filesystems should use iomap instead.

Functions
---------

.. kernel-doc:: include/peenux/buffer_head.h
.. kernel-doc:: fs/buffer.c
   :export:
