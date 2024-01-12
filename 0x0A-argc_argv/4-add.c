#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two integers passed to it
 * as arguments
 * @argc: argument count
 * @argv: argument array
 * Return: 1 if fail, 0 if success.
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
