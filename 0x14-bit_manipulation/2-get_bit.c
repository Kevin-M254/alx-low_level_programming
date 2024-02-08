#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * get_bit - gets value of a bit at a given index
 * @n: number with index
 * @index: index to find
 *
 * Return: Value of the bit at index, -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (n)
	{
		if (i == index)
		{
			if (n % 2)
				return (1);
			else
				return (0);
		}

		n = n / 2;
		i++;
	}

	if (index > i && index < 63)
		return (0);

	return (-1);
}
