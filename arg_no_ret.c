#include <stdio.h>

/*
 * main - prints the multiplication of two numbers.
 * Argument: 2.
 * Return: NULL.
 * Code by Masino.
 */

int mul(int, int);

int main(void)
{
	int a, b;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	mul(a, b);
	printf("\nCode developed by Masino\n");
}

int mul(int x, int y)
{
	printf("The multiplication is:%d\n", x * y);
}
