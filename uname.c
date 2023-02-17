#include <stdio.h>

/*
 * main - prints your name.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char a[10], b[10];

	printf("Please tell us your name here:\n");
	scanf("%s %s", a, b);
	printf("Thank you!\n%s %s\n", a, b);
	return (0);
}
