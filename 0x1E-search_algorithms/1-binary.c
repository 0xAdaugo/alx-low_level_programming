#include "search_algos.h"

/**
 * Function: binary_search
 * ------------------------
 * Searches for a value within a sorted array of integers.
 *
 * @array: A pointer to the first element of the array to search in.
 * @size: The number of elements in `array`.
 * @value: The value to search for.
 *
 * Returns: The index where `value` is located.
 * Description: Implements the Binary search algorithm to find a value
 *              within a sorted array of integers.
 **/
int binary_search(int *array, size_t size, int value) {
    int mid, min, max;

    min = 0;
    max = size;
    while (array && (max - min > 0)) {
        printf("Searching in array: ");
        print_array(array, min, max);
        mid = (int)((max + min - 1) / 2);
        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            min = mid + 1;
        else
            max = mid;
    }
    return (-1);
}

/**
 * Function: print_array
 * ------------------------
 * Prints a sequence of elements within an array.
 *
 * @array: A pointer to the first element of the array to print.
 * @min: The starting index.
 * @max: The ending index.
 **/
void print_array(int *array, int min, int max) {
    int i;

    for (i = min; i < max; i++) {
        printf("%d", array[i]);
        if (i < max - 1)
            printf(", ");
    }
    printf("\n");
}

