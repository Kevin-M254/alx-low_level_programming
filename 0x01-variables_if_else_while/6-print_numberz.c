#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 0;

	for (; x < 10; x++)
		putchar('0' + x);
	putchar('\n');
	return (0);
}
