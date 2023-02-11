#include <stdio.h>

/*
 * main - bot.
 * Return: 0.
 * Code by Masino
 */

int main(void)
{
	int age;
	char name[10];

	printf("Enter your name here mate...\n");
	scanf("%s", name);
	printf("\nYou are welcome %s\nTell us your age please\n", name);
	scanf("%d", &age);
	printf("\nNice to meet you %s at %d\n", name, age);
	printf("\nCode developed by Masino\n");
	return (0);
}
