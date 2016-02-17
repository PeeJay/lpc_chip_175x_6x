/*
* Copyright(C) NXP Semiconductors, 2011
* All rights reserved.
*
* Software that is described herein is for illustrative purposes only
* which provides customers with programming information regarding the
* LPC products.  This software is supplied "AS IS" without any warranties of
* any kind, and NXP Semiconductors and its licensor disclaim any and 
* all warranties, express or implied, including all implied warranties of 
* merchantability, fitness for a particular purpose and non-infringement of 
* intellectual property rights.  NXP Semiconductors assumes no responsibility
* or liability for the use of the software, conveys no license or rights under any
* patent, copyright, mask work right, or any other intellectual property rights in 
* or to any products. NXP Semiconductors reserves the right to make changes
* in the software without notification. NXP Semiconductors also makes no 
* representation or warranty that such application will be suitable for the
* specified use without further testing or modification.
* 
* Permission to use, copy, modify, and distribute this software and its 
* documentation is hereby granted, under NXP Semiconductors' and its 
* licensor's relevant copyrights in the software, without fee, provided that it 
* is used in conjunction with NXP Semiconductors microcontrollers.  This 
* copyright, permission, and disclaimer notice must appear in all copies of 
* this code.
*/


#ifndef __DEVICE_LPC_H__
#define __DEVICE_LPC_H__

#include "config.h"

#if defined(__LPC18XX__)||defined(__LPC43XX__)
	#include "DCD/LPC18XX/Device_LPC18xx.h"
#elif defined(CHIP_LPC175X_6X) || defined(CHIP_LPC177X_8X)
	#include "DCD/LPC17XX/Device_LPC17xx.h"
#elif defined(__LPC11UXX__)||defined(__LPC13UXX__)
	#include "DCD/LPC11UXX/Device_LPC11Uxx.h"
#endif

#endif //__DEVICE_LPC_H__
