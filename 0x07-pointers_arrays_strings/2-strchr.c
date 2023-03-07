#include "main.h"
/**
 * _strchr - check code
 * @s: arrays
 * @c: char
 * Description:  function that locates a character in a string
 * Return: s
 */

char *_strchr(char *s, char c)
{

	while (s[0] != '\0')
	{

		if (s[0] == c)

			return (s);

		else if (s[1] == c)

			return (s + 1);

		s++;
	}
	return (s + 1);
}
