#include <stdio.h>
#include <stdbool.h>


void main() 
{
    int n = 0;
    printf("Find the numbers of primes between 1 and n.\n");
    printf("Please enter n > \n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("please enter a number larger than 1\n");
        return;
    }

    int prime_num_cnt = 0;
    bool is_prime = true;
    // A prime number can only be divided by 1 and itself. 

    // Iterate [1, n]
    // Note that 1 is not a prime number.
    // Start iterating from 2 to n, including n. 
    for (int i = 2; i <= n; ++i)
    {
        is_prime = true;
        for (int j = 2; j < i; ++j)
        {
            if ((i % j) == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime == true)
        {
           prime_num_cnt += 1;
        }
    }

    printf("Numbers of primes is: %d\n", prime_num_cnt);
}