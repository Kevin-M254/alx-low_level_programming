#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: Pointer to the concatenated string dest
 */
char *_strcat(char *dest, char *src)
{
	int destLen = 0, i;

	while (dest[destLen])
	{
		destLen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[destLen] = src[i];
		destLen++;
	}

	dest[destLen] = '\0';
	return (dest);
}
