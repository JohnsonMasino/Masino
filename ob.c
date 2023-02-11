#include <stdio.h>
#include <string.h>

/*
 * main - reverses a string.
 * Return: 0
 * Code by Masino.
 */

int main(void)
{
	char name[20];
	int len, i, ch;

	printf("Enter a string here...\n");
	scanf("%s", name);
	len = strlen(name);
	printf("The string is:\n%s\nAnd the length is:\n%d", name, len);
	for (i = 0; i < len/2; i++)
	{
		ch = name[i];
		name[i] = name[len - 1 - i];
		name[len - 1 - i] = ch;
	}
	printf("\nThe reversed string is:\n%s\n", name);
	printf("\nCode developed by Masino\n");
	return (0);
}
