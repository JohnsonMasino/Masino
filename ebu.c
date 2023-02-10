#include <stdio.h>
#include <string.h>

/*
 * main - concatenates two strings each out of three strings.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char nm1[30], nm2[20], nm3[20];
	int len1, len2, len3;

	printf("Give us your three names...\n");
	scanf("%s %s %s", nm1, nm2, nm3);
	printf("\nThe names individually are:\n%s\n%s\n%s\n", nm1, nm2, nm3);
	len1 = strlen(nm1);
	len2 = strlen(nm2);
	len3 = strlen(nm3);
	printf("\nThe lengths individually are:\n%d\n%d\n%d\n", len1, len2, len3);
	printf("\nLet's concatenate first name and the second:\n");
	strcat(nm1, nm2);
	printf("%s\n", nm1);
	printf("\nLet's concatenate the third name also:\n");
	strcat(nm1, nm3);
	printf("%s\n", nm1);
	printf("\nCode developed by Johnson Masino.\n");
	return (0);
}
