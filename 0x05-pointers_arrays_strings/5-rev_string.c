#include "main.h"
/**
 * rev_string - check code
 * @s: check string
 * Description: function that reverses a string
 * Return: Always 0
 */
void rev_string(char *s)
{
	char m;
	int x, l, l1;

	l = 0;
	l1 = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	l1 = l - 1;

	for (x = 0; x < l / 2; x++)
	{
		m = s[x];
		s[x] = s[l1];
		s[l1--] = m;
	}
}
