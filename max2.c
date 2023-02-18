#include <stdio.h>

/*
 * main - prints the biggest number in an input of numbers.
 * Return: 0.
 * Code by Masino.
 */

int max(void);

int main(void)
{
	int a[] = {3,4,3,8,9,5,6,7,3,1}, i, sum = 0, max;

	max = a[0];
	for (i = 0; i < 10; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
	}
	printf("Max is:\n%d\n", max);
	printf("\nCode developed by Masino\n");
	return (0);
}
