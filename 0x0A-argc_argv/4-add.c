#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - check if argument is number
 * @s: argument to check
 *
 * Return: 0.
 */

int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (1);
		i++;
	}

	return (0);
}

/**
 * main - adds positive integers passed as arguments
 * @argc: argmnt count
 * @argv: char array
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char const *argv[])
{
	int sum = 0;

	while (--argc)
	{
		if (isInteger(argv[argc]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[argc]);
	}
	printf("%i\n", sum);

	return (0);
}
