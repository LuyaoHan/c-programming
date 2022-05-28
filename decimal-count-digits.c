/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     decimal-count-digits.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Simple c code to count number of digits in decimal number.
  * @date      :     05-28-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */


#include <stdio.h>
#include <stdint.h>

/**
	* @brief Get number of digits in a decimal number.
	* @note  Use do while instead of while loop because 0 is a one-digit number,
	*            So it has to be incremented at least once.
	*/
uint32_t count_digits(uint32_t number)
{
	uint32_t digit_count = 0;
	do 
	{
		digit_count += 1;
		number /= 10;
	} while (number > 0);
	return digit_count;
}

int main() 
{
	uint32_t num;
	
	num = 10;
	printf("%d has %d digits.\n", num, count_digits(num));


	num = 111;
	printf("%d has %d digits.\n", num, count_digits(num));
	
	num = 1921;
	printf("%d has %d digits.\n", num, count_digits(num));

	num = 99999;
	printf("%d has %d digits.\n", num, count_digits(num));

	num = 5000000;
	printf("%d has %d digits.\n", num, count_digits(num));

}

