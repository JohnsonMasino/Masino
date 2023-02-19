#include <stdio.h>

/*
 * main - prints a return of array to function.
 * Return: array.
 * Code by Masino.
 */

char * name(void);

void main(void)
{
	char * nm;

	nm = name();
	printf("The string is:\n%s\n", nm);
}

char * name(void)
{
	char * a = "Masino";
	
	return (a);
}
