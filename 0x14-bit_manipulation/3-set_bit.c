#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets value of a bit to 1 at a given index
 * @n: number containing index
 * @index: index to modify
 *
 * Return: 1 on success, -1 on fail.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}
