#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - setts value of a bit to 0 at a given index
 * @n: number containing index
 * @index: index to modify
 *
 * Return: 1 if success, 0 if fail.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}
