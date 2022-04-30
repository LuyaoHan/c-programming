/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     file-read.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program to demonstrate reading a file and print content line by line.
  * @date      :     04-30-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

/* Includes -----------------------------------------------------------*/
#include <stdio.h>

/* Functions ------------------------------------------------------*/
int main() 
{

   FILE *fp = NULL;
   char buffer[255];

   fp = fopen("../file-read-text.txt", "r");
	 if (fp == NULL)
	 {
		 printf("- file-read-text.txt does not exist for this example. -\n");
		 printf("- Exiting... - \n");
		 return -1;
	 }

   while( !feof(fp) )
	 { 
		 fscanf(fp, "%s", buffer);
		 printf("%s\n", buffer);
	 }
	 printf("- Reached EOF. Exiting... -\n");
	 return 0;
}
