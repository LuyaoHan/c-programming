/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     print-array.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program to convert an array of hex data into string for printing.
  * @date      :     04-23-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

/* Includes -----------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>


/* Functions ------------------------------------------------------*/

/**
	* 
	*/
int main()
{
	uint8_t buf[] = {0xC0, 0xFE, 0xBE, 0xEF};
	printf(" > Printing buffer...\n");
	printf("%#02x %#02x %#02x %#02x\n", buf[0], buf[1], buf[2], buf[3]); // %x means print hex format, 02 means two digit place, # means add '0x' prefix.
}

