#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

void main() 
{
    printf("Input a number.😋\n");
    int input;
    scanf("%d", &input);

    // In c language if input is a negative and if we perform a right shift then it's 
    // always going to fill the MSB as a 1 and we will never finish shifting. 
    if (input < 0)
    {
        printf("The number %d is not power of two.\n", input);
        return;
    }

    
    int input_cp = input;
    // If XOR's to 1 means odd number of bits
    // There can only be one bit that's 1 to be a power of 2.

    // How do you loop through all the bits in it?
    int found_one = 0;
    do 
    {
      if (input & 0x01)
      {
          found_one += 1;
      }

      input >>= 1;
    } while (input);

    if (found_one == 1)
    {
        printf("The number %d is power of two.\n", input_cp);
    }
    else 
    {
        printf("The number %d is not power of two.\n", input_cp);
    }
}