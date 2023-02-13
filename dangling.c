#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints a dangling pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a = 10;
	int *p;

	p = &a;
	printf("The value of a using pointer is:\n%d\n", *p);
	free(p);
	p == NULL;
	if (p == NULL)
		printf("Space is null now\n");
	else
		printf("The value of p without pointer is:\n%d\n", a);
	printf("\nCode developed by Masino\n");
	return (0);
}
