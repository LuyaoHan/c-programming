all: main

linkedlist.o:
	gcc -c linkedlist.c -o linkedlist.o -g

main: linkedlist.o
	gcc linkedlist.o main.c -o main -g

clean:
	rm -rf main *.o
