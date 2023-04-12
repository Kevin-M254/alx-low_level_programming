#include "search_algos.h"

/**
 * linear_search - Searches for a value in array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: First index where value is located, -1 if
 *	array is null or value is not present.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%d]\n", array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
