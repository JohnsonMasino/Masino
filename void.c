#include <stdio.h>
#include <stdlib.h>

/*
 * main - prints a void pointer.
 * Return: 0.
 * Code by Masino.
 */

int main(void)
{
	int a = 10;
	char b = 'M';
	float c = 9.342;
	void *p;

	p = &a;
	printf("The value of a using pointer is:\n%d\n", *(int *)p);
	p = &b;
	printf("The value of b using pointer is:\n%c\n", *(char *)p);
	p = &c;
	printf("The value of c using pointer is:\n%f\n", *(float *)p);
	printf("\nCode developed by Masino...\n");
	return (0);
}
