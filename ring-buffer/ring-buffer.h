/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     ring-buffer.h
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Ring Buffer implementation C fronter.
  * @date      :     05-05-2022
  * Copyright (C) 2022-2122 Luyao Han. The following code may be shared or modified for personal use / non-commercial use only.
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********  */
#ifndef __RING_BUFFER_H
#define __RING_BUFFER_H

/* Includes ---------------------------------------------------------------------------------------------------------*/
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/* Types ------------------------------------------------------------------------------------------------------------*/
struct ring_buffer_t
{
	uint8_t* p_array;
	uint8_t front_index;
  uint8_t back_index;
	uint8_t capacity;
	uint8_t size;
};

/* Global Array. This is the memory that ring buffer resides. */
uint8_t array[8];

/* Defined in ring-buffer.c */
extern struct ring_buffer_t ring_buffer;


/* Function Prototypes ----------------------------------------------------------------------------------------------*/

/* Initialize the ring buffer. */
void ring_buffer_init(struct ring_buffer_t* rb);

/* Enqueue: Produce new item to the back of the queue. */
void ring_buffer_enqueue(struct ring_buffer_t* rb, uint8_t data);

/* Dequeue: Consume item from the front of the queue.*/
uint8_t ring_buffer_dequeue(struct ring_buffer_t* rb);

/* Print all from the back to front (FIFO order). */
void ring_buffer_printall(struct ring_buffer_t* rb);








#endif
