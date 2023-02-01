#include <stdio.h>

/*
 * main - prints the sum of the elements of three arrays.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3], b[3], c[3], sum[3], i;

	printf("Enter the elements of the first array here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter the elements of the second array here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &b[i]);
	}
	printf("Enter the elements of the third array here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &c[i]);
	}
	for (i = 0; i < 3; i++)
	{
		sum[i] = a[i] + b[i] + c[i];
		printf("The sum of all the elements of all arrays in index %d is: %d\n", i, sum[i]);
	}
	printf("Code by Masino\nSingle arrays.inc@gitbash...\n");
	return (0);
}
