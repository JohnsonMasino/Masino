#include <stdio.h>

/*
 * main - prints a code using do while loop.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int num;

	do {
		printf("Success!\nYou have Masino's code\n");
		num++;
	} while (num > 0);
	{
		printf("Out of block!\n");
	}
	return (0);
}
