#include <stdio.h>

/*
 * main - prints manipulation of pointers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[] = {10, 11, -1, 56, 67, 5, 4}, *p, *q;

	p = a;
	q = &a[0] + 3;
	printf("%d %d %d\n", (*p)++, (*p)++, *(++p));
	printf("%d\n", *p);
	printf("%d\n", (*p)++);
	printf("%d\n", (*p)++);
	q--;
	printf("%d\n", (*(q + 2))--);
	printf("%d\n", *(p + 2) - 2);
	printf("%d\n", *(p++ - 2) - 1);
	printf("\nCode developed by Masino...\n");
	return (0);
}
