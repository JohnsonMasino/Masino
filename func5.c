#include <stdio.h>


/*
 * main - prints the output of a pointer to a function.
 * Return: 0.
 * Code by Masino.
 */

int val(int, int);

int main(void)
{
	int a = 3, b = 2;

	val(a, b);
	printf("Welcome here. We will tell you the value of a and b\n");
	printf("Main,The value of a is:%d\nAnd b is:%d\n", a, b);
	printf("\nCode developed by Masino...\n");
}

int val(int a, int b)
{
	a = 2;
	b = 3;
	printf("The value of a is:%d\nAnd b is:%d\n", a, b);
}
