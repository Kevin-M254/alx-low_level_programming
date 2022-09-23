#include "main.h"
#include <stdio.h>

/**
 * *cap_string - capitalizes all words of a string
 * @s: string to capitalize
 *
 * Return: char s
 */
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int cspc = 13;
	char c[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}',};

	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == c[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}
	return (s);
}
