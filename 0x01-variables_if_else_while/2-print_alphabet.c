#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program that prints the alphabet in lowercase
 *
 * Return: 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
