#include <stdio.h>

/**
 * "w": write, assuming file exist
 * "w+": write, create file if it doesn't exist.
 * "a": appends to a file. Writing operations, append data at the end of the file. 
 */
void main() {
	FILE* fp;
	fp = fopen("example.txt", "w+");
	fprintf(fp, "example text: %d\n", 123);	// output some text to the stream designated by the file pointer.
	fprintf(stdout, "example text: %d\n", 123);	// output some text to the stdout stream.
	fclose(fp);
}
