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
	char nm[10];
	int length, len;

	printf("Enter a name here:\n");
	length = str(nm, len);
	printf("The length is:\n%d\n", length);
	printf("\nCode developed by Masino\n");
	return (0);
}

int str(char name[], int a)
{
	char nm[10];
	int i, len = 0;

	//len = strlen(nm);
	scanf("%s", nm);
	for (i = 0; nm[i] != '\0'; i++)
	{
		len = len + 1;
	}
	return (len);
}
