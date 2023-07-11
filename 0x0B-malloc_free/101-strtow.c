#include "main.h"

/**
 * wrdcnt - counts the number of words
 *
 * @s: string
 *
 * Return: integer
*/

int wrdcnt(char *s)
{
	int x, n = 0;

	for (x = 0; s[x]; x++)
	{
		if (s[x] == ' ')
		{
			if (s[x + 1] != ' ' && s[x + 1] != '\0')
			{
				n++;
			}
		}
		else if (x == 0)
		{
			n++;
		}
	}
	n++;
	return (n);
}

/**
 * strtow - splits a string int words
 *
 * @str: string
 *
 * Return: pointer to array
*/

char **strtow(char *str)
{
	int x, j, a, l, n = 0, b = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	x = 0;
	while (str[x])
	{
		if (str[x] != ' ' && (x == 0 || str[x - 1] == ' '))
		{
			for (j = 1; str[x + j] != ' ' && str[x + j]; j++)
				;
			j++;
			w[b] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[b] == NULL)
			{
				for (a = 0; a < b; a++)
					free(w[a]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[b][l] = str[x + l];
			w[b][l] = '\0';
			b++;
			x += j;
		}
		else
			x++;
	}
	return (w);
}
