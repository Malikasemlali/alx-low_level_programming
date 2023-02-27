#include "main.h"
/**
 * swap_int - check code
 * @a: integer one
 * @b: integer two
 * Description: function that swaps the values of two integers
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;
}
