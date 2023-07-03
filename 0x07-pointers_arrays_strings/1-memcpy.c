#include "main.h"

/**
 * *_memcpy - copies memory area
 *
 * @dest: memory area
 * @src: source
 * @n: the number of bytes to be copied
 *
 * Return: dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int op;

	for (op = 0; op < n; op++)
	{
		dest[op] = src[op];
	}

	return (dest);
}
