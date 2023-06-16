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
	while (ch <= 'Z')
	{
		putchar(CH);
		ch++;
	}
	putchar('\n');
	return (0);
}
