#include <stdio.h>

/**
 * Use snprintf instead of sprintf because it protect from overruns. 
 *
 */
void main() {
	char buf[100];
	snprintf(buf, 100, "The half of %d is %d.\n", 60, 60/2);
	printf("print buf: %s", buf);
}
