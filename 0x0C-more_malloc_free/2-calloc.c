#include "main.h"

/**
 * *_memset - fills memory with constant bytes
 * @s: pointer to constant
 * @b: constant
 * @n: max bytes to use
 *
 * Return: Pointer to constant.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;

	return (ptr);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array length
 * @size: size of elements
 *
 * Return: Pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (size == 0 || nmemb == 0)
		return (NULL);

	m = malloc(nmemb * size);

	if (m == 0)
		return (NULL);

	_memset(m, 0, nmemb * size);

	return (m);
}
