#include <stdio.h>

/*
 * main - prints a string using puts.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char name[30];

	printf("Enter your name here!\n");
	gets(name);
	puts(name);
	return (0);
}
