#include <stdio.h>

/**
 * main - storing the address of a variable into a pointer
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	printf("ads of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);
	return 0;
}
