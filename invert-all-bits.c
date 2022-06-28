#include <stdio.h>
#include <stdint.h>

void main() 
{
    int a = 0x55;
    printf("a: %x\n", a);

    int revert_a = 0x55 ^ (-1);
    printf("-1 represents 0b111111...1111\n")
    printf("revert_a: %d <-- This is not right because it's interpreated as a negative number.\n", revert_a);
    printf("revert_a: %u <-- correct\n", revert_a);
    printf("revert_a: %x <-- correct \n", revert_a);
}