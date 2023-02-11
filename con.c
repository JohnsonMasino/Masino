#include <stdio.h>
#include <string.h>

/*
 * main - prints the length of two strins and concatenates the both.
 * Return; Always 0 (Success).
 * Code by Masino.
 */

int main(void)
{
	char fnm[10], lnm[10];
	int lnl, lnf;

	printf("Enter your first and last names here...\n");
	scanf("%s %s", fnm, lnm);
	printf("The strings are:\n%s\n%s\n", fnm, lnm);
	lnf = strlen(fnm);
	lnl = strlen(lnm);
	printf("The lengths respectively are:\n%d\n%d\n", lnf, lnl);
	strcat(fnm, lnm);
	printf("The concatenated string is:\n%s", fnm);
	strcat(fnm, lnm);
	printf("\nThe reversed string is:\n%s\n", fnm);
	printf("\nCode by Masino\n");
	return (0);
}
