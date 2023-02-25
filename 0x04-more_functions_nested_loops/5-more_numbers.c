#include "main.h"
/**
 * more_numbers - check code
 * Description: a function that prints 10 times the numbers, from 0 to 14
 * Return: Always 0 (success)
 */
void more_numbers(void)
{
	int i = 0, a, b;

	while (i < 10)
	{
		for (a = 0; a <= 14; a++)
		{
			b = a;
			if (a > 9)
			{
				_putchar('1');
				b = a % 10;
			}
			_putchar('0' + b);
		}

		_putchar('\n');
		i++;
	}
}
