#include <stdio.h>
#include <string.h>

/*
 * main - prints the length of a string with a code.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm[20], nm1[10];
	int i, j;

	printf("Enter the strings here...\n");
	scanf("%s %s", nm, nm1);
	printf("\nThe first string is:\n%s", nm);
	strlen(nm);
	j = strlen(nm);
	printf("\nThe length is:\n%d\n", j);
	printf("\nThe second string is:\n%s", nm1);
	strlen(nm1);
	i = strlen(nm1);
	printf("\nThe length is:\n%d\n", i);
	strcat(nm, nm1);
	printf("\nThe concatenated string is:\n%s\n", nm);
	return (0);
}
