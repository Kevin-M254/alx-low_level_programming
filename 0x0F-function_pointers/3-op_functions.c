#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - perfoms addition
 * @a: first int
 * @b: second int
 *
 * Return: Integer.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - perfom subtraction on two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: Integer.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - perfom multiplication on two integers
 * @a: first int
 * @b: second int
 *
 * Return: Integer.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - perfoms division operation
 * @a: first int
 * @b: second int
 *
 * Return: Integer.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - get remainder of division operation
 * @a: first int
 * @b: second int
 *
 * Return: modulus.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
