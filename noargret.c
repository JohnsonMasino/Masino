#include <stdio.h>

/*
 * main - prints the sum of two numbers.
 * Argument: NULL.
 * Return: NULL.
 * Code by Masino.
 */

void sum(void);

void main(void)
{
	printf("What two numbers do you know...?\n");
	sum();
	printf("\nCode developed by Masino\n");
}

void sum(void)
{
	int a, b, sum = 0;

	printf("Enter them here:\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("Sum is:%d\n", sum);
}
