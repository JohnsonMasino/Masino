#include <stdio.h>

/*
 * main - prints a callback function.
 * Return: 0.
 * Code by Masino.
 */

void disp(void (*fptr)(int, int))
{
	fptr(10, 5);
}

void sum(int a, int b)
{
	printf("Sum is:\n%d\n", a + b);
}

void sub(int m, int n)
{
	printf("Subtraction is:\n%d\n", m - n);
}

void main(void)
{
	disp(sum);
	disp(sub);
}
