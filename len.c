#include <stdio.h>
#include <string.h>

/*
 * main - prints the length of a string using coded work.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[15];
	int i = 0, count = 0, i1 = 0, count1 = 0;

	printf("Enter the strings here...\n");
	scanf("%s %s", nm1, nm2);
	printf("%s %s\n", nm1, nm2);
	while (nm1[i] != '\0')
	{
		count++;
		i++;
	}
	printf("The lenght of the first string is:\n");
	printf("%d\n", count);
	while (nm2[i1] != '\0')
	{
		count1++;
		i1++;
	}
	printf("The length of the second string is:\n%d\n", count1);
	return (0);
}
