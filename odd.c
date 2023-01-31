#include <stdio.h>

/*
 * main - counts odd and even numbers.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a[5], odd = 0, even = 0, i;

	printf("Enter numbers here:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("The even numbers here are %d\n", even);
	printf("The odd numbers here are %d\n", odd);
	return (0);
}
