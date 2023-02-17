#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * main - prints functions of name and age in main block.
 * Return: NULL.
 * Code by Masino.
 */

int nm(void);
int age(void);

int main(void)
{
	printf("We will get your father's name here...\n");
	nm();
	age();
	printf("\nNow we will get your mother's name here...\n");
	nm();
	age();
	printf("\nNow any of your siblings and we are done!\n");
	nm();
	age();
	printf("\nYour name now comes in...\n");
	nm();
	age();
	printf("Wow!\nWe are done! Thank You!\n");
	printf("\nCode developed by Masino\n");
}

int nm(void)
{
	char nm1[10], nm2[10];
	int len1, len2;

	printf("Enter names here:\n");
	scanf("%s %s", nm1, nm2);
	len1 = strlen(nm1);
	len2 = strlen(nm2);
	printf("The length of %s is: %d\n", nm1, len1);
	printf("The length of %s is: %d\n", nm2, len2);
}

int age(void)
{
	int age;

	printf("Please let us know this person's age here:\n");
	scanf("%d", &age);
	printf("Yes!\nWe got the age as %d\n", age);
}
