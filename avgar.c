#include <stdio.h>

/*
 * main - prints the average of the elements of two different
 * arrays index to index and store the result in a third array.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3], b[3], i, c[3];

	printf("Enter the arrays of the first variable here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the arrays of the second variable here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = 0; i < 3; i++)
	{
		c[i] = (a[i] + b[i]) / 2;
		printf("The average of both arrays in index %d is: %d\n", i, c[i]);
	}
	printf("Code by Masino for the practice\nWed, 1 Feb 2023. 20:50\nHappy New Month!\n");
	return (0);
}
