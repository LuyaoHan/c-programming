/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     string-strcat.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A simple program in C to demonstrate string concatenation / appending.
  * @date      :     04-26-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** *********/

/* includes -------------------------------------------------------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <string.h>

/* includes -------------------------------------------------------------------------------------------------------------------------------------*/
void main() {
	/* Declare multiple strings (char arrays). */
	char str1[] = "My"; /* 'M', 'y', '\0' */
	char str2[] = "name"; /* 'n', 'a', 'm', 'e', '\0'*/
	char str3[] = "is";
	char str4[] = "Linux";
	char strall[strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4)];

	/* Append these strings one after another. */
	strcat(strall, str1);
	strcat(strall, str2);
	strcat(strall, str3);
	strcat(strall, str4);
	printf("strall: %s\n", strall);

}
