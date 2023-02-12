#include <stdio.h>

/*
 * main - prints addition pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5] = {2, 1, -9, 0, 3}, *p = &a[4];

	p = p - 2;
	printf("Moving back by two is:\n%d\n", *p);
	return (0);
}
