#include "main.h"
/**
 * times_table - check code
 * Description:  function that prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int n, x, r;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');

			r = n * x;

			if (r <= 9)
				_putchar(' ');
			else
				_putchar((r / 10) + 48);

			_putchar((r % 10) + 48);
		}
		_putchar('\n');
	}
}
