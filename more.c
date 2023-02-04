#include <stdio.h>

/*
 * Main - sums two matrixes.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3][3], b[3][3], c[3][3], i, j;

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
	printf("Enter the elements of the second matrix\n");
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
	printf("\nThe sum of both matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	printf("\nCode by Masino@git-bash\n");
	return (0);
}
