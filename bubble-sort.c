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
 */
void bubble_sort(int *arr, int length) 
{
    for (int i = 0; i < length; ++i)
    {
        for (int j = 0; j < length - i - 1; ++j) // [Understand this line] and you understood bubble sort.
        {                                        // length - i is elements to compare, -1 is because j + 1 later.
            if (arr[j] > arr[j+1])
            {
                swap(arr, j, j+1);
            }
        }
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
    bubble_sort(arr, sizeof(arr)/sizeof(int));
    print_array(arr, sizeof(arr)/sizeof(int));
    
}