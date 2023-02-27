#include "main.h"
/**
 * _strlen - check code
 * @s: caracter
 * Description: function that returns the length of a string
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
