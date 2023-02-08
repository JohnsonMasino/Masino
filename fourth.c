#include <stdio.h>

/*
 * main - prints a string.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char name[20];

	printf("Enter your name here...\n");
	scanf("%s", name);
	printf("%5.2s\n", name);
	return (0);
}
