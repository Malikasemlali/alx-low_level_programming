#include "main.h"
/**
 * print_triangle - check code
 * @size: size of the triangle
 * Description:  function that prints a triangle
 * Return: Always 0 (success)
 */
void print_triangle(int size)
{
	int a, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; a <= size; a++)
		{
			for (s = size - a; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= a; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
