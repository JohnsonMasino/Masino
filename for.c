#include <stdio.h>

/*
 * main - prints * using nested for loop.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i;
	char j;

	for (j = 'A'; j <= 'C'; j++)
	{
		for (i = 1; i <= 3; i++)
			printf("%c %d\n", j, i);
	}
	return (0);
}
