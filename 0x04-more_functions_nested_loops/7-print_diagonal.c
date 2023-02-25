#include "main.h"
/**
 * print_diagonal - check code
 * @n: number of times the character
 * Description: a function that draws a diagonal line on the terminal
 * Return: Always 0 (success)
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 1; c <= n; c++)
		{
			if (c > 1)
			{
				for (i = 1; i <= c - 1; i++)
				{
				_putchar(' ');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

