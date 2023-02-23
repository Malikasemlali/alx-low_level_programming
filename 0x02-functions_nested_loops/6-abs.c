#include "main.h"
/**
 * _abs - check code
 * @i: value of an integer
 * Description: a function that computes the absolute value of an integer
 * Return: Always 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else
	{
		return (i);
	}
}
