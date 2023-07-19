#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - Adds two numbers
 *
 * @a: int
 * @b: int
 *
 * Return: Sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Calculates the difference of @c and @b
 *
 * @a: int
 * @b: int
 *
 * Return: Difference of @a and @b
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: int
 * @b: int
 *
 * Return:the Product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides @a by @b
 *
 * @a: int
 * @b: int
 *
 * Return: quotient
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
 * op_mod - Calculates the remainder of @a divided by @b
 *
 * @a: int
 * @b: int
 *
 * Return: Remainder
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
