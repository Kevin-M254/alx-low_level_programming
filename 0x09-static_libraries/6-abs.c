#include "main.h"

/**
 * _abs - prints absolute value if an integer
 * @n: integer
 *
 * Return: integer value
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
