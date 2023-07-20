#include "variadic_functions.h"


/**
 * print_numbers - prints numbers with separator
 *
 * @separator: the string separator
 * @n: the number of arguments
 * @...: the integers to print
 *
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list l;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(l, n);
	while (i--)
		printf("%d%s", va_arg(l, int),
			i ? (separator ? separator : "") : "\n");
	va_end(l);
}
