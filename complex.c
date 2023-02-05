#include <stdio.h>
#define N 50

/*
 * Main - multiplies two arrays and prints the result into another
 * array by column of first matrix to row of second matrix.
 * @m: row of first matrix.
 * @n: column of first matrix.
 * @p: row of second matrix.
 * @q: column of second matrix.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	int arr1[N][N], arr2[N][N], arrsum[N][N], i, j, k, m, n, p, q, sum;

	printf("Enter the row and column of the first matrix\n");
	scanf("%d %d", &m, &n);
	printf("Enter the first matrix here\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter the row and column of the second matrix\n");
	scanf("%d %d", &p, &q);
	printf("Enter the elements of the second matrix\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			scanf("%d", &arr2[i][j]);
		}
	}
	printf("The first matrix is:\n");
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}
	printf("\nThe second matrix is:\n");
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < q; j++)
		{
			printf("%d\t", arr2[i][j]);
		}
		printf("\n");
	}
	if (n != p)
		printf("These matrices can not be multiplied\n");
	else
	{
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				sum = 0;
				for (k = 0; k < m; k++)
				{
					sum = sum + arr1[i][k] * arr2[k][j];
				}
				arrsum[i][j] = sum;
			}
		}
		printf("The multiplication is:\n");
		for (i = 0; i < m; i++)
		{
			for (j = 0; j < q; j++)
			{
				printf("%d\t", arrsum[i][j]);
			}
			printf("\n");
		}
	}
	printf("\nCode by Masino\n");
	return (0);
}
