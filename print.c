#include <stdio.h>

/*
 * main - prints Masino using printf.
 * Return: Always 0.
 * Code by Masino.
 */

int main(void)
{
	int num;

	printf("Enter a number\n");
	scanf("%d", &num);
	if (num)
		printf("Masino is my name\n");
	else
		printf("Not recognised\n");
	printf("Code by Masino@github\n");
	return (0);
}
