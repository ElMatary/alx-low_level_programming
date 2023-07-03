#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: pointer to an array
 * @size: size of array
 *
 * Return: 0
*/

void print_diagsums(int *a, int size)
{
	int x;
	int i = 0;
	int b = 0;

	for (x = 0; x < size; x++)
	{
		i += a[x];
		b += a[size - x - 1];
		a += size;
	}
	printf("%d, ", i);
	printf("%d\n", b);
}
