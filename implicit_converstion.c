#include <stdio.h>

/**
 * When a signed integer has a type conversion with a unsigned integer.
 * The signed integer will be *IMPLICITLY CONVERTED* to an unsigned type.
 * That is unfortunately bad because programmer not knowing so will have issue in getting unexpected answers.
 */
void main() {
	int a = -1;
	unsigned int b = 12;
	// What should -1 mod 12? --> ANS: 11
	printf("Uxpected answer: -1 mod 12 == 11, but with implicit conversion: -1 mod 12 == %d\n", -1 % 12);

	// Now do it the correct way.
	printf("a % (int)b == %d\n", (a % (int)b));
}
