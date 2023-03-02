#include "main.h"
/**
 * _strcat - check code
 * @dest: string one
 * @src: string two
 * Description: function that concatenates two strings
 * Return: pointer to  dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	dest[i] = '\0';
	}
	return (dest);
}
