#include <stdio.h>

/*
 * main - prints the sum of numbers using printf.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a, i, sum = 0;

	for (i = 1; i <= 10; i++)
	{
		printf("Enter a  number here!\n");
		scanf("%d", &a);
		if (a < 0)
			break;
		sum = sum + a;
		printf("sum = %d\n", sum);
	}
	return (0);
}
