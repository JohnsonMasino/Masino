#include <stdio.h>

/*
 * main - adds an integer to a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], i, *p = &a[0];

	printf("Enter an array of numbers here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	*p = 2;
	printf("Value of pointer when it is 2 is:\n%d", *p);
	printf("\nCode developed by Masino...\n");
	return (0);
}
