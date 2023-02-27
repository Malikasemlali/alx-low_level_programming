#include "main.h"
/**
 * *_strcpy -  check code
 * @dest: check string
 * @src: check string
 * Description: function that copies the string pointed to by src,
 * including the terminating null byte (\0)
 * the buffer pointed to by `dest`
 * Return: the pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int n = -1;

	do {
		n++;
		dest[n] = src[n];
	} while (src[n] != '\0');

	return (dest);
}
