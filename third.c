#include <stdio.h>

/*
 * main - prints a string at runtime.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char fnm[10], lnm[10];

	printf("Enter your father's first and surnames here...\n");
	scanf("%s %s", fnm, lnm);
	printf("%s %s\n", fnm, lnm);
	return (0);
}
