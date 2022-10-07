#include "main.h"

/**
 * _strlen - determine length of string
 * @s: the string
 *
 * Return: Integer value.
 */
unsigned int _strlen(char *s)
{
	unsigned int size = 0;

	for (; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to use
 *
 * Return: Pointer or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;

	char *m;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n < _strlen(s2))
		m = malloc(_strlen(s1) + n * sizeof(char) + 1);
	else
		m = malloc(_strlen(s1) + _strlen(s2) + 1);

	if (m == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; i++, j++)
		m[i] = s2[j];


	m[i] = '\0';

	return (m);
}
