#include "main.h"
/**
 * leet - check code
 * @str: pointer array
 * Description: function that encodes a string into 1337
 * Return: pointer to str
 */

char *leet(char *str)
{
	int i, j;

	char a[100] = "aAeEoOtTlL";
	char n[100] = "43071";

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = n[j / 2];
			}
		}
	}
	return (str);
}
