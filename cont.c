#include <stdio.h>

/*
 * main - prints the sum of five numbers without
 * a negative number.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, i, sum = 0;

	for (i = 1; i < 6; i++)
	{
		printf("Enter number here!\n");
		scanf("%d", &a);
		if (a < 0)
		{
			printf("Enter a positive number\n");
			continue;
		}
		sum = sum + a;
		printf("Sum = %d\n", sum);
	}
	return (0);
}
