/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     string-memcpy.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     C program indicating the use of memcpy
  * @date      :     05-08-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>
#include <string.h>

/**
 * @brief Learn how to use memcpy
 *
 *   void *memcpy(void *dest, const void *src, size_t n);

 *   memcpy compares to strcpy: 
 *     memcpy can deal with any ASCII.
 *     while strcpy can only deal with strings. 
 *    memcpy is able to copy some binary strings while strcpy will fail on these. 
 */
void main() {
  char src[] = "This is string1.";
  char dest[strlen(src)];

  memcpy(dest, src, strlen(src));
  fprintf(stdout, "We copied src into dest. Now printing dest:\n");
  fprintf(stdout, "%s\n", dest);
}
