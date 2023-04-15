#include "search_algos.h"
#include <math.h>

/**
 * binary_search - searches for a value in a sorted array of
 *	integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Description: must print the array being searched every time
 *	it changes
 * Return: Index where value is located, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int j = size - 1;
	int mid;

	while (i <= j)
	{
		printf("Searching in array: %d\n", array[i]);
		mid = (i + j) / 2;
		if (array[mid] < value)
			i = mid + 1;
		else if (array[mid] > value)
			j = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
