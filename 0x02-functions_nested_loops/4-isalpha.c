#include "main.h"
/**
 * _isalpha -check code
 * @c: charater to check
 * Description: a function that checks for alphabetic character
 * Return: 1 if chararcter is is a letter, lowercase or uppercase
 * and 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
