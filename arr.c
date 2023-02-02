#include <stdio.h>

/*
 * main - prints the sums of the elements of two different arrays.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int arr1[5], arr2[5], i, sum1 = 0, sum2 = 0;

	printf("Enter the elements of the first array here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter the elements of the second array here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sum1 = arr1[0] + arr1[1] + arr1[2] + arr1[3] + arr1[4];
		sum2 = arr2[0] + arr2[1] + arr2[2] + arr2[3] + arr2[4];
	}
	printf("The sum of the first array is: %d\nThe sum of the second array is: %d\n", sum1, sum2);
	printf("Code by MASINO@github\n");
	return (0);
}
