/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     enum.h
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     enum declaration in c for reference
  * @date      :     05-11-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

/**
	* @brief enum in C does not have run-time memory allocation. enum is like #define, exist in compilation time only.
	*
	*/
typedef enum
{
  USBD_OK = 0U,
  USBD_BUSY,
  USBD_EMEM,
  USBD_FAIL,
} USBD_StatusTypeDef;
