#include <stdio.h>

/*
 * main - prints a string.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char name1[10], name2[10];
	int age;

	printf("Enter your first and nick names respectively here...\n");
	scanf("%s %s", name1, name2);
	printf("Wow! what a cool nickname %s\n", name2);
	printf("How old are you %s %s ?\n", name1, name2);
	scanf("%d", &age);
	printf("Wow %s you still look young at %d\n", name2, age);
	return (0);
}
