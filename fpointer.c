#include <stdio.h>

/*
 * main - prints an integer of a pointer to a function.
 * Return: 0.
 * Code by Masino.
 */

int sub(int, int);

void main(void)
{
	int add = 0;
	int (*ptr)(int, int);

	add = (*ptr)(10, 5);
	printf("The addition is:\n%d\n", add);
}

int sub(int a, int b)
{
	return (a + b);
}
