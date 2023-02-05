#include <stdio.h>

/*
 * Main - multiplies two arrays and prints the result into another array.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3][3], b[3][3], c[3][3], i, j, k, sum;
	
	printf("Enter the elements of the first matrix\n");
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
	printf("\nEnter the elements of the second matrix\n");
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
	printf("\nThe multiplication is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum = 0;
			for (k = 0; k < 3; k++)
			{
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	printf("\nCode by Masino@gitinc.c\n");
	return (0);
}
