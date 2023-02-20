#include <stdio.h>

/*
 * main - prints an integer from a function.
 * Return: 0.
 * Code by Masino.
 */

int sum(int, int);

void main(void)
{
	int add;

	add = sum(4, 6);
	printf("The sum is:\n%d\n", add);
}

int sum(int a, int b)
{
	return (a + b);
}
