#include <stdio.h>

/*
 * Main - prints the sum of 2D array by row and column.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int arr[3][3], i, j, sr, sc;

	printf("Enter the elements of this array...\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	printf("The matrix is:\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	for (i = 0; i < 3; i++)
	{
		sr = sc = 0;
		for (j = 0; j < 3; j++)
		{
			sr = sr + arr[i][j];
			sc = sc + arr[j][i];
		}
		printf("\nThe sum of the row is: %d\n", sr);
		printf("The sum of the column is: %d\n", sc);
	}
	printf("Code by Masino\n");
	return (0);
}
