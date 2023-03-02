#include "main.h"
/**
 * reverse_array - check code
 * @a: arr one
 * @n: number elem of array
 * Description: function that reverses the content of an array of integers
 * Return: always 0
 */
void reverse_array(int *a, int n)
{

	int i, m;

	i = 0;
	m = 0;

	n -= 1;

	while (i <= n)
	{
		m = a[n];
		a[n--] = a[i];
		a[i++] = m;
	}
}
