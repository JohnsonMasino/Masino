#include <stdio.h>

/*
 * main - prints activities of two pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[7], i, *p, *q;

	printf("Enter numbers 1 - 7 here:\n");
	for (i = 0; i < 7; i++)
		scanf("%d", &a[i]);
	p = a;
	printf("The first element is:\n%d\n", *p);
	printf("*++p is: %d\n*p++ is: %d\n(*p)++ is: %d\n", (*p)++, *p++, *++p);
	q = p + 3;
	printf("This line prints 3: %d\n", *q - 3);
	printf("This line prints 7: %d\n", *--p + 5);
	printf("This line prints 8: %d\n", *p + *q);
	printf("\nCode by Masino\n");
	return (0);
}
