#include <stdio.h>
#include <stdbool.h>


/**
 * @brief Print binary of a given integer.
 *	
 * @param[in] num 
 */
void printb(int num) {
	// 10000000 00000000 0000000 00000000
	unsigned int mask = (unsigned int)(1 << (4 * 8 - 1));

	while (mask) {

		bool bit = mask & num;
		printf("%d", bit);

		mask >>= 1;
	}
	printf("\n");

}

void main() {
	int a = 2386;
	printb(a);

}
