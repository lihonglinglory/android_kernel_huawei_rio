/*
 * Based on arch/arm/include/asm/setup.h
 *
 * Copyright (C) 1997-1999 Russell King
 * Copyright (C) 2012 ARM Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __ASM_SETUP_H
#define __ASM_SETUP_H

#include <linux/types.h>

#define COMMAND_LINE_SIZE	2048
/* < DTS2014112904825 duanhuan 20141129 begin */
#ifdef CONFIG_HUAWEI_KERNEL
/* runmode : factory , normal */
bool is_runmode_factory(void);
#endif
/* DTS2014112904825 duanhuan 20141129 end > */
#endif
