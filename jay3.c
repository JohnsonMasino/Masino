#include <stdio.h>

/*
 * main - prints a pointer function.
 * Return: 0.
 * Code by Masino.
 */

void f(int *p, int m)
{
	m = m + 5;
	*p = *p + m;
}

void main(void)
{
	int i = 5, j = 10;

	f(&i, j);
	printf("%d\n", i + j);
	printf("\nCode developed by Masino\n");
}
