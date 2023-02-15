#include <stdio.h>

/*
 * main - prints a function in another function.
 * Return: 0.
 * Code by Masino.
 */

unsigned int even(void);

int main(void)
{
	printf("Welcome here...\nWe will first print first number\n");
	even();
	printf("You have a chance to verify another number...\n");
	even();
	printf("Code developed by Masino\n");
	return (0);
}

unsigned int even(void)
{
	unsigned int a;

	printf("Enter a number here...\n");
	scanf("%u", &a);
	if ((a % 2) == 0)
	{
		printf("This number is an even number\n");
	}
	else
		printf("This number is an odd number\n");
	return (0);
}
