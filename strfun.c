#include <stdio.h>
#include <string.h>

/*
 * main - prints string of a function.
 * Return: 0.
 * Code by Masino.
 */

int str(char [], int);

int main(void)
{
	char nm[] = "Masino";
	int length, len;

	length = str(nm, len);
	printf("The length is:\n%d\n", length);
	printf("\nCode developed by Masino\n");
	return (0);
}

int str(char name[], int a)
{
	char nm[] = "Masino";
	int i, len = 0;

	//len = strlen(nm);
	for (i = 0; nm[i] != '\0'; i++)
	{
		len = len + 1;
	}
	return (len);
}
