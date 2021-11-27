#include <stdio.h>
#include <string.h>

/**
 *	Get string until char;
 */
void substr_until(char* original_str, char match_char, char* ret_str) {
	int i = 0, j = 0;
	while (original_str[i] && original_str[i] != match_char) {
		ret_str[j++] = original_str[i];
		++i;
	}
	ret_str[j] = '\0';
}


/**
 *	Get string after char;
 */
void substr_after(char* original_str, char match_char, char* ret_str) {
	int i = 0, j = 0;
	while (original_str[i++] != match_char);

	while (original_str[i] != '\0') {
		if (original_str[i] != ' ') {
			ret_str[j++] = original_str[i];
		}
		i++;
	}
	ret_str[j] = '\0';
}

void main() {
	char original_str[] = "header:  data";
	char before_str[strlen(original_str)];
	char after_str[strlen(original_str)];



	fprintf(stdout, "original_str: %s\n", original_str);

	substr_until(original_str, ':', before_str);
	fprintf(stdout, "before_str: '%s'\n", before_str);

	substr_after(original_str, ':', after_str);
	fprintf(stdout, "after_str: '%s'\n", after_str);
}
