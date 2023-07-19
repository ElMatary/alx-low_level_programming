#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 *
 * @array: An array of integers
 * @size: Number of elements in the @array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: integer index
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
