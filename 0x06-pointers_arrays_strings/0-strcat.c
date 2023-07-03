#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;

	while (dest[i])
		i++;
	for (x = 0; src[x]; x++)
		dest[i++] = src[x];
	return (dest);
}
