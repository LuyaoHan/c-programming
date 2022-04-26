#include <stdio.h>
#include <string.h>

int main()
{
    printf("helloworld\n");
    char* a = "color : blasdasdue";
    int pos = strcspn(a, ": ");
		printf("pos is: %d\n", pos);
		char name[50], data[50];

		strncpy(name, a, pos-0);
		printf("name: %s\n",name);
		printf("strlen: %ld\n",strlen(a));

		strncpy(data, a + pos + 3, strlen(a) - pos - 2);
		printf("data: %s\n", data);
		return 0;
}
