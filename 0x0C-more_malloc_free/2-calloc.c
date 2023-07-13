#include "main.h"

/**
 * *_calloc - allocates memory for an array, using malloc
 *
 * @nmemb: array lenght
 * @size: size of each element
 *
 * Return: pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	x = malloc(nmemb * size);
	if (x == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < nmemb * size; j++)
	{
		x[j] = 0;
	}

	return (x);
}
