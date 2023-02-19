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
	char nm[10], nm1[10];
	int length,length1, len, len1;

	printf("Enter a name here:\n");
	length = str(nm, len);
	length1 = str(nm1, len1);
	printf("The length of first is:\n%d\n", length);
	printf("The length of second is:\n%d\n", length1);
	printf("\nCode developed by Masino\n");
	return (0);
}

int str(char name[], int a)
{
	char nm[10], nm1[10];
	int i, j, len = 0, len1 = 0;

	//len = strlen(nm);
	scanf("%s", nm);
	for (i = 0; nm[i] != '\0'; i++)
	{
		len = len + 1;
	}
	for (j = 0; nm1[j] != '\0'; j++)
		len1 = len1 + 1;
	return (len);
}
