#include <unistd.h>

/**
 * _putchar - This writes a character 'c' to the  standard output.
 * @c: The character to be printed.
 *
 * Return: On success, it returns 1.
 * On error, it returns  -1 and sets the appropriate errno value.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
