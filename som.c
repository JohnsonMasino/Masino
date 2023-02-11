#include <stdio.h>
#include <string.h>

/*
 * main - A questionaire bot.
 * Return: Always 0(Success).
 * Code by Masino.
 */

int main(void)
{
	char nm1[10], nm2[10], nm3[10], nm4[10], nm5[10], fnm[10], bye[10];
	int len4, len5, ch, lfnm, i;

	printf("Hello!\nWelcome here\nEnter your first three names here...\n");
	scanf("%s %s %s", nm1, nm2, nm3);
	printf("\nWow!\n%s %s %s are cool names dawg\n", nm1, nm2, nm3);
	printf("\nOkay my friend, chose how you want me to address you...\n");
	printf("%s %s\n%s %s\n%s %s\n", nm1, nm2, nm1, nm3, nm2, nm3);
	scanf("%s %s", nm4, nm5);
	printf("\nGot it!\n%s %s is awesome!\n", nm4, nm5);
	len4 = strlen(nm4);
	len5 = strlen(nm5);
	printf("\nWell jyk, the length of both names repectively are:\n%d\n%d\n", len4, len5);
	printf("\n%s %s can you tell us your father's first name...\n", nm4, nm5);
	scanf("%s", fnm);
	printf("\nWow! Cool name we've got here...\n");
	printf("\n%s can actually be spelt backwards as follows:\n", fnm);
	lfnm = strlen(fnm);
	for (i = 0; i < lfnm / 2; i++)
	{
		ch = fnm[i];
		fnm[i] = fnm[lfnm - 1 - i];
		fnm[lfnm - 1 - i] = ch;
	}
	printf("%s\n", fnm);
	printf("\nWell thank you for today %s %s\nWe talk later as I need to be recharged now!\n", nm4, nm5);
	printf("\nI will appreciate it if you give me a bye:\n");
	scanf("%s", bye);
	printf("\nBye too %s %s!\nCode developed by Johnson Masino\n", nm4, nm5);
	return (0);
}
