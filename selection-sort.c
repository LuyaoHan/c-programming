#include <stdio.h>
#include <stdlib.h>

void swap(int *arr, int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}


/**
 * @brief Sort the array in ascending order.
 * @param arr 
 * @param length 
 * @note  The key is to find max / find min and swap.
 */
void selection_sort(int *arr, int length) 
{
    for (int i = length-1; i >= 0; --i)
    {
        int max = arr[0];
        int max_index = 0;
        for (int j = 0; j < i; ++j)
        {
            if (arr[j] > max)
            {
                max = arr[j];
                max_index = j;
            }
        }
        swap(arr, max_index, i);
    }
}

void print_array(int *arr, int length)
{
    for (int i = 0; i < length; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void main()
{
    int arr[] = {1, 4, 8, 3, 9, 7, 0};
    print_array(arr, sizeof(arr)/sizeof(int));
    selection_sort(arr, sizeof(arr)/sizeof(int));
    print_array(arr, sizeof(arr)/sizeof(int));
}