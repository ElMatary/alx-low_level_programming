#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest: Destination String
 * @src: string
 * @n: Number of bytes of src
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int b = 0;

	while (dest[x] != '\0')
		x++;

	while (src[b] != '\0' && n != b)
	{
		*(dest + x) = src[b];
		b++;
		x++;
	}

	*(dest + x) = '\0';

	return (dest);
}
