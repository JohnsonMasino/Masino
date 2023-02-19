#include <stdio.h>

/*
 */

char * name();

void main(void)
{
	const char * p, nm[] = "Obinnaya";

	//p[0] = 'U';
	p = name();
	//p[0] = 'U';
	printf("The string is:\n%s\n", p);
}

char * name()
{
	char * nm = "Obinnaya";
	return (nm);
}
