#include "main.h"

/**
 * Description: print_alphabet_x10 - using function _putchar to
 * print 10 times
 *
*/

void print_alphabet_x10(void)
{
	int n, ch

	for (n = 0; n <= 9; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
