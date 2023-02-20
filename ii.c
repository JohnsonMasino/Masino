#include <stdio.h>

/*
 * main - prints input of user from a function.
 * Return: 0.
 * Code by Masino.
 */

int add(int, int);

void main(void)
{
	int sum, a, b;

	printf("Enter two numers here:\n");
	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("The sum is:\n%d\n", sum);
}

int add(int m, int n)
{
	return (m + n);
}
