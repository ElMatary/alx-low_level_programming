#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change for
 * an amount of money
 *
 * @argc: int
 * @argv: pointer to array
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int x, i = 5;
		int a = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (x = 0; x < 5; x++)
		{
			if (a >= cents[x])
			{
				i += a / cents[x];
				a = a % cents[x];
				if (a % cents[x] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", i);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
