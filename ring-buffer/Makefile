all: main

ring-buffer.o:
	gcc -c ring-buffer.c -o build/ring-buffer.o -g

main: ring-buffer.o
	gcc $(wildcard build/*.o) -g main.c -o build/main

clean:
	rm -rf $(wildcard build/*.o)
