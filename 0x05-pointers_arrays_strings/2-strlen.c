#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of a
*/

int _strlen(char *s)
{
	int a;

	for (a = 0; *s != '\0'; s++)
		++a;
	return (a);
}
