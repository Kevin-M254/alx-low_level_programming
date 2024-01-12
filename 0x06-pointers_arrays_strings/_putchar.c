#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: character
 *
 * Return: On success 1.
 * on Error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
