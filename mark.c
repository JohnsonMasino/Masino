#include <stdio.h>

/*
 * main - prints the average and sum of the marks of some students.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[10], i, sum = 0, avg;

	printf("Enter the marks of students:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < 10; i++)
	{
		sum = sum + a[i];
	}
	avg = sum / 10;
	printf("The sum is: %d\nThe avg is: %d\n", sum, avg);
	return (0);
}
