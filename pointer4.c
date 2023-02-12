#include <stdio.h>

/*
 * main - prints address of a varaible.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, b, *p, *q;

	p = &a;
	q = &b;
	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("The values you just entered are:\n%d\n%d\n", a, b);
	printf("Printing with pointers as:\n%d\n%d\n", *p, *q);
	printf("This is the address of a:\n%ls\n", p);
	printf("This is the address of b:\n%ls\n", q);
	printf("\nCode developed by Masino...\n");
	return (0);
}
