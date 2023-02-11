#include <stdio.h>
#include <string.h>

/*
 * main - compares two strigs.
 * Retrun: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[10];
	int val;

	printf("Enter two strings here...\n");
	scanf("%s %s", nm1, nm2);
	val = strcmp(nm1, nm2);
	if (val == 0)
	{
		printf("The two strings are same\n");
	}
	else
	{
		printf("The two strings are not same\n");
	}
	printf("The compare is:\n%d\n", val);
	return (0);
}
