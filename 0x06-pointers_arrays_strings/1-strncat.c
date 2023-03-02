#include "main.h"
/**
 * _strncat - check code
 * @dest: string one
 * @src: string two
 * @n: number carater
 * Description: function that concatenates two strings
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != 0; j++)
	{
		if ( n > j)
		{
			dest[i] = src[j];
		i++;
		}
		else
		{
			dest[i] = src[n];
		}
		dest[i] = '\0';
	}
	return (dest);
}
