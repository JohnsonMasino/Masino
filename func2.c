#include <stdio.h>

/*
 * main - prints argument passed to function.
 * Return: argument.
 * Code by Masino.
 */

int sum(int, int);

int main(void)
{
	int x = 5, y = 7;
	
	sum(x, y);
	printf("We are working to printf some numbers\n");
	printf("Inside main function\n");
	printf("X = %d and Y = %d\n", x, y);
}

int sum(int x, int y)
{
	x = 7;
	y = 5;
	printf("Inside function\n");
	printf("X = %d and Y = %d\n", x, y);
	return (0);
}
