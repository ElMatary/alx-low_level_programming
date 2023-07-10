#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	char *m;
	int i;
	int length_of_string = 0;

	if (str == NULL)
		return ('\0');

	while (*(str + length_of_string) != '\0')
		length_of_string++;

	length_of_string++;

	m = malloc(sizeof(*str) * length_of_string);

	if (m == NULL)
		return ('\0');

	for (i = 0; i < length_of_string; i++)
		m[i] = *(str + i);

	m[i] = '\0';

	return (m);
}
