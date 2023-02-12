#include <stdio.h>

/*
 * main - decrements a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[3], i, *p;

	printf("Enter three numbers here:\n");
	p = &a[2];
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("\nPrinting your last input by pointer is:\n%d\n", *p);
	p--;
	printf("\nPrinting input before the last is:\n%d\n", *p);
	printf("\nCode developed by Masino...\n");
	return (0);
}
