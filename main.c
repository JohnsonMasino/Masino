#include <stdio.h>

/*
 */

int * fun(int []);

void main(void)
{
	int *p, a[] = {4, 7, 9, 1, 0, 4, 3, 9};

	p = fun(a);
	printf("Moving pointer forward twice is:\n%d\n", *p);
}

int * fun(int a[])
{
	a = a + 2;
	return (a);
}
