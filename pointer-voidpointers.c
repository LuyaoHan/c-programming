#include <stdio.h>


/**
 *	Note that:
 *		= "Hello!";
 *	On the left side of equal sign returns a char * type.
 *
 */
void func(void *p) {
	*(char *)(p) = 'H';
}

void main() {
	char p = 'a';
	func((void *)&p);
	printf("%c\n", p);
}
