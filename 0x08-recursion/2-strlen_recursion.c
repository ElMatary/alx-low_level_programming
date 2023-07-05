#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: pointer to string
 *
 * Return: intiger
*/

int _strlen_recursion(char *s)
{
	int x = 0;

	if (*s > '\0')
	{
		x = x + _strlen_recursion(s + 1) + 1;
	}
	else
	{
		return (x);
	}
}
