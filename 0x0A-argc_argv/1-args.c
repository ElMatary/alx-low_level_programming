#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: int
 * @argv: pointer
 *
 * Return: 0 (Success)
*/

int main(int argc, char const *argv[])
{
	(void)argc;
	printf("%d\n", argc - 1);
	return (0);
}
