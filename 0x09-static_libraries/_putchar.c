#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: char to print
 *
 * Return: 1 on success, -1 in error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
