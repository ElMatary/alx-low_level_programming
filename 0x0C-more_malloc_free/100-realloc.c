#include "main.h"

/**
 * *_realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to memory
 * @old_size: size in bytes
 * @new_size: new size
 *
 * Return: NULL if new_size = 0
 * and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)

{
	char *c, *r;
	unsigned int i;

	if (ptr != NULL)
	c = ptr;
	else
	{ return (malloc(new_size)); }
	if (new_size == old_size)
	return (ptr);
	if (new_size == 0 && ptr != NULL)
	{ free(ptr);
	return (0); }
	r = malloc(new_size);
	if (r == NULL)
	return (0);
	for (i = 0; i < (old_size || i < new_size); i++)
	{
		*(r + i) = c[i];
	}
	free(ptr);
	return (r);
}
