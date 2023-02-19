#include<stdio.h>
/**
 * main - Enter point
 * Decription: " A program that prints the alphabet in lowercase, and then in uppercase"
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;
	for (x = 'a'; x <= 'z'; x++)
	putchar (x);
	putchar ('\n');
	for (x = 'A'; x <= 'Z'; x++)
	putchar (x);
	return (0);
}

