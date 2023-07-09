#include "main.h"

/**
 * flip_bits - This returns the num of bits you would
 * need to flip to get from one num to another
 * @n: num one.
 * @o: num two.
 * Return: num of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int o)
{
	unsigned int nbits;

	for (nbits = 0; n || o; n >>= 1, o >>= 1)
	{
		if ((n & 1) != (o & 1))
			nbits++;
	}

	return (nbits);
}
