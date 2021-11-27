#include <stdio.h>
#include <string.h>



void despace(char* in, char* out) {

	int i, j;

	while (in[i]) {
		if (in[i] != ' ') {
			out[j++] = in[i];
		}
		i += 1;
	}
	out[j] = '\0';
}


void main() {
	char str[] = "he ll o"; 
	char str1[strlen(str)];
	despace(str, str1);
	printf("str: %s\n", str);
	printf("str: %s\n", str1);


		
}
