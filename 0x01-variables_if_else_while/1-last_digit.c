#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
* Description: "A program will assign a random number to the variable"
* Return: Always 0(Success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n>5)
	{
		printf("the last digit %d and is greater than 5\n", n);
	}
	else if(n<6 || n!=0)
	{
		printf("the last digit %d  and is less than 6 and not 0\n", n);
	}
	else {
		printf("the last digit %d and  is 0\n", n);
	}
	return (0);
