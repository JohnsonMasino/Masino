#include <stdio.h>

/*
 * main - increments a pointer to a variable.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], i, *p;

	printf("Enter array of elements here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	p = a;
	printf("Printing first with pointer is:\n");
	printf("%d\n", *p);
	p++;
	printf("Moving forward is:\n%d\n", *p);
	printf("\nCode developed by Masino...\n");
	return (0);
}
