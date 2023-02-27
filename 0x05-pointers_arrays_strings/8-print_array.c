#include <stdio.h>
#include "main.h"
/**
 * print_array - check code
 * @a: array to be printed
 * @n: number of elements to print
 * Description: prints n elements of an array of integers
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x == 0)
			printf("%d", a[x]);
		else
			printf(", %d", a[x]);
	}
		printf("\n");
}
