#include <stdio.h>

/*
 * Main - Multiplies two matrixes and prints the result.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3][3], b[3][3], c[3][3], i, j;

	printf("Enter the elemenst of the array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter the elements of the second array:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	printf("The matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
	printf("\nThe product of both matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] * b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	printf("\nCode by Masino\n");
	return (0);
}
