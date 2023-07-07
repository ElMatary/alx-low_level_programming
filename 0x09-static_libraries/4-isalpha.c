#include "main.h"

/**
 * _isalpha - function that checks for
 * alphabetic character
 *
 * @c: takes input
 *
 * Return: 1 if c is a letter, lowercase or uppercase
 *	else 0
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
