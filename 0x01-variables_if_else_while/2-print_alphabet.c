#include <stdio.h>
/**
 * main - Entry point
 * Description: " A program that prints the alphabet in lowercase"
 * Return: always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}

