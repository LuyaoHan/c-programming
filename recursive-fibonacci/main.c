/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     main.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c program that finds fibonacci number with recursion.
  * @date      :     05-09-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include <stdio.h>

/**
	* @brief  Program to find the nth index of the fibonacci number
	* @param  n The nth index of the fibonacci number.
	* @note   Fibonacci[1] = 1
	*         Fibonacci[2] = 1
	*         Fibonacci[3] = 2
	*         Fibonacci[4] = 3
	*         Fibonacci[5] = 5
	*         Fibonacci[6] = 8
	*         ......
	*/
unsigned int fibonacci(unsigned int n)
{
	if (n <= 1)
	{
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}


/**
	* @brief main routine.
	*/
void main()
{
   for (int i = 0; i < 10; i++) {
      printf("i: %d fibonacci(i) = %d\n", i, fibonacci(i));
			fflush(stdout);
   }
	 printf("\n");
}
