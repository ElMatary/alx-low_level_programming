#include "main.h"

/**
 * sqrt_check - check square root
 *
 * @i: int
 * @x: square root
 *
 * Return: int
*/

int sqrt_check(int i, int x)
{
	if (i * i == x)
	{
		return (i);
	}
	else if (i * i > x)
	{
		return (-1);
	}
	else
	{
		return (sqrt_check(i + 1, x));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: int
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sqrt_check(1, n));
	}
}
