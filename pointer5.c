#include <stdio.h>

/*
 * main - prints a value using a pointer to a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, b, *n, *m;

	n = &a;
	m = n;
	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("Printing first with pointer to pointer:\n%d\n", *m);
	m = &b;
	n = m;
	printf("Printing second with pointer to pointer:\n%d\n", *n);
	printf("\nCode developed by Masino@git-bash@johnsonmasino@gmail.com\n");
	return (0);
}
