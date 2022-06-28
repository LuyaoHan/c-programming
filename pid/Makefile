all: main

pid.o:
	gcc -c pid.c -o pid.o

main: pid.o
	gcc main.c *.o -o main
