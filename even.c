#include <stdio.h>

/*
 * main - prints the odd and average of input of numbers using array and printf.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int mark[5], i, sum = 0, avg;

	printf("Enter the marks here...\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &mark[i]);
		sum = sum + mark[i];
	}
	avg = sum / 5;
	printf("The sum of these marks is %d\nThe average of these numbers is %d\n", sum, avg);
	return (0);
}
