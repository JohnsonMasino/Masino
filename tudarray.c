#include <stdio.h>

/*
 * main - prints the elements and sum of two D array.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[2][3], i, j, sum = 0;

	printf("Enter the elements of this array\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", a[i][j]);
			sum = sum + a[i][j];
		}
		printf("\n");
	}
	printf("\nSum is: %d\n", sum);
	printf("Code by Masino\n");
	return (0);
}
