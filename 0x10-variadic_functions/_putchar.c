#include <unistd>

/**
 * _putchar - print char c to stdout
 * @c: character to print
 *
 * Return: 1 on success, -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
