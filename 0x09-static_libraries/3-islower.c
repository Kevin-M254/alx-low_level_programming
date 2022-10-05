#include "main.h"

/**
 * _islower - checks if a character is lower case
 * @c: character to check
 *
 * Return: 1 if true, 0 if false.
 */
int_islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}

	return (0);
}
