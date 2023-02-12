#include <stdio.h>

/*
 * main - prints a value of a variable
 * using a pointer to another pointer.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	int a, b, *p, *q;

	p = &a;
	q = &b;
	*p = *q;
	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("The values you just entered are:\n%d\n%d\n", a, b);
	printf("Now I am printing them with a pointer to another pointer:\n%d\n%d\n", *p, *q);
	printf("\nCode by Masino...\n");
	return (0);
}
