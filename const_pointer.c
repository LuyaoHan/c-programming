#include <stdio.h>

void main() {
	/* Const pointer pointing to changable value */
	int *const a;
	*a = 20; 
	// a = 0x00ffff00; // illigal

	// this const pointer protects the pointer overwrite, similiar to C++ reference: int &a = b
	return;
}
