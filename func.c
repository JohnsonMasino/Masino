#include <stdio.h>

/*
 * main - prints a function passing an argument.
 * Return: Argument.
 */

int sum();

int main(void)
{
	printf("Welcomr to Masino's coding section\n");
	sum();
	printf("\nWe can sum other numbers multiple times so try again\n");
	sum();
	printf("\nTry again yet\n");
	sum();
	printf("\nThanks for now\nTry agin tomorrow\n");
	printf("\nCode developed by Masino\n");
	return (0);
}

int sum()
{
	int a, b, sum = 0;

	printf("Enter two numbers here:\n");
	scanf("%d %d", &a, &b);
	printf("These numbers are:\n%d\n%d\n", a, b);
	sum = a + b;
	printf("The sum is:\n%d\n", sum);
	return (0);
}
