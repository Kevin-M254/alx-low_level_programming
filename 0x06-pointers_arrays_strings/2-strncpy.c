#include "main.h"


/**
 * *_strncpy - copies a string
 * @dest: destination value
 * @src: source value
 * @n: limit value
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < j)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
