#include <stdio.h>

/*
 * main - checks which input is maximum.
 * Return: 0.
 * Code by Masino.
 */

int max(int, int);

int main(int m, int n)
{
	int x, y;

	printf("Enter two numbers here:\n");
	max(x, y);
	return (0);
}

int max(int x, int y)
{
	scanf("%d %d", &x, &y);
	if (x > y)
		printf("The bigger number is:\n%d\n", x);
	else
		printf("The bigger number is:\n%d\n", y);
	return (0);
}
