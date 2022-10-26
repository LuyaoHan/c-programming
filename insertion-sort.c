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
 * @note  
 */
void insertion_sort(int *arr, int length) 
{
    for (int i = 1; i < length; ++i)
    {
        int key_to_insert = arr[i];
        int j = i-1;
        while (key_to_insert < arr[j])
        {
            // move books to the right
            arr[j+1] = arr[j];
            --j;
			if (j < 0) {
				break;
			}
        }
        // j+1 to compensate the last --j
        arr[j+1] = key_to_insert;
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
    insertion_sort(arr, sizeof(arr)/sizeof(int));
    print_array(arr, sizeof(arr)/sizeof(int));
}
