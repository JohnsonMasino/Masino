#include <stdio.h>

/*
 * main - prints the sum of two arguments.
 * Arguments: 2.
 * Return: 1.
 * Code by Masino.
 */

int sum(int, int);

int main(void)
{
	int x, y, c;
	printf("Enter x amd y:\n");
	scanf("%d %d", &x, &y);
	c = sum(x, y);
	printf("sum = %d\n", c);
}

int sum(int a, int b)
{
	return (a + b);
}
