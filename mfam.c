#include <stdio.h>

/*
 */

void masino(int *p, int *q)
{
	p = q;
	*p = 2;
}

int i = 0, j = 1;

int mian(void)
{
	masino(&i, &j);
	printf("%d %d\n", i, j);
	getchar();
	return (0);
}
