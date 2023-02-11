#include <stdio.h>
#include <string.h>

/*
 * main - compares two strings using
 * non specialised functions.
 * Return: Always 0 (Success).
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[20];
	int i, comp;

	printf("Enter two strings here:");
	scanf("%s %s", nm1, nm2);
	printf("The two strings are:\n%s\n%s\n", nm1, nm2);
	for (i = 0; nm1[i] != '\0' || nm2[i] != '\0'; i++)
	{
		if (nm1[i] != nm2[i])
		{
			comp = 1;
			break;
		}
	}
	if (comp == 1)
		printf("The two strings are not same\n");
	else
		printf("The two strings are same\n");
	return (0);
}
