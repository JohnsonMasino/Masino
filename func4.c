#include <stdio.h>

/*
 * main - prints function in a main function.
 * Return: 0.
 * Code by Masino.
 */

int num(int*, int*);

int main(void)
{
	int x = 5, y = 7;

	num(&x, &y);
	printf("In main block\nX = %d and Y = %d\n", x, y);
}

int num(int *x, int *y)
{
	*x = 7;
	*y = 5;
	printf("In function block\nX = %d and Y = %d\n", *x, *y);
}
