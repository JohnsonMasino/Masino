#include <stdio.h>

/*
 * main - adds some pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], *p = &a[0], *q, i, sum = 0;

	printf("Enter an array of numbers\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	printf("The sum is:\n%d\n", sum);
	p = p + 2;
	printf("Moving the pointer twice + we print:\n%d\n", *p);
	return (0);
}
