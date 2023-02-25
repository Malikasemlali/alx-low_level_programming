#include"main.h"
/**
 * print_square - check code
 * @size: size of the square
 * Description: a function that prints a square
 * Return: Always 0 (success)
 */
void print_square(int size)
{
	int i, n;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (n = 1; n <= size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
