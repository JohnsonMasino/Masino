#include <stdio.h>

/*
 * main - prints the sum of two D array.
 * 5 students offer 3 university courses here.
 * Return: Always 0 (Success).
 * Code by Masino.
 */

int main(void)
{
	int arr[3][3], i, j, sum = 0;

	printf("Enter the elements this array\n");
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
			sum = sum + arr[i][j];
		}
		printf("\n\n");
	}
	printf("\nThe sum is: %d\n", sum);
	printf("\nCode by Masino@git\n");
	return (0);
}
