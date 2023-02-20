#include<stdio.h>
/**
 * main - Enter point
 * Description: "A program prints all the numbers of base 16 in lowercase"
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;
	int i;

	for (i = 0; i < 10; i++)
	putchar(i);
	for (x = 'a'; x <= 'f'; x++)
	putchar(x);
	putchar('\n');
	return (0);
}
