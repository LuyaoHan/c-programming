#include <stdio.h>
#include <string.h>
void main() {
	char str1[] = "This is a string.";
	printf("%s\n", str1);
	memset(str1, '0', strlen(str1)) ;
	printf("%s\n", str1);
}
