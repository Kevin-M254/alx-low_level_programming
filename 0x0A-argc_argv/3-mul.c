#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies values passed as arguments
 * @argc: integer
 * @argv: array
 *
 * Return: 0.
 */
int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
