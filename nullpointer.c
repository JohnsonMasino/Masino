#include <stdio.h>
#include <stdlib.h>

/*
 * main - assigns space to a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	const int a = 10;
	int *ptr;

	ptr = (int *)malloc(sizeof(int));
	if (ptr == NULL)
		printf("No space allocated yet\n");
	else
		printf("value of a is:\n%d\n", a);
	printf("\nCode developed by Masino...\n");
	return (0);
}
