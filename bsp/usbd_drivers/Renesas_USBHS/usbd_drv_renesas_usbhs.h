/*
*********************************************************************************************************
*                                            uC/USB-Device
*                                    The Embedded USB Device Stack
*
*                    Copyright 2004-2020 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                          USB DEVICE DRIVER
*
*                                       RENESAS USB HIGH-SPEED
*
* Filename : usbd_drv_renesas_usbhs.h
* Version  : V4.06.00
*********************************************************************************************************
* Note(s)  : (1) You can find specific information about this driver at:
*                https://doc.micrium.com/display/USBDDRV/RENESAS_USBHS
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*
* Note(s) : (1) This USB device driver function header file is protected from multiple pre-processor
*               inclusion through use of the USB device driver module present pre-processor macro
*               definition.
*********************************************************************************************************
*/

#ifndef  USBD_DRV_RENESAS_USBHS_MODULE_PRESENT                  /* See Note #1.                                         */
#define  USBD_DRV_RENESAS_USBHS_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "usbd_core.h"


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          USB DEVICE DRIVER
*********************************************************************************************************
*/

extern  USBD_DRV_API  USBD_DrvAPI_RenesasRZ_DMA;
extern  USBD_DRV_API  USBD_DrvAPI_RenesasRZ_FIFO;

extern  USBD_DRV_API  USBD_DrvAPI_RenesasRX64M_DMA;
extern  USBD_DRV_API  USBD_DrvAPI_RenesasRX64M_FIFO;


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif
