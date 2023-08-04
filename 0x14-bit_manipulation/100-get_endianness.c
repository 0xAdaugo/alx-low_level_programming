#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it is little endian.
 */

int get_endianness(void)
{
	int num;

	num = 1;
	if (*(char *)&num == 1)
		return (1);
	else
		return (0);
}
