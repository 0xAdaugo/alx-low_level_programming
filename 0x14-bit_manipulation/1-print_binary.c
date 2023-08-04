#include <stdio.h>
#include "main.h"

/**
 * print_binary - This prints the binary equivalent of a decimal number
 *
 * @n: Decimal number to be converted and printed in binary.
 */

void print_binary(unsigned long int n)
{
	int s, count = 0;
	unsigned long int current;

	for (s = 63; s >= 0; s--)
	{
		current = n >> s;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
