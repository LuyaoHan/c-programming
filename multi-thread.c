#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

pthread_mutex_t lock;
unsigned int count = 0;

void* print_hello_world_1(void *varp) 
{
	while (1)
	{
	  printf("Hello World 1\n");
		printf("count: %d\n", count);
		pthread_mutex_lock(&lock);
		count++;
		pthread_mutex_unlock(&lock);
		// sleep(1);
	}
}

void* print_hello_world_2(void *varp) 
{
	while (1)
	{
	  printf("Hello World 2\n");
		printf("count: %d\n", count);
		pthread_mutex_lock(&lock);
		count++;
		pthread_mutex_unlock(&lock);
		// sleep(1);
	}
}


void main() 
{
	pthread_t t1, t2;
	pthread_mutex_init(&lock, NULL);
	pthread_create(&t1, NULL, print_hello_world_1, NULL);
	pthread_create(&t2, NULL, print_hello_world_2, NULL);
	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	pthread_mutex_destroy(&lock);

	return;

}

