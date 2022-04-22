/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     string-memset.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program to overwrite content in a string by memset()
  * @date      :     04-22-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>
#include <string.h>
void main() {
	char str1[] = "This is a string.";
	printf("%s\n", str1);
	memset(str1, '0', strlen(str1)) ;
	printf("%s\n", str1);
}
