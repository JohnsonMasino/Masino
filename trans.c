#include <stdio.h>

/*
 * Main - prints the transpose of a matrix.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int arr[3][3], i, j, sum = 0;

	printf("Enter the array of this matrix\n");
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
	printf("\nThe transpose is: \n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d\t", arr[j][i]);
			sum = sum + arr[j][i];
		}
		printf("\n");
	}
	printf("\nThe sum is: %d\n", sum);
	printf("Code by Masino\n");
	return (0);
}
