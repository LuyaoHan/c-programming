/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     ring-buffer.c
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Implementation of ring buffer in C.
  * @date      :     05-05-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */

#include "ring-buffer.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
	*  Following code implements Ring-Buffer based on array, working in Producer-Consumer Mode. 
	*
	*  Modulo Trick:
	*  Because circular queue, once the head reaches last index, need to wrap-around. 
	*  The actual index for head is calculated by:
	*    head_index + 1 % capacity.
	*  This is equvilent to 
	*    head_index & (capacity - 1)
  * 
	*/

/* Initialize a ring_buffer */
struct ring_buffer ring_buffer;


/**
	* @brief Initialize the ring buffer.
	*/
void ring_buffer_init()
{
	ring_buffer.p_array = array;
  ring_buffer.head_index = 0;
	ring_buffer.tail_index = 0;
	ring_buffer.size = 0;
	ring_buffer.capacity = sizeof(array) / sizeof(array[0]);
}

/**
	*  Array-Queue is empty:
	*     | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 |
	*       H
	*       T
	*
	*
	*
	*/
void ring_buffer_enqueue(uint8_t data) 
{
	/* Array is full. */
	if (ring_buffer.size == ring_buffer.capacity)	
	{
		return;
	}

	/* Array is empty. */
	if (ring_buffer.size == 0)
	{
		/* Store the data. */
	  ring_buffer.p_array[ring_buffer.head_index] = data;
		ring_buffer.size += 1;
	} 
	else 
	{
		ring_buffer.head_index += 1;
		/* wrap around the array. */
		ring_buffer.head_index = ring_buffer.head_index % ring_buffer.capacity;
		/* Store the data. */
	  ring_buffer.p_array[ring_buffer.head_index] = data;
		ring_buffer.size += 1;
	}
}

uint8_t ring_buffer_dequeue()
{
	/* If array if empty. */
	if (ring_buffer.size == 0)
	{
    return 0;
	}

	uint8_t retval = ring_buffer.p_array[ring_buffer.tail_index];
	ring_buffer.tail_index += 1;
	ring_buffer.tail_index &= ring_buffer.capacity - 1; /* Wrap around. Equavilent to modulo. */
	ring_buffer.size -= 1;
	return retval;
}

/**		Ring Buffer Array Full : Size = Capacity
	*   | T |  |  |  |  |  | H |
	*
	*   After wrap-around Situation
	*   | H |  |  |  | T |  |
  *
	*   In a circular queue, the head index can either be smaller or larger than the tail index.
	*   Therefore, printing elements forloop iterator must increase based on size.
	*/
void ring_buffer_printall() 
{	
	printf("- Printing Ring Buffer (FIFO Order) -\n");
	fflush(stdout);
	for (int i = 0; i < ring_buffer.size; ++i)
	{
		int target_index = ring_buffer.tail_index + i;
		/* If capacity = 8, then its's valid index is from 0 - 7. This is equvilent to target_index % ring_buffer.capacity. */
		target_index = target_index & (ring_buffer.capacity-1); 
		printf("| Array Index: %d | %d\n", target_index, ring_buffer.p_array[target_index]);
		fflush(stdout);
	}
}








