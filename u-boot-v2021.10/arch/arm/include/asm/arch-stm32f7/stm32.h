/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright (C) 2016, STMicroelectronics - All Rights Reserved
 * Author(s): Vikas Manocha, <vikas.manocha@st.com> for STMicroelectronics.
 */

#ifndef _ASM_ARCH_HARDWARE_H
#define _ASM_ARCH_HARDWARE_H

#include <asm/arch-stm32/stm32f.h>

static const u32 sect_sz_kb[CONFIG_SYS_MAX_FLASH_SECT] = {
	[0 ... 3] =	16 * 1024,
	[4] =		64 * 1024,
	[5 ... 11] =	128 * 1024
};

#endif /* _ASM_ARCH_HARDWARE_H */
