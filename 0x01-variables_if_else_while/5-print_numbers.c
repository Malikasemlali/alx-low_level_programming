#include<stdio.h>
/**
 * main - Enter point
 * Description: "A program prints all single digit numbers of base 10"
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		printf("%d", a);
		a = a + 1;
	}
	return (0);
}
