#include <stdio.h>

/*
 * main - prints calculations of two numbers.
 * Return: (0).
 * Code by Masino.
 */

int main(void)
{
	int a, b, sum = 0, sub = 0, div = 0, mul = 0;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("The sum is:\n%d\n", sum);
	sub = a - b;
	printf("the subtraction is:\n%d\n", sub);
	div = a / b;
	printf("The division is:\n%d\n", div);
	mul = a * b;
	printf("The multiplication is:\n%d\n", mul);
	printf("\nCode developed by Masino\n");
	return (0);
}
