#include <stdio.h>

/*
 * main - prints array of integer.
 * Return: 0.
 * Code by Masino.
 */

int avg(int [], int);

int main(void)
{
	int mk[5], i, average;

	printf("Enter five numbers here:\n");
	average = avg(mk, 5);
	printf("The average is %d\n", average);
	printf("\nCode developed by Masino\n");
}

int avg(int mk[], int len)
{
	int i, sum = 0, average = 0;
	
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &mk[i]);
		sum = sum + mk[i];
	}
	printf("Sum is:\n%d\n", sum);
	average = sum / len;
	return (average);
}
