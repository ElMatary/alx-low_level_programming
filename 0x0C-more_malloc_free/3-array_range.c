#include "main.h"

/**
 * array_range - creates an array of integers
 *
 * @min: starting int
 * @max: max int
 *
 * Return: array
*/

int *array_range(int min, int max)
{
	int *pt, i = 0, j = min;

	if (min > max)
		return (0);
	pt = malloc((max - min + 1) * sizeof(int));

	if (!pt)
		return (0);
	while (i <= max - min)
		pt[i++] = j++;
	return (pt);
}
