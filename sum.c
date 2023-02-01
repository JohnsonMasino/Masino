#include <stdio.h>

/*
 * main - prints the sum of two arrays and save in another array.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int arr1[5], arr2[5], sumarr[5], i;

	printf("Enter the elements of first array here...\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("Enter the elements of second array here...\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < 5; i++)
	{
		sumarr[i] = arr1[i] + arr2[i];
		printf("The sum of the arrays in index %d is: %d\n", i, sumarr[i]);
	}
	return (0);
}
