#include <stdio.h>
#include "main.h"

/**
 * get_bit - This retrieves the value of a bit,
 *  atthe specified index
 * @n: The input unsigned long int number.
 * @index: The index of the bit to retrieve.
 *
 * Return: The value of the bit at the given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int s;

	if (n == 0 && index < 64)
		return (0);

	for (s = 0; s <= 63; n >>= 1, s++)
	{
		if (index == s)
		{
			return (n & 1);
		}
	}

	return (-1);
}
