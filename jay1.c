#include <stdio.h>

/*
 * main - prints the value of J.
 * Return: 0.
 * Code by Masino.
 */

int in(int i)
{
	static int count = 0;

	count = count + i;
	return (count);
}

int main(void)
{
	int i, j;

	for (i = 0; i <= 4; i++)
		j = in(i);
	printf("The value of J is:\n%d\n", j);
	printf("\nCode developed by Masino\n");
}
