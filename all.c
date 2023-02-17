#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * main - performs differnt function operations.
 * Return: 0.
 * Code by Masino.
 */

int sum(int, int);
int sub(int, int);
int ov(int, int);
int mul(int, int);

int main(void)
{
	int x, y;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &x, &y);
	printf("These numbers are:\n%d and %d\n", x, y);
	sum(x, y);
	sub(x, y);
	ov(x, y);
	mul(x, y);
	printf("\nCode developed by Masino\n");
}

int sum(int a, int b)
{
	printf("The sum is:\n%d\n", a + b);
	return (a + b);
}

int sub(int m, int n)
{
	printf("The subtraction is:\n%d\n", m - n);
	return (m - n);
}

int ov(int c, int d)
{
	printf("The division is:\n%d\n", c / d);
	return (c / d);
}

int mul(int p, int q)
{
	printf("The multiplication is:\n%d\n", p * q);
	return (p * q);
}
