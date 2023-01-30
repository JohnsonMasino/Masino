#include <stdio.h>

/*
 * main - assings students to groups.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i;

	printf("Enter your class number...\n");
	scanf("%d", &i);
	if (i >= 1 && i <= 30)
	{
		printf("Group 1.\nDigestive system\n");
	}
	else if (i > 30 && i <= 60)
	{
		printf("Group 2.\nCentral Nervous System(CNS)\n");
	}
	else if (i > 60 && i <= 90)
	{
		printf("Group 3.\nReproductive system\n");
	}
	else if (i > 90 && i <= 120)
	{
		printf("Group 4.\nExcretory system\n");
	}
	else
		printf("You are not registered in this session\n");
	printf("Thank you for participating.\nCode by JOHNSON MASINO (SE)\n");
	return (0);
}
