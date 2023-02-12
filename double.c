#include <stdio.h>

/*
 * main - prints a variable using linked pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, *p, **q, ***m;

	p = &a;
	q = &p;
	m = &q;
	printf("Enter a number here:\n");
	scanf("%d", &a);
	printf("The value of the first number is:\n%d\n%d\n%d\n%d\n", a, *p, *(*q), *(*(*m)));
	printf("\nCode developed by Masino...\n");
	return (0);
}
