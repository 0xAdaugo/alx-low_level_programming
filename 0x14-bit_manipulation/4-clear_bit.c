#include "main.h"

/**
 * clear_bit - Clears the bit at thespecified index (sets it to 0)
 * @n: Pointer of an unsigned long int.
 * @index: The index of the bit to be cleared.
 *
 * Return: 1 if successful, -1 if it fails.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);

	o = 1 << index;

	if (*n & o)
		*n ^= o;

	return (1);
}
