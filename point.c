#include <stdio.h>

/*
 * main - prints out a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int *i, *j;
	int a, b;

	i = &a;
	j = &b;
	printf("Enter two numbers:\n");
	scanf("%d %d", &a, &b);
	printf("The values you just entered are:\n%d\n%d\n", a, b);
	printf("Now I am printing them with the specified pointers:\n%d\n%d\n", *i, *j);
	printf("\nCode by Masino...\n");
	return (0);
}
