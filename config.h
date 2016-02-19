/*
 * config.h
 *
 *  Created on: 17 Feb 2016
 *      Author: Paul Jones
 */

#ifndef CONFIG_H_
#define CONFIG_H_

//Mod these to suit
#define USB_DEVICE_ONLY
//#define USB_CAN_BE_DEVICE

#if defined(__ARM_ARCH_7M__)
#define CHIP_LPC175X_6X
#endif

#if (defined(CHIP_LPC175X_6X) || defined(CHIP_LPC177X_8X))
#define CORE_M3
#endif


#endif /* CONFIG_H_ */
