#include "main.h"

/**
 * *_strcpy - copies string
 * @dest: the destination
 * @src: the source
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
