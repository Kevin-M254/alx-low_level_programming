#include "main.h"

/**
 * *_strpbrk - searches string for any set of bytes
 * @s: string to be searched
 * @accept: set of bytes
 *
 * Return: pointer to matched byte, Null if none.
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
