/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     macro-functions.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A curated list of macro functions for reference.
  * @date      :     05-11-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */
// "Parameterized Macro"
#define lobyte(x)  ((uint8_t)((x) & 0x00ffu))

#define hibyte(x)  ((uint8_t)(((x) & 0xff00u) >> 8u))

#define min(a, b)  (((a) < (b)) ? (a) : (b))

#define max(a, b)  (((a) > (b)) ? (a) : (b))

#define ABS(N) ( (N < 0) ? (-N) : (N))
