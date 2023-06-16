#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: program that prints the alphabet in lowercase
 * and then in uppercase
 *
 * Return: 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
