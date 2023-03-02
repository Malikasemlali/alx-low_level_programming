#include "main.h"
/**
 * cap_string - check code
 * @str: string
 * Description: capitalizes all words of a string
 * Return: pointer to  str
 */
char *cap_string(char *str)
{
	int i, j;
	char s[100] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}' };

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (i == 0)
			{
				if (str[i] >=  97 && str[i] <= 122)
				{
					str[i] = str[i] - 32;
				}
			}
			if (str[i] == s[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}
	}
	return (str);
}
