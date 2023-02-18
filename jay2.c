#include <stdio.h>

/*
 * main - prints the value of a function call.
 * Return: 0.
 * Code by Masino.
 */

int r(void)
{
	static int num = 7;

	return (num--);
}

int main(void)
{
	for (r(); r(); r())
		printf("%d", r());
	printf("\nCode developed by Masino\n");
}
