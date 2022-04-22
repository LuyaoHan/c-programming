/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     string-format.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A c example on formatting a string including a variable and store it to a variable using snprintf()
  * @date      :     04-22-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>

/**
 * Use snprintf instead of sprintf because it protect from overruns. 
 *
 */
void main() {
	char buf[100];
	snprintf(buf, 100, "The half of %d is %d.\n", 60, 60/2);
	printf("print buf: %s", buf);
}
