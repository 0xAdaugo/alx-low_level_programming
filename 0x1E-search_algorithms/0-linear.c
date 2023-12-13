#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * Function: linear_search
 * ------------------------
 * Implementation of the linear search algorithm.
 * Searches for a given value in an array.
 *
 * @array: The array to search within.
 * @size: The length of the array.
 * @value: The value to search.
 *
 * Returns: The first index where `value` is located if it is in `array`,
 *          otherwise returns -1.
 */
int linear_search(int *array, size_t size, int value) {
    size_t index;

    for (index = 0; (index < size && array); index++) {
        printf("Checking array[%d] = [%d]\n", (int)index, array[index]);
        if (array[index] == value)
            return (index);
    }
    return (-1);
}

