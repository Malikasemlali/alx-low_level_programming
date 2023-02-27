#include "main.h"
/**
 * _puts - check code
 * @str: check string
 * Description: function that prints a string, followed by a new line
 * Return: Always 0
 */
void _puts(char *str)
{
	int s = 0;

	while (str[s])
	{
		_putchar(str[s]);
		s++;
	}
	_putchar('\n');
}
