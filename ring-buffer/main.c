#include "ring-buffer.h"


void main() 
{
	ring_buffer_init();
	ring_buffer_enqueue(1);
	ring_buffer_enqueue(2);
	ring_buffer_enqueue(3);
	ring_buffer_enqueue(4);
	ring_buffer_enqueue(5);
	ring_buffer_enqueue(6);
	ring_buffer_enqueue(7);
	ring_buffer_enqueue(8);
	ring_buffer_enqueue(9);

	ring_buffer_printall();

	ring_buffer_dequeue();
	ring_buffer_dequeue();
	ring_buffer_dequeue();
	ring_buffer_dequeue();
	ring_buffer_dequeue();
	ring_buffer_dequeue();
	ring_buffer_printall();

	ring_buffer_enqueue(6);
	ring_buffer_enqueue(7);
	ring_buffer_enqueue(8);
	ring_buffer_enqueue(9);
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
	ring_buffer_printall();

}

