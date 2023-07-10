#include "main.h"

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: int
 * @height: int
 *
 * Return: pointer to 2d array
*/

int **alloc_grid(int width, int height)
{
	int i, j, x, **alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int *) * height);

	if (alloc_mem == NULL)
	{
		free(alloc_mem);
		return ('\0');
	}

	for (i = 0; i < height; i++)
	{
		alloc_mem[i] = malloc(sizeof(int) * width);

		if (alloc_mem[i] == NULL)
		{
			for (x = i; x >= 0; x--)
				free(alloc_mem[x]);

			free(alloc_mem);
			return ('\0');
		}

		for (j = 0; j < width; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
