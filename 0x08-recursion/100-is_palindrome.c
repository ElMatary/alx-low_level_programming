#include "main.h"

/**
 * check - Check for the palindrome
 *
 * @s: String
 * @i: int
 * @e: int
 * @p: int
 *
 * Return: 0 or 1
*/

int check(char *s, int i, int e, int p)
{
	if ((i == e && p != 0) || (i == e + 1 && p == 0))
		return (1);
	else if (s[i] != s[e])
		return (0);
	else
		return (check(s, i + 1, e - 1, p));
}

/**
 * last_index - Returns the last index of a string
 *
 * @s: string
 *
 * Return: int
*/

int last_index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += last_index(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Check if a string is a palindrome
 *
 * @s: string
 *
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int e = last_index(s);

	return (check(s, 0, e - 1, e % 2));
}
