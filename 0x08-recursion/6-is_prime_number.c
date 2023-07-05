#include "main.h"

/**
 * prime_check - Checks to see if number is prime
 *
 * @i: int
 * @x: int
 *
 * Return: 1 if prime, 0 if not
*/

int prime_check(int i, int x)
{
	if (x < 2 || x % i == 0)
	{
		return (0);
	}
	else if (i > x / 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(i + 1, x));
	}

}

/**
 * is_prime_number - checks if n is prime number
 *
 * @n: int
 *
 * Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n == 2)
	{
		return (1);
	}
	else
	{
		return (prime_check(2, n));
	}
}
