#include <stdio.h>

#define DEFAULT_ARRAY_SIZE 1024

/**
 * @brief Mergesort
 * @note Space complexity O(n) --> an temporary array of constant maximum size.
 *       Time complexity O(nlog(n)) --> divide the size of the array each time -> log(n)
 *                                  --> sort the divided subarray -> n
 *                                  Together it is nlog(n)
 *      
 */

void printArray(int *arr, int size) {
    for (int idx = 0; idx < size; ++idx) {
        printf("%d ", arr[idx]);
    }
}


/* NONE-RECURSIVE MERGE! */
void merge(int *leftArr, int leftArrSize, int *rightArr, int rightArrSize) {
    int temporaryArray[DEFAULT_ARRAY_SIZE]; 
    
    int leftIdx = 0, rightIdx = 0, resultIdx = 0;

    /* Start packing. */
    while ((leftIdx < leftArrSize) && (rightIdx < rightArrSize)) {
        if (leftArr[leftIdx] < rightArr[rightIdx]) {
            temporaryArray[resultIdx++] = leftArr[leftIdx++];
        } else {
            temporaryArray[resultIdx++] = rightArr[rightIdx++];
        }
    }

    /* Clean the plate. */
    while (leftIdx < leftArrSize) {
        temporaryArray[resultIdx++] = leftArr[leftIdx++];
    }
    while (rightIdx < rightArrSize) {
        temporaryArray[resultIdx++] = rightArr[rightIdx++];
    }

    /* Move the sorted from the temporary to the original array. */
    for(int i = 0; i < (leftArrSize + rightArrSize); ++i) {
        leftArr[i] = temporaryArray[i];
	}   
}

/* RECURSIVE DIVIDE! */
/**
 * @brief mergeSort!
 *        When you try to remember the function prototypes, don't imagine something fancy.
 *        What do you bring when you print an array? -- just a pointer and a size.
 *        Do the same for merge sort, same for merge part, just pointer and size for left and right array. 
 * @param arr 
 * @param arrSize 
 */
void mergeSort(int *arr, int arrSize) {
    // Base case: no need to sort an array of size 1 or smaller.
    if (arrSize <= 1) {
        return;
    }

    int *leftArr = arr;
    int leftArrSize = arrSize >> 1;
    int *rightArr = arr + leftArrSize;
    int rightArrSize = arrSize - leftArrSize;

    /* divide */
    mergeSort(leftArr, leftArrSize);
    mergeSort(rightArr, rightArrSize);

    /* merge. */
    merge(leftArr, leftArrSize, rightArr, rightArrSize);
}

void main() {
    int array[] = {7, 3, 1, 9, 21, -2};
    printf("Original array:\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", array[i]);
    }
    mergeSort(array, 6);
    printf("\nSorted array:\n");
    for (int i = 0; i < 6; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}