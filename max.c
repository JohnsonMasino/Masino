#include <stdio.h>

/*
 * main - checks which input is maximum.
 * Return: 0.
 * Code by Masino.
 */

int max(int, int);

int main(int x, int y)
{
	int a, b;

	printf("Enter two numbers here:\n");
	max(x, y);
	return (0);
}

int max(int a, int b)
{
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("The bigger number is:\n%d\n", a);
	else
		printf("The bigger number is:\n%d\n", b);
	return (0);
}
