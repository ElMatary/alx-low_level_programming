#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	int x = 0;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
