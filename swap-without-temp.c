#include <stdio.h>
#include <stdint.h>


void main() 
{
    int a = 10;
    int b = 20;

    // printf("a: %d\n", a);
    // printf("b: %d\n", b);

    a = a + b;  // 30
    b = a - b;  // 30 - 20 = 10
    a = a - b;  // 30 - 10 = 20

    // printf("now swapped\n");


    // printf("a: %d\n", a);
    // printf("b: %d\n", b);
}
