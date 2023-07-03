#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 *
 * @s: pointer
 * @b: constant
 * @n: the number of bytes to be filled
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int op;

	for (op = 0; n > 0; op++, n--)
	{
		s[op] = b;
	}

	return (s);
}
