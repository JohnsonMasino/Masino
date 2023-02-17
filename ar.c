#include <stdio.h>

/*
 * main - prints the subtraction of two numbers.
 * Return: 0
 * code by Masino.
 */

int sub(void);

int main(void)
{
	printf("We will execute a line\n");
	sub();
	printf("\nCode developed by Masino\n");
}

int sub(void)
{
	int a, b, sub = 0;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	sub = a - b;
	printf("The subtraction is: %d\n", sub);
	return (0);
}
