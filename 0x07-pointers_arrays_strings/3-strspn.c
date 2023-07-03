#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, b;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (b = 0; accept[b] != s[x]; b++)
		{
			if (accept[b] == '\0')
				return (x);
		}
	}

	return (x);
}
