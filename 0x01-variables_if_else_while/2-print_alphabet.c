#include <stdio.h>
/**
 * main - Entry point
 * Description: " A program that prints the alphabet in lowercase"
 * return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		putchar("%c \n", ch);
		ch++;
	}
	return (0);
}

