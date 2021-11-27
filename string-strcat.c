#include <stdio.h>
#include <string.h>

void main() {
	char str1[] = "My";
	char str2[] = "name";
	char str3[] = "is";
	char str4[] = "Jack";
	char str5[] = "\n";
	char strall[	strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + strlen(str5)];

	strcat(strall, str1);
	strcat(strall, str2);
	strcat(strall, str3);
	strcat(strall, str4);
	strcat(strall, str5);
	printf("strall: %s\n", strall);

}
