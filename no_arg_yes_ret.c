#include <stdio.h>

/*
 * main - prints a division of a numer.
 * Argument: NULL.
 * Return: div.
 * Code by Masino.
 */

int div(void);

int main(void)
{
	float c;

	c = div();
	printf("The second number dividing the first is: %f\n", c);
	printf("\nCode developed by Masino\n");
}

int div(void)
{
	int a, b;
	float div;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	div = a / b;
	return (div);
}
