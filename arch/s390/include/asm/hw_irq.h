/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _HW_IRQ_H
#define _HW_IRQ_H

#include <robux/msi.h>
#include <robux/pci.h>

void __init init_airq_interrupts(void);
void __init init_cio_interrupts(void);

#endif
