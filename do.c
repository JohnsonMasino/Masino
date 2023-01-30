#include <stdio.h>

/*
 * main - prints i and j using do while loop.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i, j;

	do {
		do {
			printf("Masino's line of code\n");
			printf("%d\n", i);
			i++;
		} while (i < 0);
		j++;
		printf("Out of Masino's line of code\n");
		printf("%d\n", j);
	} while (j < 4);
	return (0);
}
