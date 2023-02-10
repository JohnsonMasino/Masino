#include <stdio.h>
#include <string.h>

/*
 * main - concatenates two strings
 * using non defined functions.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[10];
	int len1, len2, i;

	printf("Enter the strings here...\n");
	scanf("%s %s", nm1, nm2);
	printf("The strings are:\n%s\n%s\n", nm1, nm2);
	len1 = strlen(nm1);
	len2 = strlen(nm2);
	printf("The lengths respectively are:\n%d\n%d\n", len1, len2);
	for (i = 0; i <= len2; i++)
	{
		nm1[len1 + i] = nm2[i];
	}
	printf("The concatenated string is:\n");
	printf("%s\n", nm1);
	return (0);
}
