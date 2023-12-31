#include "main.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes
 *
 * @s: string
 * @accept: string of bytes to search for
 *
 * Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int i, x;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (s + i);
		}
	}
	return (0);
}
