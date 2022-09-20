#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to string
 *
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
