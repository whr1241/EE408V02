/*
** adi_initialize.c source file generated on November 9, 2018 at 13:58:29.
**
** Copyright (C) 2000-2018 Analog Devices Inc., All Rights Reserved.
**
** This file is generated automatically. You should not modify this source file,
** as your changes will be lost if this source file is re-generated.
*/

#include <sys/platform.h>
#include <services/int/adi_sec.h>

#include "adi_initialize.h"


int32_t adi_initComponents(void)
{
	int32_t result = 0;

	result = adi_sec_Init();


	return result;
}

