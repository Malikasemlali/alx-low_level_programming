#include "main.h"
/**
 * _islower - check code
 * @c: check character
 * Description: A function that checks that lowercase character
 * Return: 1 if c character is lower case
 * and 0 otherwise
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
