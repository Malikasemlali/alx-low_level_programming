#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - check code
 * @i: number code
 * Description:  function prints natural numbers from n to 98
 * Return: Always 0 (Success)
 */
void print_to_98(int i)
{
	if (i < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i++;
		}
	}
	else if (i > 98)
	{
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
			i--;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
