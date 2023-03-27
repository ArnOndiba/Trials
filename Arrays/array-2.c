#include <stdio.h>
/**
 * main - you cannot modify an array
 *
 * Return: 0.
 */
int main()
{
	int a[5];
	int b;
	int c[5];

	a = 0; /* nop */
	a = &b; /* nop */
	a = c; /* nop */
	return 0;
}
