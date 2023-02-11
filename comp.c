#include <stdio.h>
#include <string.h>

/*
 * main compares two strings and prints out their lengths.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[10];
	int val, len1, len2;

	printf("Enter two strings here:\n");
	scanf("%s %s", nm1, nm2);
	len1 = strlen(nm1);
	len2 = strlen(nm2);
	printf("String one is:\n%s\nThe length is:\n%d\n", nm1, len1);
	printf("\nString two is:\n%s\nThe length is:\n%d\n", nm2, len2);
	val = strcmp(nm1, nm2);
	if (val == 0)
		printf("The two strings are same\n");
	else
		printf("The two strings are not same\n");
	strcat(nm1, nm2);
	printf("The concatenation of both strings is:\n%s\n", nm1);
	return (0);
}
