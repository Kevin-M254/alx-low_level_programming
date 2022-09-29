#include "main.h"

/**
 * is_palindrome - Return if string is a palindrome
 * @s: string to be checked
 *
 * Return: Integer
 */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
 * check_palindrome - check if string is empty
 * @s: string in question
 *
 * Return: Integer
 */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}

	return (1);
}

/**
 * _strlen_recursion - get length of a string
 * @s: string
 *
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
