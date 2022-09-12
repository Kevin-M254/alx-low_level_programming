#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char x = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(x);
		x++;
	}
	x = '1';
	for (i = 0; i < 6; i++)
	{
		putchar('0' + x);
		x++;
	}
	putchar('\n');
	return (0);
}
