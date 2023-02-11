#include <stdio.h>

/*
 * main - says is an input is true of false.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int ch;

	printf("Enter an integer here\n");
	scanf("%d", &ch);
	if (ch)
		printf("This integer is true (1)\n");
	else
		printf("This integer is false (0)\n");
	printf("Code developed by Masino\n");
	return (0);
}
