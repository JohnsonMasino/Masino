#include <stdio.h>

/*
 */

char * name();

void main(void)
{
	char * p;

	p = name();
	printf("The string is:\n%s\n", p);
}

char * name()
{
	char * nm = "Obinnaya";
	return (nm);
}
