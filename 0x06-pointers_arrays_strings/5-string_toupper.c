#include "main.h"
/**
 * string_toupper - check code
 * @dest: string
 * Description: changes all lowercase of a string to uppercase
 * Return: pointer to dest
 */
char *string_toupper(char *dest)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
	{
		if (dest[i] >= 97 && dest[i] <= 122)
		{
			dest[i] = dest[i] - 32;
		}
	}
	return (dest);
}
