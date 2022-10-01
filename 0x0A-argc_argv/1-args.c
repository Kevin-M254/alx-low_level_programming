#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: integer
 * @argv: array
 *
 * Return: 0.
 */
int main(int argc, char const *argv[])
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
