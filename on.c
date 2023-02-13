#include <stdio.h>

/*
 * main - prints the value of a pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int q, *p;
	char a[10], b[10], c[10], d[5];

	printf("Hello!\nWelcome to Masino's talk session.\nTell us your name:\n");
	scanf("%s %s %s", a, b, c);
	printf("\nWelcome %s\nPlease tell us your age:\n", b);
	scanf("%d", &q);
	p = &q;
	printf("\nWe welcome you %s at %d\n", b, *p);
	printf("\nTell me if %s is your first name using 'yes' or 'no':\n", a);
	scanf("%s", d);
	printf("\nOkay cool!\nWe will end now!\nSystem under attack\n");
	printf("Terminating...\nCode by Masino\n");
	return (0);
}
