#include "main.h"

/**
 *main -  _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The input string.
 *
 * Return: 0(success).
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
