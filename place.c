#include <stdio.h>

/*
 * main - tells you your position in the church.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int age;
	char nm[10];

	printf("Hello!\nPlease tell us your name...\n");
	scanf("%s", nm);
	printf("\nWelcome here %s\nPlease enter your age here:\n", nm);
	scanf("%d", &age);
	printf("\nWell %s:\n", nm);
	if (age >= 0 && age <= 5)
		printf("You are to stay in the ward 1\n");
	else if (age >= 6 && age <= 12)
		printf("You are to stay in the kids ward 2\n");
	else if (age >= 13 && age <= 19)
		printf("You are to stay in the teenage ward 3\n");
	else if (age >= 20 && age <= 60)
		printf("You are to stay in the adult ward 4\n");
	else if (age >= 61 && age <= 130)
		printf("You are to stay in the old people's ward 5\n");
	else
		printf("This age does not exist in my database\n");
	printf("\nThank you!\nCode developed by Masino\n");
	return (0);
}
