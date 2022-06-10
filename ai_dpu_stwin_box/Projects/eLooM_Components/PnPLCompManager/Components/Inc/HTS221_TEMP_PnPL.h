/**
  ******************************************************************************
  * @file    HTS221_TEMP.h
  * @author  SRA
  * @version v1.0.0
  * @date    28-Oct-2021
  * @brief   HTS221 PnP-Like Component Manager
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under ODE SOFTWARE LICENSE AGREEMENT
  * SLA0094, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0094
  *
  ******************************************************************************
  */
  
/* Define to prevent recursive inclusion -------------------------------------*/  
#ifndef _PNPL_HTS221_TEMP_H_
#define _PNPL_HTS221_TEMP_H_

#ifdef __cplusplus
 extern "C" {
#endif 

/* Includes ------------------------------------------------------------------*/

#include "parson.h"
#include "IPnPLComponent.h"
#include "IPnPLComponent_vtbl.h"

 /**
  * Create a type name for _HTS221_TEMP_PnPL.
  */
 typedef struct _HTS221_TEMP_PnPL HTS221_TEMP_PnPL;

// Public API declaration
//***********************

IPnPLComponent_t *HTS221_TEMP_PnPLAlloc(void);

/**
 * Initialize the default parameters.
 *
 * @param _this [IN] specifies a pointer to a task object.
 * @return SYS_NO_ERROR_CODE if success, an error code otherwise
 */
uint8_t HTS221_TEMP_PnPLInit(IPnPLComponent_t *_this);

#ifdef __cplusplus
}
#endif

#endif /* _PNPL_HTS221_TEMP_H_ */

/******************* (C) COPYRIGHT 2016 STMicroelectronics *****END OF FILE****/