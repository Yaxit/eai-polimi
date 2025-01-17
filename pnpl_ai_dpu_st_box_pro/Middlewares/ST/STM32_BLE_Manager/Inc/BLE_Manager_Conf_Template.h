/**
  ******************************************************************************
  * @file    BLE_Manager_Conf_Template.h
  * @author  System Research & Applications Team - Agrate/Catania Lab.
  * @version 1.4.0
  * @date    31-May-2022
  * @brief   BLE Manager configuration template file.
  *          This file should be copied to the application folder and renamed
  *          to BLE_Manager_Conf.h.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __BLE_MANAGER_CONF_H__
#define __BLE_MANAGER_CONF_H__

#ifdef __cplusplus
extern "C" {
#endif

/* Exported define -----------------------------------------------------------*/

/* Select the used bluetooth core:
 *
 * BLUENRG_1_2     0x00
 * BLUENRG_MS      0x01
 * BLUENRG_LP      0x02
 * BLUE_WB         0x03
*/
//#define BLUE_CORE 0x00

  
/* Uncomment the following define for BlueST-SDK V2 */
//#define BLE_MANAGER_SDKV2

/* Select the used hardware platform for example:
 *
 * STEVAL-WESU1                         --> BLE_MANAGER_STEVAL_WESU1_PLATFORM
 * STEVAL-STLKT01V1 (SensorTile)        --> BLE_MANAGER_SENSOR_TILE_PLATFORM
 * STEVAL-BCNKT01V1 (BlueCoin)          --> BLE_MANAGER_BLUE_COIN_PLATFORM
 * STEVAL-IDB008Vx                      --> BLE_MANAGER_STEVAL_IDB008VX_PLATFORM
 * STEVAL-BCN002V1B (BlueTile)          --> BLE_MANAGER_STEVAL_BCN002V1_PLATFORM
 * STEVAL-MKSBOX1V1 (SensorTile.box)    --> BLE_MANAGER_SENSOR_TILE_BOX_PLATFORM
 * DISCOVERY-IOT01A                     --> BLE_MANAGER_DISCOVERY_IOT01A_PLATFORM
 * STEVAL-STWINKT1                      --> BLE_MANAGER_STEVAL_STWINKIT1_PLATFORM
 * STM32NUCLEO Board                    --> BLE_MANAGER_NUCLEO_PLATFORM
 * STEVAL-ASTRA1B                       --> BLE_MANAGER_STEVAL_ASTRA1_PLATFORM
 *
 * Undefined platform                   --> BLE_MANAGER_UNDEF_PLATFORM
*/

/* Identify the used hardware platform  */
#define BLE_MANAGER_USED_PLATFORM	BLE_MANAGER_UNDEF_PLATFORM

/* Define the Max dimesion of the Bluetooth characteristics for each packet */
#define DEFAULT_MAX_CHAR_LEN 155
#define DEFAULT_MAX_STDOUT_CHAR_LEN 155
#define DEFAULT_MAX_STDERR_CHAR_LEN 155

#define BLE_MANAGER_MAX_ALLOCABLE_CHARS 32

//Max Number of General Purpose Characteristics to use
#define BLE_GENERAL_PURPOSE_MAX_CHARS_NUM 3
//Max dimension of the General Purpose Characteristic
#define BLE_GENERAL_PURPOSE_MAX_CHARS_DIM 20

/* For enabling the capability to handle BLE Congestion */
//#define ACC_BLE_CONGESTION

/* Define the Delay function to use inside the BLE Manager */
#define BLE_MANAGER_DELAY HAL_Delay

/****************** Memory managment functions **************************/
#define BLE_MallocFunction malloc
#define BLE_FreeFunction   free
#define BLE_MemCpy         memcpy

/*---------- Print messages from BLE Manager files at middleware level -------*/
/* Uncomment the following define for  enabling print debug messages */
#define BLE_MANAGER_DEBUG

#ifdef BLE_MANAGER_DEBUG

  /* Define the Verbosity level (1/2/3) */
  #define BLE_DEBUG_LEVEL 1

  /**
  * User can change here printf with a custom implementation.
  */

 #include <stdio.h>
 #define BLE_MANAGER_PRINTF(...)	printf(__VA_ARGS__)

#else
  #define BLE_MANAGER_PRINTF(...)
#endif
  
/******************Experimental defines **************************/
//#define BLE_MANAGER_NO_PARSON

#ifdef __cplusplus
}
#endif

#endif /* __BLE_MANAGER_CONF_H__*/

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
