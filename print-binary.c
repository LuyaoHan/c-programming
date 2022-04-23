/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     print-binary.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program to print binary number.
  * @date      :     04-22-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>
#include <stdbool.h>


/**
 * @brief Print binary of a given integer.
 *	
 * @param[in] num 
 */
void printb(int num) 
{
	// 10000000 00000000 0000000 00000000
	unsigned int mask = (unsigned int)(1 << (4 * 8 - 1));

	while (mask) {
		bool bit = mask & num;
		printf("%d", bit);
		mask >>= 1;
	}
	printf("\n");

}

void main() 
{
	int a = 2386;
	printb(a);
}
