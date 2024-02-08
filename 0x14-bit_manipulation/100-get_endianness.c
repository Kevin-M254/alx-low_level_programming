#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 1 if big endian, 0 if otherwise.
 */

int get_endianness(void)
{
	unsigned int test = 1;
	char *endian = (char *)&test;

	if (*endian)
		return (1);

	return (0);
}
