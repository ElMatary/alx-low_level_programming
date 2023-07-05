#include "main.h"

/**
 * _puts_recursion - prints a string
 *
 * @s: pointer to string
 *
 * Return: void
*/

void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(s[0]);
		_put_recursion(s + 1);
	}
}
