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
	int i = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
		{
			if (*a < '0' || *a > '9')
			{
				return (printf("Error\n"), 1);
			}
		}
		i += atoi(argv[argc]);
	}
	printf("%d\n", i);
	return (0);
}
