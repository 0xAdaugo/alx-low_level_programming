#include "search_algos.h"
#include <math.h>

/**
 * Function: jump_search
 * ------------------------
 * Performs a search for a value in an array of integers
 * using the Jump search technique.
 *
 * @array: Input array.
 * @size: Size of the array.
 * @value: The value to search for.
 *
 * Returns: Index of the found number.
 */
int jump_search(int *array, size_t size, int value)
{
    int index, jump, k, prev;

    if (array == NULL || size == 0)
        return (-1);

    jump = (int)sqrt((double)size);
    k = 0;
    prev = index = 0;

    do {
        printf("Examining array[%d] = [%d]\n", index, array[index]);

        if (array[index] == value)
            return (index);
        k++;
        prev = index;
        index = k * jump;
    } while (index < (int)size && array[index] < value);

    printf("Value detected between indexes [%d] and [%d]\n", prev, index);

    for (; prev <= index && prev < (int)size; prev++) {
        printf("Checking array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
            return (prev);
    }

    return (-1);
}

