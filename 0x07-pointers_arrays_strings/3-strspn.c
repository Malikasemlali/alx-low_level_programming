#include "main.h"
/**
 * _strspn -  check code
 * @s: pointer
 * @accept: pointer
 * Description: function that gets the length of a prefix substring
 * Return: s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c1, c2;

	for (c1 = 0; s[c1] != '\0'; c1++)
	{
		for (c2 = 0; accept[c2] != '\0'; c2++)
		{
			if (s[c1] == accept[c2])
			{
				break;
			}
		}
			if (!(accept[c2]))
			{
				break;
			}
	}
	return (c1);
}
