#include "ring-buffer.h"



void main() 
{
	ring_buffer_init(&ring_buffer);
	ring_buffer_enqueue(&ring_buffer, 1);
	ring_buffer_enqueue(&ring_buffer, 2);
	ring_buffer_enqueue(&ring_buffer, 3);
	ring_buffer_enqueue(&ring_buffer, 4);
	ring_buffer_enqueue(&ring_buffer, 5);
	ring_buffer_enqueue(&ring_buffer, 6);
	ring_buffer_enqueue(&ring_buffer, 7);
	ring_buffer_enqueue(&ring_buffer, 8);
	ring_buffer_enqueue(&ring_buffer, 9);

	ring_buffer_printall(&ring_buffer);

	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_dequeue(&ring_buffer);
	ring_buffer_printall(&ring_buffer);

	ring_buffer_enqueue(&ring_buffer, 6);
	ring_buffer_enqueue(&ring_buffer, 7);
	ring_buffer_enqueue(&ring_buffer, 8);
	ring_buffer_enqueue(&ring_buffer, 9);
	/*
	ring_buffer_enqueue(10);
	ring_buffer_enqueue(11);
	ring_buffer_enqueue(12);
	ring_buffer_enqueue(13);
	ring_buffer_enqueue(14);
	ring_buffer_enqueue(15);
	ring_buffer_enqueue(16);
	ring_buffer_enqueue(17);
	ring_buffer_enqueue(18);
	ring_buffer_enqueue(19);
	ring_buffer_enqueue(20);
	*/
	ring_buffer_printall(&ring_buffer);

}

