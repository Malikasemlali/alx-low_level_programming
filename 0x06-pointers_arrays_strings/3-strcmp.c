#include "main.h"
/**
 * _strcmp - check code
 * @s1: string one
 * @s2: string two
 * Description: function that compares two strings
 * Return:Always 0
 */
int _strcmp(char *s1, char *s2)
{

	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
		return (0);
}
