#include <stdio.h>

/*
 * main - prints more increment and decrement of pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], i, *p;

	printf("Enter five numbers here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	p = a;
	p++;
	p++;
	printf("Going forward twice from first input is:\n%d\n", *p);
	p--;
	printf("Moving backward a step is:\n%d\n", *p);
	p = &a[4];
	printf("The last element is:\n%d\n", *p);
	printf("\nCode by Masino...\n");
	return (0);
}
