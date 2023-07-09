#include "main.h"

/**
 * set_bit - This  sets the value of a bit to 1.
 * at a given index.
 * @n: A pointer of an unsigned long int.
 * @index: This is index of the bit.
 * Return: 1 if it works, -1 if it doesn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
