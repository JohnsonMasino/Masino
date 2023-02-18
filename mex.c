#include <stdio.h>

/*
 */

int main(void)
{
	int a[10], i, sum = 0, max = a[0];

	printf("Enter ten numbers here:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		sum = sum + a[i];
		if (a[i] > max)
		{
			max = a[i];
		}
		printf("Array[%d] is: %d\n\n", i, a[i]);
	}
	printf("The maximum number is:\n%d\n", max);
	printf("The sum of all numbers is:\n%d\n", sum);
	printf("\nCode developed by Masino\n");
	return (0);
}
