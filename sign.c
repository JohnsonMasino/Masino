#include <stdio.h>

/*
 * main - subtracts two pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], i, *p = &a[4], *q = &a[i], sum = 0;

	printf("Enter array of number here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	printf("The sum of these numbers is:\n%d\n", sum);
	printf("Removing 1 from the last integer is:\n%d\n", *p - 1);
	printf("\nCode developed by Masino...\n");
	return (0);
}
