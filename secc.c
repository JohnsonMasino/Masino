#include <stdio.h>

/*
 * main - prints an array of integers.
 * Return: 0.
 * Code by Masino/
 */

int main(void)
{
	int a[5], i, *p, sum = 0;

	printf("Enter array of numers here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	printf("Sum of all are:\n%d\n", sum);
	p = &a[4];
	printf("The last element is:%d\n", *p);
	if (a[4] < 5)
	{
		printf("The last element you entered is not up to 5\n");
		printf("This means you are not eligible to vote\nSorry\n");
	}
	else
		printf("The last element is more than 5\nYou are eligible to vote\n");
	printf("\nThis code is developed by Masino\n");
	return (0);
}
