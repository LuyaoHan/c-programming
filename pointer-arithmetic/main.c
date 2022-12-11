#include <stdio.h>


int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    /* Make p_matrix point to the start address of matrix. */
    int *p_matrix = *matrix;

    /* We need to print the fourth element in the array. */
    /* Note that p_matrix + 3 does not mean adding three bytes, it means "count three ints from current number" */
    /* The number of bytes actually added is 3 * sizeof(int) = 3 * 32 */
    printf("The fourth elements in the matrix is: %d\n", *(p_matrix + 3));

    return 0;
}