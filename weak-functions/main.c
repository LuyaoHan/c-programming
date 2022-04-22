/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     main.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Program entry main.c for a simple demonstration on weak function declaration in c.
  * @date      :     04-22-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

/* Includes */
#include <stdio.h>
#include "decode.h"

/**
	* @brief  main.c Function entry.
	* @param  None
	* @retval main execution status.
	* @note   In the linking process, if a symbol is strong reference, the linker will report an error. 
	*           In decode.h, we have declared that decode() is a weak symbol by specifying __attribute__((weak)).
	*           Therefore, if (decode) will avoid run time error if the type has hot been implemented in decode.c.
	*         
	*           For example, if a decode library has to be implemented. Some unfinished functions in the library can be declared as weak types,
	*           We can always use if case on these functions to avoid running into error.
	*/
int main(void)
{
	if(decode)
	{
		printf("decode() found, executing decode().\n");
		decode();
	} else {
		printf("decode() is not found.\n");
	}
	printf("returning...\n");
	return 0;	
}
