#include<stdio.h>
/**
 * main - Enter point
 * Description: "A program prints the alphabet in lowercase excepts"
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for ((x = 'a') && (x != 'e') && (x != 'q'); x <= 'z'; x++)
	putchar (x);
	putchar ('\n');
	return (0);
}
