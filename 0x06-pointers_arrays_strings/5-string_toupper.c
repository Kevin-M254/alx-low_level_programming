#include "main.h"
#include <stdio.h>

/**
 * string_toupper - capitalises all letters
 * @p: string to be capitalised
 *
 * Return: char
 */
char *string_toupper(char *p)
{
	int x = 0;

	while (p[x])
	{
		if (p[x] >= 97 && p[x] <= 122)
		{
			p[x] -= 32;
		}


		x++;
	}

	return (p);
}
