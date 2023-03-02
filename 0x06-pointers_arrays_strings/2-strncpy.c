#include "main.h"
/**
 * _strncpy - check code
 * @dest: string one
 * @src: string two
 * @n: number caracter
 * Description: function that copies a string
 * Return: pointer dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
