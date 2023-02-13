#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints a null pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3], i, sum = 0;
	int *p;

	printf("Enter three numbers here:\n");
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
	}
	p = (int *)malloc(3 * sizeof(int));
	if (p == NULL)
		printf("No space allocate to the pointer yet\n");
	else
		printf("The sum of these numbers is:\n%d\n", sum);
	p = a;
	printf("Using pointer to print the first element you entered is:\n%d\n", *p);
	printf("\nCode developed by Masino\n");
	return (0);
}
