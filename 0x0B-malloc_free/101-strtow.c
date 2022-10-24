#include "main.h"

/**
 * _strlen - determine length of a string
 * @s: the string
 *
 * Return: Integer value;
 */
int _strlen(char *s)
{
	int size = 0;
	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *str_addChar - add character
 * @str: string to split
 * @c: character
 *
 * Return: Characters.
 */
char *str_addChar(char *str, char c)
{
	int size, i;

	char *m;

	size = _strlen(str);
	m = malloc((size + 1) * sizeof(char) + 1);

	if (m == 0)
	       return (0);

	for (i = 0; i <= size; i++)
		m[i] = str[i];

	m[i + 1] = c;
	m[i + 2] = '\0';

	return (m);	
}

/**
 * nbr_spaces - return number of occurrences in a string
 * @s: the string
 *
 * Return: Integer value.
 */
unsigned int nbr_spaces(char *s)
{
	int i, cmpt = 0;

	for (i = 0; s[i + 1] != '\0'; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			cmpt++;
	}

	return (cmpt + 1);
}

/**
 * **strtow - splits a sentence
 * @str: the string
 *
 * Return: Characters.
 */
char **strtow(char *str)
{
	int i;
}
