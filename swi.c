#include <stdio.h>

/*
 * main - prints the sum of two inputs.
 * Return: 0.
 * code by Masino.
 */

int main(void)
{
	int i, j, sum;

	printf("Enter two number:\n");
	scanf("%d %d", &i, &j);
	sum = i + j;
	printf("\nThe sum is:%d\n", sum);
	return (0);
}
