#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: int
 * @argv: array of pointers
 *
 * Return: 0 (Success)
*/

int main(int argc, int argv[])
{
	int i, x;
	int a = 0;

	for (i = 1; i < argc; i++)
	{
		for (x = 0; argv[i][x]; x++)
		{
			if (argv[i][x] < '0' || argv[i][x] < '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		a += atoi(argv[i])
	}
	printf("%d\n", a);
	return (0);
}
