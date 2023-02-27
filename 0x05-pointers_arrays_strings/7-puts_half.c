#include "main.h"
/**
 * puts_half - check code
 * @str: check string
 * Description: function that prints half of a string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int n;

	for (n = 0; str[n] != '\0'; n++)
		;
	n++;
	for (n /= 2; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
