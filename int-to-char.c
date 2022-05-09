/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     int-to-char.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program for a small trick to convert into to char type.
  * @date      :     05-08-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>
#include <string.h>

void main() 
{
  int i = 8;
	printf("Single digit can be converted using: i + '0': %c\n", i + '0');

	i = 15213;
	char p_string[256];
	printf("Multiple digits needs the help of sprintf: ");
	sprintf(p_string, "%d", i);
	printf("%s\n", p_string);
}

