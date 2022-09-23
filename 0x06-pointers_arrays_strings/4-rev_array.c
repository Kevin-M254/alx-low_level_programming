#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses an array of integers
 * @a: array if integers
 * @n: elements
 *
 * Return: Empty
 */
void reverse_array(int *a, int n)
{
	int *ptr, i, j, k;

	ptr = a;

	for (i = 1; i < n; i++)
	{
		ptr++;
	}

	for (k = 0; k < i / 2; k++)
	{
		j = a[k];
		a[k] = *ptr;
		*ptr = j;
		ptr--;
	}
}
