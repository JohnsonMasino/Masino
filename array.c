#include <stdio.h>

/*
 * main - prints the array of a pointer element.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i, a[5];

	printf("Enter array of numbers here!\n");
	for (i = 0; i <= 5; i++)
		scanf("\n%d", &a[i]);
	for (i = 0; i <= 5; i++)
		printf("The element in the integer %d is: %d\n", i, a[i]);
	for (i = 5; i >= 0; i--)
		printf("The element in the integer %d is: %d\n", i, a[i]);
	return (0);
}
