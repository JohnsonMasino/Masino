#include <stdio.h>

/*
 * main - saves the name, age and occupation of the user.
 * Return: 0.
 * code by Masino.
 */

int main(void)
{
	int age;
	char fnm[10], lnm[10], occu1[10], occu2[10];

	printf("Welcome here user!\nToday we are saving your name,age and occupation only!\nTell us your first and last names please!\n");
	scanf("%s %s", fnm, lnm);
	printf("You are welcome %s\nNow tell us your age\n", fnm);
	scanf("%d", &age);
	printf("Got it!\nNow tell us who you work as (occupation)\n");
	scanf("%s %s", occu1, occu2);
	printf("Cool!\nWe have %s %s who is %d years old and works as a %s %s\n", fnm, lnm, age, occu1, occu2);
	printf("\nThe backend of this program was developed by JohnsonMasino...\n");
	return (0);
}
