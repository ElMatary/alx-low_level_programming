#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0 (Success)
*/

void more_numbers(void)
{
	int num1, num2, num3;

	for (num2 = 1; num2 <= 10; num2++)
	{
		for (num3 = 0; num3 <= 14; num3++)
		{
			num = num3;
			if (num3 > 9)
			{
				_putchar(1 + 48);
				num = num3 % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
