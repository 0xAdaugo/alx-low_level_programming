#include "main.h"

/**
 * set_bit - This sets the bit at the specified index to 1.
 * @n: Pointer of an unsigned long int.
 * @index: The index of the bit to be set.
 *
 * Return: 1 on success, -1 on failure.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int o;

	if (index > 63)
		return (-1);

	o = 1 << index;
	*n = (*n | o);

	return (1);
}
