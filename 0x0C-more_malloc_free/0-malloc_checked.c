#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: bytes to be allocated
 *
 * Return: Pointer to allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
