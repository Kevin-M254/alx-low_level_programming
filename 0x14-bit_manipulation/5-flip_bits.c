#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns no. of bits you would to flip
 * to get from one no. to another
 * @n: number 1
 * @m: number 2
 *
 * Return: Number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = 0, count = 0;

	mask = n ^ m;
	while (mask)
	{
		if (mask & 1)
			count++;

		mask >>= 1;
	}

	return (count);
}
