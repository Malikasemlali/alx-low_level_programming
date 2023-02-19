#include<stdio.h>
/**
 * main - Enter point
 * Description: "A program prints the alphabet in lowercase excepts"
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if ((x != 'e') && (x != 'q'))
	putchar (x);
	}
	putchar ('\n');
	return (0);
}
