#include "main.h"

/**
 * _islower - function that checks for
 * lowercase character
 *
 * @c: checks input
 *
 * Return: 1 if 'c' is lowercase
 *   otherwise 0 (success)
*/

int _islower(int c)
{
	if (c >= 0 && c <= 122)
		return (1);
	return (0);
}
