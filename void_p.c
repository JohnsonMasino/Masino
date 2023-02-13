#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints the value of a void pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int i[5], o, sum = 0;
	char c[10];
	float f;
	void *p;

	printf("Enter five numbers here:\n");
	for (o = 0; o < 5; o++)
	{
		scanf("%d", &i[o]);
		sum = sum + i[o];
	}
	printf("The sum of these elements is:\n%d\n", sum);
	p = i;
	printf("The first element using void pointer is:\n%d\n", *(int *)p);
	printf("\nEnter your first name here:\n");
	scanf("%s", c);
	printf("Your name is:\n%s\n", c);
	p = c;
	printf("The first letter using void pointer is:\n%c\n", *(char *)p);
	printf("\nEnter a float value here:\n");
	scanf("%f", &f);
	printf("value entered is:\n");
	printf("%f\n", f);
	p = &f;
	printf("This element using void pointer is:\n%f\n", *(float *)p);
	printf("\nCode developed by Masino\n");
	return (0);
}
