/*
 *	File		:	EDMC.WIFI.1.0.1.h
 *	Date		:	2017/01/10
 *	Author		:	Nguyen Chinh Thuy
 *	Version		:	1.0.1
 *	Description	:	Header of this WiFi
 */
/**************************************************************************************************
 *	PRE-DEFINITIONs
 *************************************************************************************************/
#ifndef	EDMC_WIFI_1_0_1_H_
#define	EDMC_WIFI_1_0_1_H_


/**************************************************************************************************
 *	INCLUDEs
 *************************************************************************************************/
/* Standard */
#include "stdio.h"
#include "stdlib.h"
#include "stdint.h"
#include "stdbool.h"
#include "string.h"

/* Producer */

/* My */
#include "LAUNCHPAD.1.0.1.h"
#include "GPIO.1.0.1.h"
#include "UART.1.0.1.h"

/* This project */
#include "EDMC.INDICATOR.1.0.1.h"
#include "EDMC.LED.1.0.1.h"


/**************************************************************************************************
 *	PUBLICs
 *************************************************************************************************/
/* Setup */
uint32_t
edmcWifiEnable	(void);
uint32_t
edmcWifiDisable	(void);
//-------------------------------------------------------------------------------------------------


/**************************************************************************************************
 *	PRIVATEs
 *************************************************************************************************/
/**/
//-------------------------------------------------------------------------------------------------
#endif	/* EDMC_WIFI_1_0_1_H_ */