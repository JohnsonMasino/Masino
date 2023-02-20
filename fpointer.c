#include <stdio.h>

/*
 * main - prints an integer of a pointer to a function.
 * Return: 0.
 * Code by Masino.
 */

int sub(int, int);

void main(void)
{
	int add;

	add = sub(10, 5);
	printf("The sum is:\n%d\n", add);
}

int sub(int a, int b)
{
	return (a - b);
}
