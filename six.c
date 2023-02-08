#include <stdio.h>

/*
 * main - prints a string and other variables.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	char name1[10], name2[10], pres[10];
	int age;

	printf("Welcome to Masino's bot questioning session\nPlease tell me your name\n");
	scanf("%s %s", name1, name2);
	printf("Happy to have you here %s %s\n", name1, name2);
	printf("Would you mind telling me your age?\n");
	scanf("%d", &age);
	if (age < 0)
	{
		printf("Sorry this age is not existing in my database\n");
	}
	else if (age == 0 && age <= 25)
	{
		printf("Wow you are pretty young\n");
	}
	else if (age >= 26 && age <= 60)
	{
		printf("Oh well, you are living in your middle ages\n");
	}
	else
	{
		printf("Oh okay! You are quite old\n");
	}
	printf("Tell me your favourite presidential candidate of 2023 Nigerian election\n");
	scanf("%s", pres);
	printf("%s Hmm...\nIf I may ask, why did you chose %s ?\n", pres, pres);
	scanf("%s %s", name1, name2);
	printf("Okay I see!\nWell, thanks for your time.\nWe will continue next time.\n");
	printf("This bot is developed by Masino\n");
	return (0);
}
