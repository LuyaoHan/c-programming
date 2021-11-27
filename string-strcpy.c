#include <stdio.h>
#include <string.h>


void func(char* str1) {
	char *str2 = "hello";
	strcpy(str1, "10 letter");
	strcpy(str1, str2);
}
int main() {
	char str1[10];
	//strcpy(str1, "10 letter");
	func(str1);
	printf("str1: %s\n", str1);
}
