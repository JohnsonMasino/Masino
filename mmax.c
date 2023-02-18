#include <stdio.h>

/*
 */

int main(void)
{
	int b[] = {2, 5, 3, 7, 9, 1, 0, 5}, i, max = b[0];

	for (i = 0; i < 8; i++)
	{
		printf("Arr[%d] = %d\n", i, b[i]);
		if (b[i] > max)
		{
			max = b[i];
			printf("New max found: %d\n", b[i]);
		}
	}
	printf("Max is:\n%d\n", max);
	return (0);
}
