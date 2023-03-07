#include "main.h"
/**
 * *_memset - check code
 * @s: pointer
 * @b: char
 * @n: unsigned number
 * Description: function fills the first n bytes of the memory area
 *Return: a pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;
	
	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n -= 1;
	}
	return (s);
}
