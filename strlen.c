#include <stdio.h>
#include <string.h>

/*
 * main - prints the length of a string.
 * Retrun: 0.
 * Code by Masino.
 */

int main(void)
{
	char name[15], name1[15];
	int i, j;

	printf("Enter the string here...\n");
	scanf("%s %s", name, name1);
	puts(name);
	puts(name1);
	printf("The lenght of the first string is:\n");
	strlen(name);
	i = strlen(name);
	printf("%d\n", i);
	printf("\nThe length of the second string is:\n");
	j = strlen(name1);
	printf("%d\n", j);
	return (0);
}
