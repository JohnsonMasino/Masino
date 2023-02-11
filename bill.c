#include <stdio.h>
#include <string.h>

/*
 * main - compares two trings and prints their length.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char s1[10], s2[10];
	int i, l1, l2, comp;

	printf("Enter two strings here...\n");
	scanf("%s %s", s1, s2);
	printf("\nThe two strings are:\n%s\n%s\n", s1, s2);
	l1 = strlen(s1);
	l2 = strlen(s2);
	printf("\nTheir lengths respectively are:\n%d\n%d\n", l1, l2);
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			comp = 1;
			break;
		}
	}
	if (comp == 1)
		printf("The two strings are not same\n");
	else
		printf("The two strings are same\n");
	printf("\nCode developed by Masino\n");
	return (0);
}
