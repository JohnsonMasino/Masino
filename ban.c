#include <stdio.h>

/*
 * main - an increment statement.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i, sum = 0;

	printf("Enter an integer here:\n");
	scanf("%d", &i);
	for (i = 0; i <= 4; i++)
	{
		sum = sum + i;
	}
	printf("Sum is:%d\n", sum);
	printf("Code developed by Masino...\n");
	return (0);
}
