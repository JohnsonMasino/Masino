#include <stdio.h>

/*
 * main - runs a mathematical calculation.
 * Return: 0.
 * Code by Masino.
 */

void sub(int, int);
void add(int, int);
void mul(int, int);
void div(int, int);

void sub(int a, int b)
{
	printf("The subtraction is:\n%d\n", a - b);
}

void add(int a, int b)
{
	printf("The addition is:\n%d\n", a + b);
}

void mul(int a, int b)
{
	printf("The multiplication is:\n%d\n", a * b);
}

void div(int a, int b)
{
	printf("The division is:\n%d\n", a / b);
}

void main(void)
{
	int rslt, a, b;
	void (*ptr[10])(int, int) = (sub, add, mul, div);

	printf("For operation...\nEnter 0 for subtraction\nEnter 1 for addition\nEnter 2 for multiplication\nEnter 3 for division\n");
	printf("Enter choice of operation here:\n");
	scanf("%d", &rslt);
	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	(*ptr[rslt])(a, b);
}
