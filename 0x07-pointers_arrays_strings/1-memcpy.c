#include "main.h"
/**
 * _memcpy - check code
 * @dest: pointer
 * @src: pointer
 * @n: unsigned num
 * Description:  function copies n bytes from memory area
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		dest[x] = src[x];
		n -= 1;
	}
	return (dest);
}
