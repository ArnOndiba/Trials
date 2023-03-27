#include <stdio.h>

/**
 * main - printing the address an array
 *
 * return: ALways 0.
 */
int main()
{
	int a[12];

	printf("a: %p\n", a);
	printf("&a: %p\n", &a);
	return 0;
}
