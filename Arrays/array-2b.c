#include <stdio.h>
/**
 * main - an array is not a pointer, but...
 *
 * Return: 0.
 */
int main()
{
	int a[5]; /* array */
	
	printf("a: %p\n", a);
	printf("&a[0]: %p\n", &a[0]);
	return 0;
}
