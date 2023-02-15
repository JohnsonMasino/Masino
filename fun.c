#include <stdio.h>

/*
 * main - prints a function code from main function.
 * Return: void.
 * Code by Masino.
 */

int sum(void);

int sum(void)
{
	int a, b, sum = 0;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("The numbers entered are:\n%d\n%d\n", a, b);
	sum = a + b;
	printf("The sum is:\n%d\n", sum);
	return (0);
}

int main(void)
{
	printf("Welcome here...\n");
	sum();
	printf("This code was developed by Masino\n");
	return (0);
}
