#include <stdio.h>

/*
 * main - prints the result of a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a = 10, b = 5;
	int *p, *q;

	p = &a;
	q = &b;
	printf("The value of a is:\n%d %d\n", a, *p);
	printf("The value of b is:\n%d %d\n", b, *q);
	printf("Code by Masino\n");
	return (0);
}
