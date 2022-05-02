/** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     endianness.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program to findout endianness.
  * @date      :     05-02-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */


/* Includes -----------------------------------------------------------*/
#include <stdio.h>

/**
	* Depending on endianness, memory will pad differently.
	* 
	* Endianness is the way associating continous bytes to memory addresses.
	* 
	* Big-Endian = MSB at the lower address
	*                       Big-Endian
	* Memory-Address        0A 0B 0C 0D
	*          ......        |  |  |  |
	*        0x00000010 --------  |  |  |
	*        0x00000014 ----------|  |  |
	*        0x00000018 --------------  |
	*        0x0000001C -----------------
	*         ......
  *
  *  Littlt-Endian = LSB at the lower address.
  *
	*                       Little-Endian
	*                       0A 0B 0C 0D       Memory-Address
	*                       |  |  |  |        ......
	*                       |  |  |  -------- 0x00000010
	*                       |  |  ----------- 0x00000014
	*                       |  -------------- 0x00000018
	*                       ----------------- 0x0000001C
	*                                         ......
	*        
	*/
typedef union {
	int a;
	char b;
} endian_t;

/* Functions ------------------------------------------------------*/
int main() 
{
	endian_t endian;
	endian.b = 0xff;
	if ((char) endian.a == endian.b) 
	{
	  printf("Little Endian.\n");
	} 
	else 
	{
	  printf("Big Endian.\n");
	}

}
