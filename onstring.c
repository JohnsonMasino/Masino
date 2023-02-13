#include <stdio.h>

/*
 * main - prints manipulation of string on a string.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char str[] = "Welcome to Masino's coding", *ptr = str;

	printf("%c\n", *ptr);
	printf("%c\n", *(ptr++ + 1));
	printf("%c\n", *((ptr-- + 5) - 1) + 5);
	printf("%c\n", *(++ptr + 10) - 32);
	printf("%c\n%c\n%c\n", *ptr, *++ptr, *--ptr);
	printf("\nCode developed by Masino...\n");
	return (0);
}
