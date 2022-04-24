/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     countdown-timer.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     A c program that provides timer countdown in seconds.
  * @date      :     04-24-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <string.h>


/* Macros -------------------------------------------------------------------------------------*/
#define SLEEP_1_SEC usleep(1000000); /* Sleep 1 second = 1000,000 micro seconds */

/* Functions ----------------------------------------------------------------------------------*/


/**
	* @brief main Program Entry.
	* @param None.
	* @retval exit status.
	*/
int main()
{

	printf("- A count down timer -\n");
	/* The number of seconds to count down. */
	unsigned int seconds;	
	char read_input[256];

	/* Prompt for input from user. */
	printf("Enter number of seconds to count down: \n > ");
	scanf("%s", read_input);

	seconds = atoi(read_input);

	/* Start counting down. */
	printf("- Counting Down... -\n");
	while (seconds > 0) {
		printf("- %d -\n", seconds);
		--seconds;
		SLEEP_1_SEC;
	}

	return 0;

}

