#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>
#include <time.h>

#define NOT_SHARED_BETWEEN_PROCESSES 0
static sem_t sem1; // file static to eliminate use of global variables.

void taskRed(void *pvParameter) {
	while (1) {
		sem_wait(&sem1);
		puts("Red");
		sleep(1);
	}
}

void taskYellow(void *pvParameter) {
	while (1) {
		puts("Yellow");
		sleep(1);
		sem_wait(&sem1);
	}
}

void main() {
	pthread_t threadRed, threadYellow;

	sem_init(&sem1, NOT_SHARED_BETWEEN_PROCESSES, 0);

	pthread_create(&threadRed, NULL, (void *)taskRed, NULL);
	pthread_create(&threadYellow, NULL, (void *)taskYellow, NULL);

	
	while(1);
}
