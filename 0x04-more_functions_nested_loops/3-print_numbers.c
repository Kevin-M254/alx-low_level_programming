#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	_putchar('\n');
}
