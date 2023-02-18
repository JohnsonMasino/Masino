#include <stdio.h>

/*
 * main - prints array of integer.
 * Return: 0.
 * Code by Masino.
 */

int avg(int [], int);

int main(void)
{
	int mk[] = {2, 3, 4, 5, 6, 7, 8, 9}, i, average;

	average = avg(mk, 8);
	printf("The average is %d\n", average);
	printf("\nCode developed by Masino\n");
}

int avg(int mk[], int len)
{
	int i, sum = 0, average = 0;
	
	for (i = 0; i < 8; i++)
	{
		sum = sum + mk[i];
	}
	printf("Sum is:\n%d\n", sum);
	average = sum / len;
	return (average);
}
