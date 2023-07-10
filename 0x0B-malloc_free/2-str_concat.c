#include "main.h"

/**
 * *str_concat - concatenates two strings
 *
 * @s1: string
 * @s2: string
 *
 * Return: pointer
*/

char *str_concat(char *s1, char *s2)
{
	int s1_length = 0;
	int s2_length = 0;
	char *m;
	int i, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (*(s1 + s1_length) != '\0')
		s1_length++;

	while (*(s2 + s2_length) != '\0')
		s2_length++;

	m = malloc(1 + (s1_length * sizeof(*s1)) + (s2_length * sizeof(*s2)));
	if (m == NULL)
		return ('\0');

	for (i = 0; i < s1_length; i++)
		m[i] = *(s1 + i);

	for (x = 0; x < s2_length; x++, i++)
		m[i] = *(s2 + x);

	return (m);
}
