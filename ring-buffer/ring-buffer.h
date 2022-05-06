/**
  ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ******** ********
  * @file      :     ring-buffer.h
  * @author    :     Luyao Han
  * @email     :     luyaohan1001@gmail.com
  * @brief     :     Ring Buffer implementation C header.
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
struct ring_buffer
{
	uint8_t* p_array;
	uint8_t head_index;
  uint8_t tail_index;
	uint8_t capacity;
	uint8_t size;
};

/* Global Array. This is the memory that ring buffer resides. */
uint8_t array[8];


/* Function Prototypes ----------------------------------------------------------------------------------------------*/

/* Initialize the ring buffer. */
void ring_buffer_init();
void ring_buffer_enqueue(uint8_t data);
uint8_t ring_buffer_dequeue();
void ring_buffer_printall();

#endif
