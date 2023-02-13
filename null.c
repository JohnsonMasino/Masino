#include<stdio.h>
#include <stdlib.h>

/*
 * main - prints value of a null pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a = 10;
	int *p = NULL;

	p = &a;
	printf("Value of a using pointer is:\n%d\n", *p);
	return (0);
}
