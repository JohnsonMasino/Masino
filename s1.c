#include <stdio.h>
#include <string.h>

/*
 * main - concatenates two strings.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm[10], nm1[10];
	int value;

	printf("Enter two strings\n");
	scanf("%s %s", nm, nm1);
	printf("The strings are:\n%s %s\n", nm, nm1);
	strcat(nm, nm1);
	printf("The concatenated string is:\n%s\n", nm);
	printf("Code developed by Masino.\n");
	return (0);
}
