/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     decode.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A dummy implementation of the weak function decode() declared in decode.h
  * @date      :     04-22-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

/* includes */
#include <stdio.h>

/**
	* @brief decode() implements the decode function declared in decode.h
	* @param None
	* @retval None
  */
 __attribute__((weak)) void decode(void)
{
	printf("lib:decode()\n");
}


