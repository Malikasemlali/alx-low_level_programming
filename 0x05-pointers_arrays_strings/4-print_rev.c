#include "main.h"
/**
 * print_rev - check code
 * @s: check pointer
 * Description: function that prints a string, in reverse
 * Return: Always 0
 */
void print_rev(char *s)
{
	int x = 0;

	while (s[x])
		x++;
	while (x--)
		_putchar(s[x]);
	_putchar('\n');
}
