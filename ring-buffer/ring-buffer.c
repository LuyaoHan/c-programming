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
	*  Because circular queue, once the front reaches last index, the next index need to wrap-around. 
	*  The index for front is calculated by:
	*    front_index + 1 % capacity.
	*  This is equvilent to 
	*    front_index & (capacity - 1)
  * 
	*/


/* Initialize a ring_buffer */
struct ring_buffer_t ring_buffer;

/**
	* @brief  Initialize the ring buffer.
	* @param  None.
	* @retval None.
	*/
void ring_buffer_init(struct ring_buffer_t* rb)
{
	rb->p_array = array;
  rb->front_index = 0;
	rb->back_index = 0;
	rb->size = 0;
	rb->capacity = sizeof(array) / sizeof(array[0]);
}

/**
	*  @brief  Enqueue. Add elements to the front of the queue.
	*  @note   Full-Condition: When the current size of items == Total Capacity.
	*/
void ring_buffer_enqueue(struct ring_buffer_t* rb, uint8_t data) 
{
	/* Array is full. */
	if (rb->size == rb->capacity)	
	{
		return;
	}

	/* Array is empty. */
	if (rb->size == 0)
	{
		/* Store the data. */
	  rb->p_array[rb->front_index] = data;
		rb->size += 1;
	} 
	else 
	{
		rb->front_index += 1;
		/* wrap around the array. */
		rb->front_index = rb->front_index % rb->capacity;
		/* Store the data. */
	  rb->p_array[rb->front_index] = data;
		rb->size += 1;
	}
}

uint8_t ring_buffer_dequeue(struct ring_buffer_t* rb)
{
	/* If array if empty. */
	if (rb->size == 0)
	{
    return 0;
	}

	uint8_t retval = rb->p_array[rb->back_index];
	rb->back_index += 1;
	rb->back_index &= rb->capacity - 1; /* Wrap around. Equavilent to modulo. */
	rb->size -= 1;
	return retval;
}

/**		Ring Buffer Array Full : Size = Capacity
	*   | T |  |  |  |  |  | H |
	*
	*   After wrap-around Situation
	*   | H |  |  |  | T |  |
  *
	*   In a circular queue, the front index can either be smaller or larger than the back index.
	*   Therefore, printing elements forloop iterator must increase based on size.
	*/
void ring_buffer_printall(struct ring_buffer_t* rb) 
{	
	printf("- Printing Ring Buffer (FIFO Order) -\n");
	fflush(stdout);
	for (int i = 0; i < rb->size; ++i)
	{
		int target_index = rb->back_index + i;
		/* If capacity = 8, then its's valid index is from 0 - 7. This is equvilent to target_index % rb->capacity. */
		target_index = target_index & (rb->capacity-1); 
		printf("| Array Index: %d | %d\n", target_index, rb->p_array[target_index]);
		fflush(stdout);
	}
}








